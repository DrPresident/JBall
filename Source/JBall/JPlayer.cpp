#include "JPlayer.h"
#include "Engine.h"
#include "GameFramework/Pawn.h"

AJPlayer::AJPlayer() 
{
	PrimaryActorTick.bCanEverTick = true;
	jumped = false;
	warped = false;
	doubleJumped = false;
	JumpMaxCount = 2;
	WarpDistance = 1000;
	WarpSpeed = 10;
	warpTraceParams = FCollisionQueryParams(FName(TEXT("Warp Trace")), true, this);
	warpTraceParams.bTraceComplex = true;
	warpTraceParams.bTraceAsyncScene = true;
	warpTraceParams.bReturnPhysicalMaterial = false;
	w = WarpSpeed;
	//MovementComponent = Cast<UJMovementComponent>(GetCharacterMovement());
	MovementComponent = GetCharacterMovement();
	MovementComponent->AirControl = 0.5;

	WarpArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("Warp Arm"));

	cameraPitch = 0.f;

	//Warp Marker Setup
	WarpMarker = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Warp Marker"));
	WarpMarker->bAutoActivate = true;
	static ConstructorHelpers::FObjectFinder<UParticleSystem> Marker(TEXT("/Game/InfinityBladeEffects/Effects/FX_Ability/Summon/P_Summon_Portal"));
	if (Marker.Succeeded())
		WarpMarker->SetTemplate(Marker.Object);

	CharacterMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Character"));
	static ConstructorHelpers::FObjectFinder<USkeletalMesh> Character(TEXT("/Game/AnimStarterPack/UE4_Mannequin/Mesh/SK_Mannequin"));
	if (Character.Succeeded())
		CharacterMesh->SetSkeletalMesh(Character.Object);
}

/*
AJPlayer::AJPlayer(const FObjectInitializer &init)
	//: Super(init.SetDefaultSubobjectClass<UJMovementComponent>(ACharacter::CharacterMovementComponentName))
{
	PrimaryActorTick.bCanEverTick = true;
	jumped = false;
	warped = false;
	doubleJumped = false;
	JumpMaxCount = 2;
	WarpDistance = 1000;
	WarpSpeed = 10;
	warpTraceParams = FCollisionQueryParams(FName("Warp Trace"), true, this);
	//warpTraceParams.bTraceComplex = true;
	warpTraceParams.bTraceAsyncScene = true;
	warpTraceParams.bReturnPhysicalMaterial = false;
	w = WarpSpeed;
	//MovementComponent = Cast<UJMovementComponent>(GetCharacterMovement());
	MovementComponent = GetCharacterMovement();
	MovementComponent->AirControl = 0.5;

	cameraPitch = 0.f;

	//Warp Marker Setup
	WarpMarker = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Warp Marker"));
	WarpMarker->bAutoActivate = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> Sphere(TEXT("/Game/StarterContent/Shapes/Shape_Sphere"));
	if (Sphere.Succeeded()) 
		WarpMarker->SetStaticMesh(Sphere.Object);

	CharacterMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Character"));
	static ConstructorHelpers::FObjectFinder<USkeletalMesh> Character(TEXT("/Game/AnimeStarterPack/UE4_Mannequin/Mesh/SK_Mannequin"));
	//static ConstructorHelpers::FObjectFinder<USkeleton> CharacterSkeleton(TEXT("/Game/AnimeStarterPack/UE4_Mannequin/Mesh/UE4_Mannequin_Skeleton"));
	if (Character.Succeeded())
		CharacterMesh->SetSkeletalMesh(Character.Object);
}
*/

void AJPlayer::BeginPlay()
{
	Super::BeginPlay();
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, TEXT("JBALL!!"));
	//RootComponent = CharacterMesh;
	CharacterMesh->SetupAttachment(RootComponent);
	WarpArm->SetupAttachment(RootComponent);
	WarpMarker->SetupAttachment(WarpArm);
}

