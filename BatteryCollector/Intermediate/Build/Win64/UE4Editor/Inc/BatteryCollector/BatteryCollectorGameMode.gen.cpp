// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "BatteryCollectorGameMode.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBatteryCollectorGameMode() {}
// Cross Module References
	BATTERYCOLLECTOR_API UEnum* Z_Construct_UEnum_BatteryCollector_EBatteryPlayState();
	UPackage* Z_Construct_UPackage__Script_BatteryCollector();
	BATTERYCOLLECTOR_API UFunction* Z_Construct_UFunction_ABatteryCollectorGameMode_GetCurrentState();
	BATTERYCOLLECTOR_API UClass* Z_Construct_UClass_ABatteryCollectorGameMode();
	BATTERYCOLLECTOR_API UFunction* Z_Construct_UFunction_ABatteryCollectorGameMode_GetPowerToWin();
	BATTERYCOLLECTOR_API UClass* Z_Construct_UClass_ABatteryCollectorGameMode_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
static UEnum* EBatteryPlayState_StaticEnum()
{
	static UEnum* Singleton = nullptr;
	if (!Singleton)
	{
		Singleton = GetStaticEnum(Z_Construct_UEnum_BatteryCollector_EBatteryPlayState, Z_Construct_UPackage__Script_BatteryCollector(), TEXT("EBatteryPlayState"));
	}
	return Singleton;
}
static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBatteryPlayState(EBatteryPlayState_StaticEnum, TEXT("/Script/BatteryCollector"), TEXT("EBatteryPlayState"), false, nullptr, nullptr);
	UEnum* Z_Construct_UEnum_BatteryCollector_EBatteryPlayState()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_BatteryCollector();
		extern uint32 Get_Z_Construct_UEnum_BatteryCollector_EBatteryPlayState_CRC();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBatteryPlayState"), 0, Get_Z_Construct_UEnum_BatteryCollector_EBatteryPlayState_CRC(), false);
		if (!ReturnEnum)
		{
			ReturnEnum = new(EC_InternalUseOnlyConstructor, Outer, TEXT("EBatteryPlayState"), RF_Public|RF_Transient|RF_MarkAsNative) UEnum(FObjectInitializer());
			TArray<TPair<FName, int64>> EnumNames;
			EnumNames.Emplace(TEXT("EBatteryPlayState::EPlaying"), 0);
			EnumNames.Emplace(TEXT("EBatteryPlayState::EGameOver"), 1);
			EnumNames.Emplace(TEXT("EBatteryPlayState::EWon"), 2);
			EnumNames.Emplace(TEXT("EBatteryPlayState::EUnknown"), 3);
			EnumNames.Emplace(TEXT("EBatteryPlayState::EBatteryPlayState_MAX"), 4);
			ReturnEnum->SetEnums(EnumNames, UEnum::ECppForm::EnumClass);
			ReturnEnum->CppType = TEXT("EBatteryPlayState");
#if WITH_METADATA
			UMetaData* MetaData = ReturnEnum->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnEnum, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnEnum, TEXT("ModuleRelativePath"), TEXT("BatteryCollectorGameMode.h"));
			MetaData->SetValue(ReturnEnum, TEXT("ToolTip"), TEXT("enum to store current state of gameplay"));
