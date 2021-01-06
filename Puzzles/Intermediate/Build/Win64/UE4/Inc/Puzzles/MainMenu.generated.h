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

#define Puzzles_Source_Puzzles_MainMenu_h_15_SPARSE_DATA
#define Puzzles_Source_Puzzles_MainMenu_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execQuitGame); \
	DECLARE_FUNCTION(execReturnToMain); \
	DECLARE_FUNCTION(execOpenJoinMenu); \
	DECLARE_FUNCTION(execJoinServer); \
	DECLARE_FUNCTION(execHostServer);


#define Puzzles_Source_Puzzles_MainMenu_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execQuitGame); \
	DECLARE_FUNCTION(execReturnToMain); \
	DECLARE_FUNCTION(execOpenJoinMenu); \
	DECLARE_FUNCTION(execJoinServer); \
	DECLARE_FUNCTION(execHostServer);


#define Puzzles_Source_Puzzles_MainMenu_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMainMenu(); \
	friend struct Z_Construct_UClass_UMainMenu_Statics; \
public: \
	DECLARE_CLASS(UMainMenu, UMenuWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Puzzles"), NO_API) \
	DECLARE_SERIALIZER(UMainMenu)


#define Puzzles_Source_Puzzles_MainMenu_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUMainMenu(); \
	friend struct Z_Construct_UClass_UMainMenu_Statics; \
public: \
	DECLARE_CLASS(UMainMenu, UMenuWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Puzzles"), NO_API) \
	DECLARE_SERIALIZER(UMainMenu)


#define Puzzles_Source_Puzzles_MainMenu_h_15_STANDARD_CONSTRUCTORS \
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


#define Puzzles_Source_Puzzles_MainMenu_h_15_ENHANCED_CONSTRUCTORS \
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


#define Puzzles_Source_Puzzles_MainMenu_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__HostButton() { return STRUCT_OFFSET(UMainMenu, HostButton); } \
	FORCEINLINE static uint32 __PPO__JoinButton() { return STRUCT_OFFSET(UMainMenu, JoinButton); } \
	FORCEINLINE static uint32 __PPO__BackButton() { return STRUCT_OFFSET(UMainMenu, BackButton); } \
	FORCEINLINE static uint32 __PPO__ExitButton() { return STRUCT_OFFSET(UMainMenu, ExitButton); } \
	FORCEINLINE static uint32 __PPO__JoinServerButton() { return STRUCT_OFFSET(UMainMenu, JoinServerButton); } \
	FORCEINLINE static uint32 __PPO__MenuSwitcher() { return STRUCT_OFFSET(UMainMenu, MenuSwitcher); } \
	FORCEINLINE static uint32 __PPO__MainMenu() { return STRUCT_OFFSET(UMainMenu, MainMenu); } \
	FORCEINLINE static uint32 __PPO__JoinMenu() { return STRUCT_OFFSET(UMainMenu, JoinMenu); } \
	FORCEINLINE static uint32 __PPO__IPAddress() { return STRUCT_OFFSET(UMainMenu, IPAddress); }


#define Puzzles_Source_Puzzles_MainMenu_h_12_PROLOG
#define Puzzles_Source_Puzzles_MainMenu_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Puzzles_Source_Puzzles_MainMenu_h_15_PRIVATE_PROPERTY_OFFSET \
	Puzzles_Source_Puzzles_MainMenu_h_15_SPARSE_DATA \
	Puzzles_Source_Puzzles_MainMenu_h_15_RPC_WRAPPERS \
	Puzzles_Source_Puzzles_MainMenu_h_15_INCLASS \
	Puzzles_Source_Puzzles_MainMenu_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Puzzles_Source_Puzzles_MainMenu_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Puzzles_Source_Puzzles_MainMenu_h_15_PRIVATE_PROPERTY_OFFSET \
	Puzzles_Source_Puzzles_MainMenu_h_15_SPARSE_DATA \
	Puzzles_Source_Puzzles_MainMenu_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Puzzles_Source_Puzzles_MainMenu_h_15_INCLASS_NO_PURE_DECLS \
	Puzzles_Source_Puzzles_MainMenu_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PUZZLES_API UClass* StaticClass<class UMainMenu>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Puzzles_Source_Puzzles_MainMenu_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
