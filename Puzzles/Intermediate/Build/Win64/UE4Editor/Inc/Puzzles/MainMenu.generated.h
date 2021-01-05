// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PUZZLES_MainMenu_generated_h
#error "MainMenu.generated.h already included, missing '#pragma once' in MainMenu.h"
#endif
#define PUZZLES_MainMenu_generated_h

#define Puzzles_Source_Puzzles_MainMenu_h_16_SPARSE_DATA
#define Puzzles_Source_Puzzles_MainMenu_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHostServer);


#define Puzzles_Source_Puzzles_MainMenu_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHostServer);


#define Puzzles_Source_Puzzles_MainMenu_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMainMenu(); \
	friend struct Z_Construct_UClass_UMainMenu_Statics; \
public: \
	DECLARE_CLASS(UMainMenu, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Puzzles"), NO_API) \
	DECLARE_SERIALIZER(UMainMenu)


#define Puzzles_Source_Puzzles_MainMenu_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUMainMenu(); \
	friend struct Z_Construct_UClass_UMainMenu_Statics; \
public: \
	DECLARE_CLASS(UMainMenu, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Puzzles"), NO_API) \
	DECLARE_SERIALIZER(UMainMenu)


#define Puzzles_Source_Puzzles_MainMenu_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMainMenu(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMainMenu) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMainMenu); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMainMenu); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMainMenu(UMainMenu&&); \
	NO_API UMainMenu(const UMainMenu&); \
public:


#define Puzzles_Source_Puzzles_MainMenu_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMainMenu(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMainMenu(UMainMenu&&); \
	NO_API UMainMenu(const UMainMenu&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMainMenu); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMainMenu); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMainMenu)


#define Puzzles_Source_Puzzles_MainMenu_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Host() { return STRUCT_OFFSET(UMainMenu, Host); } \
	FORCEINLINE static uint32 __PPO__Join() { return STRUCT_OFFSET(UMainMenu, Join); }


#define Puzzles_Source_Puzzles_MainMenu_h_13_PROLOG
#define Puzzles_Source_Puzzles_MainMenu_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Puzzles_Source_Puzzles_MainMenu_h_16_PRIVATE_PROPERTY_OFFSET \
	Puzzles_Source_Puzzles_MainMenu_h_16_SPARSE_DATA \
	Puzzles_Source_Puzzles_MainMenu_h_16_RPC_WRAPPERS \
	Puzzles_Source_Puzzles_MainMenu_h_16_INCLASS \
	Puzzles_Source_Puzzles_MainMenu_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Puzzles_Source_Puzzles_MainMenu_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Puzzles_Source_Puzzles_MainMenu_h_16_PRIVATE_PROPERTY_OFFSET \
	Puzzles_Source_Puzzles_MainMenu_h_16_SPARSE_DATA \
	Puzzles_Source_Puzzles_MainMenu_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Puzzles_Source_Puzzles_MainMenu_h_16_INCLASS_NO_PURE_DECLS \
	Puzzles_Source_Puzzles_MainMenu_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PUZZLES_API UClass* StaticClass<class UMainMenu>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Puzzles_Source_Puzzles_MainMenu_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
