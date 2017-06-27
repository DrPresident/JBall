// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "JMovementComponent.generated.h"

/**
 * 
 */
UCLASS()
class JBALL_API UJMovementComponent : public UCharacterMovementComponent
{
	GENERATED_BODY()

public:
	UJMovementComponent(const class FObjectInitializer& init);
	void StopMomentum();

protected:
	virtual void InitializeComponent() override;
	virtual void TickComponent(float dTime, enum ELevelTick TickType, FActorComponentTickFunction *ThisTickFunction) override;

};
