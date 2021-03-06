// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SpawnVolume.generated.h"

UCLASS()
class BATTERYCOLLECTOR_API ASpawnVolume : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASpawnVolume();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	/** Returns where to spawn subobject */
	FORCEINLINE	class UBoxComponent* GetWhereToSpawn() const { return WhereToSpawn; }

	/** Find a random spawn point and return vector */
	UFUNCTION(BlueprintPure, Category = "Spawning")
	FVector GetRandomPointsInVolume();

	/** this function toggles whether or not a spawn volume spawns pickups */
	UFUNCTION(BlueprintCallable, Category = "Spawning")
	void SetSpawningActive(bool bShouldSpawn);

protected:
	/** The pickup to spawn */
	UPROPERTY(EditAnywhere, Category = "Spawning")
	TSubclassOf<class APickup> WhatToSpawn;

	FTimerHandle SpawnTimer;

	/** Minimum spawn delay */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawning")
	float SpawnDelayRangeLow;

	/** Maximum spawn delay */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawning")
	float SpawnDelayRangeHigh;

private:
	/** Box component to specify where pickups should be spawned */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Spawning", meta = (AllowPrivateAccess = true))
	class UBoxComponent* WhereToSpawn;
	
	/** The current spawn delay */
	float SpawnDelay;

	/** Handle spawning new pickup */
	void SpawnPickup();
};
