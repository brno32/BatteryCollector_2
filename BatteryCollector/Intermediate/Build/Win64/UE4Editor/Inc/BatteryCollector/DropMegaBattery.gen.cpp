// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "DropMegaBattery.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDropMegaBattery() {}
// Cross Module References
	BATTERYCOLLECTOR_API UClass* Z_Construct_UClass_UDropMegaBattery_NoRegister();
	BATTERYCOLLECTOR_API UClass* Z_Construct_UClass_UDropMegaBattery();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_BatteryCollector();
	ENGINE_API UClass* Z_Construct_UClass_ATriggerVolume_NoRegister();
	BATTERYCOLLECTOR_API UClass* Z_Construct_UClass_APickup_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	void UDropMegaBattery::StaticRegisterNativesUDropMegaBattery()
	{
	}
	UClass* Z_Construct_UClass_UDropMegaBattery_NoRegister()
	{
		return UDropMegaBattery::StaticClass();
	}
	UClass* Z_Construct_UClass_UDropMegaBattery()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UActorComponent();
			Z_Construct_UPackage__Script_BatteryCollector();
			OuterClass = UDropMegaBattery::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20B00080u;


				UProperty* NewProp_TriggerMass = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("TriggerMass"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(TriggerMass, UDropMegaBattery), 0x0040000000000001);
				UProperty* NewProp_PressurePlate = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("PressurePlate"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(PressurePlate, UDropMegaBattery), 0x0040000000000001, Z_Construct_UClass_ATriggerVolume_NoRegister());
				UProperty* NewProp_WhatToSpawn = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("WhatToSpawn"), RF_Public|RF_Transient|RF_MarkAsNative) UClassProperty(CPP_PROPERTY_BASE(WhatToSpawn, UDropMegaBattery), 0x0024080000000001, Z_Construct_UClass_APickup_NoRegister(), Z_Construct_UClass_UClass());
				static TCppClassTypeInfo<TCppClassTypeTraits<UDropMegaBattery> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintSpawnableComponent"), TEXT(""));
				MetaData->SetValue(OuterClass, TEXT("ClassGroupNames"), TEXT("Custom"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("DropMegaBattery.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("DropMegaBattery.h"));
				MetaData->SetValue(NewProp_TriggerMass, TEXT("Category"), TEXT("DropMegaBattery"));
				MetaData->SetValue(NewProp_TriggerMass, TEXT("ModuleRelativePath"), TEXT("DropMegaBattery.h"));
				MetaData->SetValue(NewProp_PressurePlate, TEXT("Category"), TEXT("DropMegaBattery"));
				MetaData->SetValue(NewProp_PressurePlate, TEXT("ModuleRelativePath"), TEXT("DropMegaBattery.h"));
				MetaData->SetValue(NewProp_WhatToSpawn, TEXT("Category"), TEXT("Spawning"));
				MetaData->SetValue(NewProp_WhatToSpawn, TEXT("ModuleRelativePath"), TEXT("DropMegaBattery.h"));
				MetaData->SetValue(NewProp_WhatToSpawn, TEXT("ToolTip"), TEXT("The pickup to spawn"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDropMegaBattery, 3905562302);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDropMegaBattery(Z_Construct_UClass_UDropMegaBattery, &UDropMegaBattery::StaticClass, TEXT("/Script/BatteryCollector"), TEXT("UDropMegaBattery"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDropMegaBattery);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
