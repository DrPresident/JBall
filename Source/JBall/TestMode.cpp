#include "TestMode.h"
#include "JPlayer.h"
#include "Engine.h"

ATestMode::ATestMode(const class FObjectInitializer &init) : Super(init)
{
	DefaultPawnClass = AJPlayer::StaticClass();
}

void ATestMode::StartPlay() 
{
	Super::StartPlay();

	StartMatch();

	if (GEngine)
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, TEXT("Test Mode"));

}




