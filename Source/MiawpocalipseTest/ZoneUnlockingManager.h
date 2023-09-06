// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ZoneUnlockingManager.generated.h"

UCLASS()
class MIAWPOCALIPSETEST_API AZoneUnlockingManager : public AActor
{
	GENERATED_BODY()
private:

	UPROPERTY(EditAnywhere)
	UObject* UnlockedZones[7];
	//Events ZoneCompletionEvents[];
public:
	// Sets default values for this actor's properties
	AZoneUnlockingManager();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	UFUNCTION(BlueprintCallable)
	void UnlockZone(UPARAM(ref) int32& ZoneIndex);
	UFUNCTION(BlueprintCallable)
	bool IsZoneUnlocked(UPARAM(ref)int32& ZoneIndex);
	UFUNCTION(BlueprintCallable)
	void HandleZoneCompletion(UPARAM(ref) int32& ZoneIndex);


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
