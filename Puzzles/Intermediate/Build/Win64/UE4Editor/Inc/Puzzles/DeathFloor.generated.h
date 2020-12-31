// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef PUZZLES_DeathFloor_generated_h
#error "DeathFloor.generated.h already included, missing '#pragma once' in DeathFloor.h"
#endif
#define PUZZLES_DeathFloor_generated_h

#define Puzzles_Source_Puzzles_DeathFloor_h_12_SPARSE_DATA
#define Puzzles_Source_Puzzles_DeathFloor_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define Puzzles_Source_Puzzles_DeathFloor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define Puzzles_Source_Puzzles_DeathFloor_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADeathFloor(); \
	friend struct Z_Construct_UClass_ADeathFloor_Statics; \
public: \
	DECLARE_CLASS(ADeathFloor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Puzzles"), NO_API) \
	DECLARE_SERIALIZER(ADeathFloor)


#define Puzzles_Source_Puzzles_DeathFloor_h_12_INCLASS \
private: \
	static void StaticRegisterNativesADeathFloor(); \
	friend struct Z_Construct_UClass_ADeathFloor_Statics; \
public: \
	DECLARE_CLASS(ADeathFloor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Puzzles"), NO_API) \
	DECLARE_SERIALIZER(ADeathFloor)


#define Puzzles_Source_Puzzles_DeathFloor_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADeathFloor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADeathFloor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADeathFloor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADeathFloor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADeathFloor(ADeathFloor&&); \
	NO_API ADeathFloor(const ADeathFloor&); \
public:


#define Puzzles_Source_Puzzles_DeathFloor_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADeathFloor(ADeathFloor&&); \
	NO_API ADeathFloor(const ADeathFloor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADeathFloor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADeathFloor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADeathFloor)


#define Puzzles_Source_Puzzles_DeathFloor_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__FloorMesh() { return STRUCT_OFFSET(ADeathFloor, FloorMesh); } \
	FORCEINLINE static uint32 __PPO__DamageType() { return STRUCT_OFFSET(ADeathFloor, DamageType); } \
	FORCEINLINE static uint32 __PPO__Damage() { return STRUCT_OFFSET(ADeathFloor, Damage); }


#define Puzzles_Source_Puzzles_DeathFloor_h_9_PROLOG
#define Puzzles_Source_Puzzles_DeathFloor_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Puzzles_Source_Puzzles_DeathFloor_h_12_PRIVATE_PROPERTY_OFFSET \
	Puzzles_Source_Puzzles_DeathFloor_h_12_SPARSE_DATA \
	Puzzles_Source_Puzzles_DeathFloor_h_12_RPC_WRAPPERS \
	Puzzles_Source_Puzzles_DeathFloor_h_12_INCLASS \
	Puzzles_Source_Puzzles_DeathFloor_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Puzzles_Source_Puzzles_DeathFloor_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Puzzles_Source_Puzzles_DeathFloor_h_12_PRIVATE_PROPERTY_OFFSET \
	Puzzles_Source_Puzzles_DeathFloor_h_12_SPARSE_DATA \
	Puzzles_Source_Puzzles_DeathFloor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Puzzles_Source_Puzzles_DeathFloor_h_12_INCLASS_NO_PURE_DECLS \
	Puzzles_Source_Puzzles_DeathFloor_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PUZZLES_API UClass* StaticClass<class ADeathFloor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Puzzles_Source_Puzzles_DeathFloor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
