// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BarrierManager.generated.h"

UCLASS()
class MIAWPOCALIPSETEST_API ABarrierManager : public AActor
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere)
	UObject* Barriers[5];
	
public:	
	// Sets default values for this actor's properties
	ABarrierManager();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	UFUNCTION(BlueprintCallable)
	void OpenBarrier(int& IdBarrier);
	UFUNCTION(BlueprintCallable)
	void CloseBarrier(int& IdBarrier);
	UFUNCTION(BlueprintCallable)
	void ToggleBarrier(int& IdBarrier);
	UFUNCTION(BlueprintCallable)
	bool IsBarrierOpen(int& IdBarrier);
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
