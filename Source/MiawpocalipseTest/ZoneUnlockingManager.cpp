// Fill out your copyright notice in the Description page of Project Settings.


#include "ZoneUnlockingManager.h"

// Sets default values
AZoneUnlockingManager::AZoneUnlockingManager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AZoneUnlockingManager::BeginPlay()
{
	Super::BeginPlay();
	
}
/**
* @brief Unlocks the specified zone
*/
void AZoneUnlockingManager::UnlockZone(int32& ZoneIndex)
{
	AActor* tmpActor = Cast<AActor>(UnlockedZones[ZoneIndex]);
	tmpActor->SetActorEnableCollision(false);
}
/**
* @brief Checks if the specified zone is unlocked.
*/
bool AZoneUnlockingManager::IsZoneUnlocked(int32& ZoneIndex)
{
	AActor* tmpActor = Cast<AActor>(UnlockedZones[ZoneIndex]);
	return tmpActor->GetActorEnableCollision();
}
/**
* @brief Handles the completion of the specified zone.
*/
void AZoneUnlockingManager::HandleZoneCompletion(int32& ZoneIndex)
{

}

// Called every frame
void AZoneUnlockingManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

