// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ALevelManager.generated.h"

UCLASS()
class MIAWPOCALIPSETEST_API AALevelManager : public AActor
{
	GENERATED_BODY()
private:
	//ZoneUnlockingManager* zoneUnlockingManager;
	//BarrierManager* barrierManager

public:	
	// Sets default values for this actor's properties
	AALevelManager();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	void LoadInitialLevel();
	void LoadNextZone();
	void SetBarrierStatus(bool bIsBarrierOpen);
	void HandleZoneCompletion();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
