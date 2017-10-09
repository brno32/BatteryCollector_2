// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "SuperBatteryPickup.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSuperBatteryPickup() {}
// Cross Module References
	BATTERYCOLLECTOR_API UClass* Z_Construct_UClass_ASuperBatteryPickup_NoRegister();
	BATTERYCOLLECTOR_API UClass* Z_Construct_UClass_ASuperBatteryPickup();
	BATTERYCOLLECTOR_API UClass* Z_Construct_UClass_APickup();
	UPackage* Z_Construct_UPackage__Script_BatteryCollector();
// End Cross Module References
	void ASuperBatteryPickup::StaticRegisterNativesASuperBatteryPickup()
	{
	}
	UClass* Z_Construct_UClass_ASuperBatteryPickup_NoRegister()
	{
		return ASuperBatteryPickup::StaticClass();
	}
	UClass* Z_Construct_UClass_ASuperBatteryPickup()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_APickup();
			Z_Construct_UPackage__Script_BatteryCollector();
			OuterClass = ASuperBatteryPickup::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20900080u;


				UProperty* NewProp_BatteryPower = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("BatteryPower"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(BatteryPower, ASuperBatteryPickup), 0x0020080000000005);
				static TCppClassTypeInfo<TCppClassTypeTraits<ASuperBatteryPickup> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("SuperBatteryPickup.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("SuperBatteryPickup.h"));
				MetaData->SetValue(NewProp_BatteryPower, TEXT("BlueprintProtected"), TEXT("true"));
				MetaData->SetValue(NewProp_BatteryPower, TEXT("Category"), TEXT("Power"));
				MetaData->SetValue(NewProp_BatteryPower, TEXT("ModuleRelativePath"), TEXT("SuperBatteryPickup.h"));
				MetaData->SetValue(NewProp_BatteryPower, TEXT("ToolTip"), TEXT("set the amount of battery power the battery gives the character"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASuperBatteryPickup, 191018105);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASuperBatteryPickup(Z_Construct_UClass_ASuperBatteryPickup, &ASuperBatteryPickup::StaticClass, TEXT("/Script/BatteryCollector"), TEXT("ASuperBatteryPickup"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASuperBatteryPickup);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
