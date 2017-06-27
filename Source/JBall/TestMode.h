#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "TestMode.generated.h"

/** TestMode
 **
 ** Mode for testing stuff
 */
UCLASS()
class JBALL_API ATestMode : public AGameMode
{
	GENERATED_BODY()

	ATestMode(const FObjectInitializer &init);

	virtual void StartPlay() override;
};
