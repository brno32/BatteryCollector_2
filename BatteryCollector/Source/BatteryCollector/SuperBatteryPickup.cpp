// Fill out your copyright notice in the Description page of Project Settings.

#include "SuperBatteryPickup.h"
#include "Runtime/Engine/Classes/Components/StaticMeshComponent.h"

ASuperBatteryPickup::ASuperBatteryPickup()
{
	GetMesh()->SetSimulatePhysics(true);

	// base power lvl of battery
	BatteryPower = 500.f;
}

void ASuperBatteryPickup::WasCollected_Implementation()
{
	// Use the base pickup behaviour
	Super::WasCollected_Implementation();
	// Destroy the battery
	Destroy();
}

//report pwr lvl of battery
float ASuperBatteryPickup::GetPower()
{
	return BatteryPower;
}