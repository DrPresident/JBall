#include "JPlayer.h"
#include "Engine.h"
#include "GameFramework/Pawn.h"

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
	warpTraceParams = FCollisionQueryParams(FName(TEXT("Warp Trace")), true, this);
	warpTraceParams.bTraceComplex = true;
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
}

void AJPlayer::BeginPlay()
{
	Super::BeginPlay();
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, TEXT("JBALL!!"));
	//RootComponent = MeshComponent;
}

void AJPlayer::Tick(float dTime)
{
	Super::Tick(dTime);

	warpVector = FRotator(GetControlRotation().Pitch,0,0).RotateVector(GetActorForwardVector()) * WarpDistance;

	FHitResult warpHit;
	ActorLineTraceSingle(warpHit, GetActorLocation(), GetActorLocation() + warpVector, ECC_PhysicsBody, warpTraceParams);

	//update warpVector for blocking objects
	if (warpHit.bBlockingHit)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, TEXT("Blocking Hit"));
		warpVector = GetActorLocation() - warpHit.Location;
	}

	//position Warp Marker
	WarpMarker->SetRelativeLocation(WarpPoint);

	//Warp logic
	if (warping) 
	{
		//start of warp
		if (w == WarpSpeed) {
			w = 0;
			WarpPoint = GetActorLocation() + warpVector;
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, TEXT("Start Warp"));
		}

		//Lock motion when warping
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


	DrawDebugLine(GetWorld(),GetActorLocation(), WarpPoint, FColor::Green, false, -1, 0, 1.f);
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
