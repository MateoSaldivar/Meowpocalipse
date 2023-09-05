// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ZombieSpawner.generated.h"

UCLASS()
class MIAWPOCALIPSETEST_API AZombieSpawner : public AActor
{
	GENERATED_BODY()

private:

	UPROPERTY(EditAnywhere)
	int32 mSpawnRate;

	UPROPERTY(EditAnywhere)
	UObject* mZombiePrefab;

	int mCurrentRound;
public:
	// Sets default values for this actor's properties
	AZombieSpawner();


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	UFUNCTION()
	void SpawnZombies(int32& NumZombies);


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	UFUNCTION(BlueprintCallable)
	void StartSpawning();
};
