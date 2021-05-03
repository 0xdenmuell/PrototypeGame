// Copyright Epic Games, Inc. All Rights Reserved.


#include "PrototypeGameGameModeBase.h"

APrototypeGameGameModeBase::APrototypeGameGameModeBase() {

}


void APrototypeGameGameModeBase::BeginPlay() {
	Super::BeginPlay();

	//Spawn Player Client
	GetWorld()->SpawnActor<AClient>(AClient::StaticClass(), DefaultSpawnPosition, FRotator(0.0f, 0.0f, 0.0f));
	UE_LOG(LogTemp, Warning, TEXT("Client Spawned"));
}