void AJPlayer::Tick(float dTime)
{
	Super::Tick(dTime);

	warpVector = GetControlRotation().Vector() * WarpDistance;//FRotator(GetControlRotation().Pitch,0,0).RotateVector(GetActorForwardVector()) * WarpDistance;

	FHitResult warpHit;
	ActorLineTraceSingle(warpHit, GetActorLocation(), GetActorLocation() + warpVector, ECC_MAX, warpTraceParams);

	//update warpVector for blocking objects
	if (warpHit.Location != FVector(0,0,0))
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, warpHit.Location.ToString());
		warpVector = warpHit.Location - GetActorLocation();
	}

	//Warp logic
	if (warping) 
	{
		//start of warp
		if (w == WarpSpeed) {
			w = 0;
			WarpPoint = GetActorLocation() + warpVector;
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, TEXT("Start Warp"));
		}

		//Lock velocity when warping
		MovementComponent->Velocity *= FVector(0, 0, 0);
		//perform partial warp
		SetActorLocation(GetActorLocation() + (warpVector / WarpSpeed));

		w++;
		//end of warp
		if (w == WarpSpeed) {
			warping = false;
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, TEXT("End Warp"));
		}
	}
	else 
		WarpPoint = GetActorLocation() + warpVector;

	//position Warp Marker
	WarpMarker->SetRelativeLocation(WarpPoint);
	CharacterMesh->SetRelativeLocation(FVector(10, 10, 0));
	DrawDebugLine(GetWorld(),GetActorLocation(), WarpPoint, FColor::Red, false, -1, 0, 1.f);
}

void AJPlayer::OnHit(class AActor* otherActor, class UPrimitiveComponent* otherComp, FVector normalImpulse, const FHitResult &hit) 
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, TEXT("Hit!!"));
}

void AJPlayer::SetupPlayerInputComponent(UInputComponent* comp)
{
	Super::SetupPlayerInputComponent(comp);
	comp->BindAxis("MoveForward", this, &AJPlayer::MoveForward);
	comp->BindAxis("MoveRight", this, &AJPlayer::MoveRight);
	comp->BindAxis("Turn", this, &AJPlayer::AddControllerYawInput);
	comp->BindAxis("LookUp", this, &AJPlayer::AddControllerPitchInput);
	comp->BindAction("Jump", IE_Pressed, this, &AJPlayer::OnStartJump);
	comp->BindAction("Jump", IE_Released, this, &AJPlayer::OnStopJump);
	comp->BindAction("Warp", IE_Pressed, this, &AJPlayer::Warp);
}

void AJPlayer::MoveForward(float val) {
	if (Controller && val != 0.0f) {
		FRotator rot = Controller->GetControlRotation();
		if (GetCharacterMovement()->IsMovingOnGround() || GetCharacterMovement()->IsFalling())
			rot.Pitch = 0.0f;

		const FVector dir = FRotationMatrix(rot).GetScaledAxis(EAxis::X);
		AddMovementInput(dir, val);
	}
}

void AJPlayer::MoveRight(float val) {
	if (Controller && val != 0.0f) {
		const FRotator rot = Controller->GetControlRotation();
		const FVector dir = FRotationMatrix(rot).GetScaledAxis(EAxis::Y);
		AddMovementInput(dir, val);
	}
}

void AJPlayer::LookUp(float val) {
	if (val != 0.0) {
		cameraPitch += val;
		AddControllerPitchInput(val);
	}
}

void AJPlayer::Turn(float val) {
	if (Controller && val != 0.0f) {
		const FRotator rot = Controller->GetControlRotation();
		const FVector dir = FRotationMatrix(rot).GetScaledAxis(EAxis::X);
	}
}

void AJPlayer::OnStartJump() {
	if (!jumped) {
		jumped = true;
		Jump();
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, TEXT("Jump"));
	}
	else if (!doubleJumped) {
		DoubleJump();
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, TEXT("Double Jump"));
	}
}

void AJPlayer::OnStopJump() {
}

void AJPlayer::DoubleJump(){
		doubleJumped = true;
		Jump();
}

void AJPlayer::Warp() {
	if (!warped) {
		warped = true;
		warping = true;
		MovementComponent->Velocity *= FVector(0, 0, 1);
	}
}

/* A Player can throw the ball they are holding
 */
void AJPlayer::Throw() {
	if (hasBall) {
		
	}
}

/* Catch
 * 
 * If the player is facing an incoming projectile
 * and are not holding anything, can catch it
 */
void AJPlayer::Catch() {
	if (!hasBall) {

	}
}

void AJPlayer::Landed(const FHitResult &hit) {
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, TEXT("Landed!"));
	jumped = false;
	doubleJumped = false;
	warped = false;
}
