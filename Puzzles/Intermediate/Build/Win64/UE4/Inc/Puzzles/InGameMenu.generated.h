// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PUZZLES_InGameMenu_generated_h
#error "InGameMenu.generated.h already included, missing '#pragma once' in InGameMenu.h"
#endif
#define PUZZLES_InGameMenu_generated_h

#define Puzzles_Source_Puzzles_InGameMenu_h_15_SPARSE_DATA
#define Puzzles_Source_Puzzles_InGameMenu_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execReturnToMain); \
	DECLARE_FUNCTION(execReturnToGame);


#define Puzzles_Source_Puzzles_InGameMenu_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execReturnToMain); \
	DECLARE_FUNCTION(execReturnToGame);


#define Puzzles_Source_Puzzles_InGameMenu_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInGameMenu(); \
	friend struct Z_Construct_UClass_UInGameMenu_Statics; \
public: \
	DECLARE_CLASS(UInGameMenu, UMenuWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Puzzles"), NO_API) \
	DECLARE_SERIALIZER(UInGameMenu)


#define Puzzles_Source_Puzzles_InGameMenu_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUInGameMenu(); \
	friend struct Z_Construct_UClass_UInGameMenu_Statics; \
public: \
	DECLARE_CLASS(UInGameMenu, UMenuWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Puzzles"), NO_API) \
	DECLARE_SERIALIZER(UInGameMenu)


#define Puzzles_Source_Puzzles_InGameMenu_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInGameMenu(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInGameMenu) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInGameMenu); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInGameMenu); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInGameMenu(UInGameMenu&&); \
	NO_API UInGameMenu(const UInGameMenu&); \
public:


#define Puzzles_Source_Puzzles_InGameMenu_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInGameMenu(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInGameMenu(UInGameMenu&&); \
	NO_API UInGameMenu(const UInGameMenu&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInGameMenu); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInGameMenu); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInGameMenu)


#define Puzzles_Source_Puzzles_InGameMenu_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MenuButton() { return STRUCT_OFFSET(UInGameMenu, MenuButton); } \
	FORCEINLINE static uint32 __PPO__BackButton() { return STRUCT_OFFSET(UInGameMenu, BackButton); }


#define Puzzles_Source_Puzzles_InGameMenu_h_12_PROLOG
#define Puzzles_Source_Puzzles_InGameMenu_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Puzzles_Source_Puzzles_InGameMenu_h_15_PRIVATE_PROPERTY_OFFSET \
	Puzzles_Source_Puzzles_InGameMenu_h_15_SPARSE_DATA \
	Puzzles_Source_Puzzles_InGameMenu_h_15_RPC_WRAPPERS \
	Puzzles_Source_Puzzles_InGameMenu_h_15_INCLASS \
	Puzzles_Source_Puzzles_InGameMenu_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Puzzles_Source_Puzzles_InGameMenu_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Puzzles_Source_Puzzles_InGameMenu_h_15_PRIVATE_PROPERTY_OFFSET \
	Puzzles_Source_Puzzles_InGameMenu_h_15_SPARSE_DATA \
	Puzzles_Source_Puzzles_InGameMenu_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Puzzles_Source_Puzzles_InGameMenu_h_15_INCLASS_NO_PURE_DECLS \
	Puzzles_Source_Puzzles_InGameMenu_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PUZZLES_API UClass* StaticClass<class UInGameMenu>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Puzzles_Source_Puzzles_InGameMenu_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
