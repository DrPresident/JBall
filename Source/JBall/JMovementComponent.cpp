// Fill out your copyright notice in the Description page of Project Settings.

#include "JMovementComponent.h"

UJMovementComponent::UJMovementComponent(const class FObjectInitializer& init) : Super(init){

}

void UJMovementComponent::InitializeComponent() 
{
	Super::InitializeComponent();
}

void UJMovementComponent::StopMomentum() 
{
	Velocity *= FVector(0, 0, 1);
}

void UJMovementComponent::TickComponent(float dTime, enum ELevelTick TickType, FActorComponentTickFunction *ThisTickFunction) {

}
