// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Pickup.h"
#include "BatteryPickup.generated.h"

/**
 * 
 */
UCLASS()
class BATTERYCOLLECTOR_API ABatteryPickup : public APickup
{
	GENERATED_BODY()
	
public:
	// Sets default values for this actor's properties
	ABatteryPickup();
	
	/** Override WasCollected function - use implementation b/c it's a blurprintnative event */
	void WasCollected_Implementation() override;

	// public way to access battery power level
	float GetPower();

protected:
	/** set the amount of battery power the battery gives the character */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, category = "Power", meta = (BlueprintProtected = "true"))
	float BatteryPower;
	
};
