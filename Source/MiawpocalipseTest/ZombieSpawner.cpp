// Fill out your copyright notice in the Description page of Project Settings.


#include "ZombieSpawner.h"

// Sets default values
AZombieSpawner::AZombieSpawner()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AZombieSpawner::BeginPlay()
{
	Super::BeginPlay();
	
}

/**
* @brief  Spawns the specified number of zombies at random spawn locations.
*/

void AZombieSpawner::SpawnZombies(int32& NumZombies)
{
	for (int i = 0; i < NumZombies; i++) {
		UBlueprint* GeneratedBP = Cast<UBlueprint>(mZombiePrefab);
		UWorld* world = GetWorld();
		FActorSpawnParameters spawnParams;
		spawnParams.Owner = this;
		spawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
		FVector loc = FVector(GetActorLocation().X, GetActorLocation().Y, GetActorLocation().Z + 30);
		world->SpawnActor<AActor>(GeneratedBP->GeneratedClass, loc, GetActorRotation(), spawnParams);
	}

}

/**
* @brief  Starts the continuous spawning of zombies based on the spawn rate.
*/
void AZombieSpawner::StartSpawning()
{
	SpawnZombies(mSpawnRate);
}

// Called every frame
void AZombieSpawner::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	

}

