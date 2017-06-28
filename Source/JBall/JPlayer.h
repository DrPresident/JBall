// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "JMovementComponent.h"
#include "ParticleDefinitions.h"

#include "JPlayer.generated.h"

UCLASS()
class JBALL_API AJPlayer : public ACharacter
{
	GENERATED_BODY()

public:
	AJPlayer();

	AJPlayer(const class FObjectInitializer &init);

	virtual void Tick(float dTime) override;

	virtual void SetupPlayerInputComponent(class UInputComponent* comp) override;

	UFUNCTION()
	void MoveForward(float val);
	UFUNCTION()
	void MoveRight(float val);
	UFUNCTION()
	void LookUp(float val);
	UFUNCTION()
	void Turn(float val);
	UFUNCTION()
	void OnStartJump();
	UFUNCTION()
	void OnStopJump();
	UFUNCTION()
	void OnHit(class AActor* otherActor, class UPrimitiveComponent* otherComp, FVector normalImpulse, const FHitResult &hit);
	UFUNCTION()
	void DoubleJump();
	UFUNCTION()
	void Warp();
	UFUNCTION()
	void Throw();
	UFUNCTION()
	void Catch();
	virtual void Landed(const FHitResult &hit) override;

	UPROPERTY(EditAnywhere)
	float WarpDistance;
	UPROPERTY(EditAnywhere)
	int WarpSpeed;

	FVector WarpPoint;

	UCharacterMovementComponent *MovementComponent;
	UStaticMeshComponent *MeshComponent;
	
	UParticleSystemComponent *WarpHandEffect;
	UStaticMeshComponent *WarpMarker;
	UStaticMeshComponent *CharacterMesh;
	
protected:
	virtual void BeginPlay() override;

	bool warped,
		 warping,
		 doubleJumped,
		 jumped,
		 hasBall;

private:
	int w;
	float cameraPitch;
	FVector warpStart;
	FVector warpVector;
	FVector climbCheck;
	FCollisionQueryParams warpTraceParams;
};
