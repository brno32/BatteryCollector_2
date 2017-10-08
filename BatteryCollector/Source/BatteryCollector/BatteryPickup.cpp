// Fill out your copyright notice in the Description page of Project Settings.

#include "BatteryPickup.h"
#include "Runtime/Engine/Classes/Components/StaticMeshComponent.h"

// Set default value
ABatteryPickup::ABatteryPickup()
{
	GetMesh()->SetSimulatePhysics(true);

	// base power lvl of battery
	BatteryPower = 150.f;

}

void ABatteryPickup::WasCollected_Implementation()
{
	// Use the base pickup behaviour
	Super::WasCollected_Implementation();
	// Destroy the battery
	Destroy();
}

float ABatteryPickup::GetPower()
{
	return BatteryPower;
}