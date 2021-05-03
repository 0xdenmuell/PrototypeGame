// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"

#include "Client.h"

#include "PrototypeGameGameModeBase.generated.h"

#define DefaultSpawnPosition FVector(0.0f, 0.0f, 20.0f)

/**
 *
 */
UCLASS()
class PROTOTYPEGAME_API APrototypeGameGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

		APrototypeGameGameModeBase();

	void BeginPlay();

private:

};