// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ARoundManager.generated.h"

UCLASS()
class MIAWPOCALIPSETEST_API AARoundManager : public AActor
{
	GENERATED_BODY()
private:
	int CurrentRound;
	float TimeBetweenRounds;

public:	
	// Sets default values for this actor's properties
	AARoundManager();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	void StarNewRound();
	void OpenShop();
	void TransitionToNextRound();
	void CompleteLevel();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
