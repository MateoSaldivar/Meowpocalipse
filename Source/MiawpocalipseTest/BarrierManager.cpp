// Fill out your copyright notice in the Description page of Project Settings.


#include "BarrierManager.h"

// Sets default values
ABarrierManager::ABarrierManager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABarrierManager::BeginPlay()
{
	Super::BeginPlay();
	
}

/**
* @brief Opens the specified barrier.
*/
void ABarrierManager::OpenBarrier(int& IdBarrier)
{
	AActor* tmpActor = Cast<AActor>(Barriers[IdBarrier]);
	tmpActor->SetActorEnableCollision(false);
}
/**
* @brief Closes the specified barrier.
*/
void ABarrierManager::CloseBarrier(int& IdBarrier)
{
	AActor* tmpActor = Cast<AActor>(Barriers[IdBarrier]);
	tmpActor->SetActorEnableCollision(true);
}
/**
* @brief Toggles the state of the specified barrier.
*/
void ABarrierManager::ToggleBarrier(int& IdBarrier)
{
	AActor* tmpActor = Cast<AActor>(Barriers[IdBarrier]);
	bool tmp = tmpActor->GetActorEnableCollision();
	if (tmp==true) {
		tmpActor->SetActorEnableCollision(false);
	}
	else {
		tmpActor->SetActorEnableCollision(true);
	}
}
/**
* @brief Checks if the specified barrier is open.
*/
bool ABarrierManager::IsBarrierOpen(int& IdBarrier)
{
	AActor* tmpActor = Cast<AActor>(Barriers[IdBarrier]);
	return tmpActor->GetActorEnableCollision();
}

// Called every frame
void ABarrierManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

