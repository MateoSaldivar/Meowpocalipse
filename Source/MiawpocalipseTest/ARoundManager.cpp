// Fill out your copyright notice in the Description page of Project Settings.


#include "ARoundManager.h"

// Sets default values
AARoundManager::AARoundManager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AARoundManager::BeginPlay()
{
	Super::BeginPlay();
	
	
}
/**
* @brief  Initiates a new round by updating the round number and triggering enemy spawns.
*/
void AARoundManager::StarNewRound()
{
	CurrentRound++;


}

/**
* @brief  Initiates the shop event when a round ends
*/
void AARoundManager::OpenShop()
{
}

/**
* @brief  Handles the transition to the next round, including zombie spawns and shop events.
*/
void AARoundManager::TransitionToNextRound()
{
}

/**
* @brief Handles level completion when the extraction point appears.
*/ 
void AARoundManager::CompleteLevel()
{
}

// Called every frame
void AARoundManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

