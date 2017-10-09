// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BATTERYCOLLECTOR_SuperBatteryPickup_generated_h
#error "SuperBatteryPickup.generated.h already included, missing '#pragma once' in SuperBatteryPickup.h"
#endif
#define BATTERYCOLLECTOR_SuperBatteryPickup_generated_h

#define BatteryCollector_Source_BatteryCollector_SuperBatteryPickup_h_15_RPC_WRAPPERS
#define BatteryCollector_Source_BatteryCollector_SuperBatteryPickup_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define BatteryCollector_Source_BatteryCollector_SuperBatteryPickup_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASuperBatteryPickup(); \
	friend BATTERYCOLLECTOR_API class UClass* Z_Construct_UClass_ASuperBatteryPickup(); \
public: \
	DECLARE_CLASS(ASuperBatteryPickup, APickup, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/BatteryCollector"), NO_API) \
	DECLARE_SERIALIZER(ASuperBatteryPickup) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define BatteryCollector_Source_BatteryCollector_SuperBatteryPickup_h_15_INCLASS \
private: \
	static void StaticRegisterNativesASuperBatteryPickup(); \
	friend BATTERYCOLLECTOR_API class UClass* Z_Construct_UClass_ASuperBatteryPickup(); \
public: \
	DECLARE_CLASS(ASuperBatteryPickup, APickup, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/BatteryCollector"), NO_API) \
	DECLARE_SERIALIZER(ASuperBatteryPickup) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define BatteryCollector_Source_BatteryCollector_SuperBatteryPickup_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASuperBatteryPickup(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASuperBatteryPickup) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASuperBatteryPickup); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASuperBatteryPickup); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASuperBatteryPickup(ASuperBatteryPickup&&); \
	NO_API ASuperBatteryPickup(const ASuperBatteryPickup&); \
public:


#define BatteryCollector_Source_BatteryCollector_SuperBatteryPickup_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASuperBatteryPickup(ASuperBatteryPickup&&); \
	NO_API ASuperBatteryPickup(const ASuperBatteryPickup&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASuperBatteryPickup); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASuperBatteryPickup); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASuperBatteryPickup)


#define BatteryCollector_Source_BatteryCollector_SuperBatteryPickup_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__BatteryPower() { return STRUCT_OFFSET(ASuperBatteryPickup, BatteryPower); }


#define BatteryCollector_Source_BatteryCollector_SuperBatteryPickup_h_12_PROLOG
#define BatteryCollector_Source_BatteryCollector_SuperBatteryPickup_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BatteryCollector_Source_BatteryCollector_SuperBatteryPickup_h_15_PRIVATE_PROPERTY_OFFSET \
	BatteryCollector_Source_BatteryCollector_SuperBatteryPickup_h_15_RPC_WRAPPERS \
	BatteryCollector_Source_BatteryCollector_SuperBatteryPickup_h_15_INCLASS \
	BatteryCollector_Source_BatteryCollector_SuperBatteryPickup_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BatteryCollector_Source_BatteryCollector_SuperBatteryPickup_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BatteryCollector_Source_BatteryCollector_SuperBatteryPickup_h_15_PRIVATE_PROPERTY_OFFSET \
	BatteryCollector_Source_BatteryCollector_SuperBatteryPickup_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	BatteryCollector_Source_BatteryCollector_SuperBatteryPickup_h_15_INCLASS_NO_PURE_DECLS \
	BatteryCollector_Source_BatteryCollector_SuperBatteryPickup_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BatteryCollector_Source_BatteryCollector_SuperBatteryPickup_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