#endif
		}
		return ReturnEnum;
	}
	uint32 Get_Z_Construct_UEnum_BatteryCollector_EBatteryPlayState_CRC() { return 3129699517U; }
	void ABatteryCollectorGameMode::StaticRegisterNativesABatteryCollectorGameMode()
	{
		UClass* Class = ABatteryCollectorGameMode::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "GetCurrentState", (Native)&ABatteryCollectorGameMode::execGetCurrentState },
			{ "GetPowerToWin", (Native)&ABatteryCollectorGameMode::execGetPowerToWin },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_ABatteryCollectorGameMode_GetCurrentState()
	{
		struct BatteryCollectorGameMode_eventGetCurrentState_Parms
		{
			EBatteryPlayState ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_ABatteryCollectorGameMode();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetCurrentState"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x54020401, 65535, sizeof(BatteryCollectorGameMode_eventGetCurrentState_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(ReturnValue, BatteryCollectorGameMode_eventGetCurrentState_Parms), 0x0010000000000580, Z_Construct_UEnum_BatteryCollector_EBatteryPlayState());
			UProperty* NewProp_ReturnValue_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_ReturnValue, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Power"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("BatteryCollectorGameMode.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Return current playing state"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ABatteryCollectorGameMode_GetPowerToWin()
	{
		struct BatteryCollectorGameMode_eventGetPowerToWin_Parms
		{
			float ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_ABatteryCollectorGameMode();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetPowerToWin"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x54020401, 65535, sizeof(BatteryCollectorGameMode_eventGetPowerToWin_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(ReturnValue, BatteryCollectorGameMode_eventGetPowerToWin_Parms), 0x0010000000000580);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Power"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("BatteryCollectorGameMode.h"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABatteryCollectorGameMode_NoRegister()
	{
		return ABatteryCollectorGameMode::StaticClass();
	}
	UClass* Z_Construct_UClass_ABatteryCollectorGameMode()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AGameModeBase();
			Z_Construct_UPackage__Script_BatteryCollector();
			OuterClass = ABatteryCollectorGameMode::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20880288u;

				OuterClass->LinkChild(Z_Construct_UFunction_ABatteryCollectorGameMode_GetCurrentState());
				OuterClass->LinkChild(Z_Construct_UFunction_ABatteryCollectorGameMode_GetPowerToWin());

				UProperty* NewProp_CurrentWidget = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CurrentWidget"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(CurrentWidget, ABatteryCollectorGameMode), 0x0020080000080008, Z_Construct_UClass_UUserWidget_NoRegister());
				UProperty* NewProp_HUDWidgetClass = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("HUDWidgetClass"), RF_Public|RF_Transient|RF_MarkAsNative) UClassProperty(CPP_PROPERTY_BASE(HUDWidgetClass, ABatteryCollectorGameMode), 0x0024080000010005, Z_Construct_UClass_UUserWidget_NoRegister(), Z_Construct_UClass_UClass());
				UProperty* NewProp_PowerToWin = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("PowerToWin"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(PowerToWin, ABatteryCollectorGameMode), 0x0020080000010005);
				UProperty* NewProp_DecayRate = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("DecayRate"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(DecayRate, ABatteryCollectorGameMode), 0x0020080000010005);
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ABatteryCollectorGameMode_GetCurrentState(), "GetCurrentState"); // 4061418051
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ABatteryCollectorGameMode_GetPowerToWin(), "GetPowerToWin"); // 973573833
				static TCppClassTypeInfo<TCppClassTypeTraits<ABatteryCollectorGameMode> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("BatteryCollectorGameMode.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("BatteryCollectorGameMode.h"));
				MetaData->SetValue(OuterClass, TEXT("ShowCategories"), TEXT("Input|MouseInput Input|TouchInput"));
				MetaData->SetValue(NewProp_CurrentWidget, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_CurrentWidget, TEXT("ModuleRelativePath"), TEXT("BatteryCollectorGameMode.h"));
				MetaData->SetValue(NewProp_CurrentWidget, TEXT("ToolTip"), TEXT("Instance"));
				MetaData->SetValue(NewProp_HUDWidgetClass, TEXT("BlueprintProtected"), TEXT("true"));
				MetaData->SetValue(NewProp_HUDWidgetClass, TEXT("Category"), TEXT("Power"));
				MetaData->SetValue(NewProp_HUDWidgetClass, TEXT("ModuleRelativePath"), TEXT("BatteryCollectorGameMode.h"));
				MetaData->SetValue(NewProp_HUDWidgetClass, TEXT("ToolTip"), TEXT("Widget class to use for HUD screen"));
				MetaData->SetValue(NewProp_PowerToWin, TEXT("BlueprintProtected"), TEXT("true"));
				MetaData->SetValue(NewProp_PowerToWin, TEXT("Category"), TEXT("Power"));
				MetaData->SetValue(NewProp_PowerToWin, TEXT("ModuleRelativePath"), TEXT("BatteryCollectorGameMode.h"));
				MetaData->SetValue(NewProp_PowerToWin, TEXT("ToolTip"), TEXT("The power needed to win"));
				MetaData->SetValue(NewProp_DecayRate, TEXT("BlueprintProtected"), TEXT("true"));
				MetaData->SetValue(NewProp_DecayRate, TEXT("Category"), TEXT("Power"));
				MetaData->SetValue(NewProp_DecayRate, TEXT("ModuleRelativePath"), TEXT("BatteryCollectorGameMode.h"));
				MetaData->SetValue(NewProp_DecayRate, TEXT("ToolTip"), TEXT("The rate at which the character loses power"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABatteryCollectorGameMode, 3236197390);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABatteryCollectorGameMode(Z_Construct_UClass_ABatteryCollectorGameMode, &ABatteryCollectorGameMode::StaticClass, TEXT("/Script/BatteryCollector"), TEXT("ABatteryCollectorGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABatteryCollectorGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
