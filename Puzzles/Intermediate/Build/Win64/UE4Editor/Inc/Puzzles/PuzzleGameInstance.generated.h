// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PUZZLES_PuzzleGameInstance_generated_h
#error "PuzzleGameInstance.generated.h already included, missing '#pragma once' in PuzzleGameInstance.h"
#endif
#define PUZZLES_PuzzleGameInstance_generated_h

#define Puzzles_Source_Puzzles_PuzzleGameInstance_h_15_SPARSE_DATA
#define Puzzles_Source_Puzzles_PuzzleGameInstance_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execJoin); \
	DECLARE_FUNCTION(execHost);


#define Puzzles_Source_Puzzles_PuzzleGameInstance_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execJoin); \
	DECLARE_FUNCTION(execHost);


#define Puzzles_Source_Puzzles_PuzzleGameInstance_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPuzzleGameInstance(); \
	friend struct Z_Construct_UClass_UPuzzleGameInstance_Statics; \
public: \
	DECLARE_CLASS(UPuzzleGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Puzzles"), NO_API) \
	DECLARE_SERIALIZER(UPuzzleGameInstance)


#define Puzzles_Source_Puzzles_PuzzleGameInstance_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUPuzzleGameInstance(); \
	friend struct Z_Construct_UClass_UPuzzleGameInstance_Statics; \
public: \
	DECLARE_CLASS(UPuzzleGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Puzzles"), NO_API) \
	DECLARE_SERIALIZER(UPuzzleGameInstance)


#define Puzzles_Source_Puzzles_PuzzleGameInstance_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPuzzleGameInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPuzzleGameInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPuzzleGameInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPuzzleGameInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPuzzleGameInstance(UPuzzleGameInstance&&); \
	NO_API UPuzzleGameInstance(const UPuzzleGameInstance&); \
public:


#define Puzzles_Source_Puzzles_PuzzleGameInstance_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPuzzleGameInstance(UPuzzleGameInstance&&); \
	NO_API UPuzzleGameInstance(const UPuzzleGameInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPuzzleGameInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPuzzleGameInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPuzzleGameInstance)


#define Puzzles_Source_Puzzles_PuzzleGameInstance_h_15_PRIVATE_PROPERTY_OFFSET
#define Puzzles_Source_Puzzles_PuzzleGameInstance_h_12_PROLOG
#define Puzzles_Source_Puzzles_PuzzleGameInstance_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Puzzles_Source_Puzzles_PuzzleGameInstance_h_15_PRIVATE_PROPERTY_OFFSET \
	Puzzles_Source_Puzzles_PuzzleGameInstance_h_15_SPARSE_DATA \
	Puzzles_Source_Puzzles_PuzzleGameInstance_h_15_RPC_WRAPPERS \
	Puzzles_Source_Puzzles_PuzzleGameInstance_h_15_INCLASS \
	Puzzles_Source_Puzzles_PuzzleGameInstance_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Puzzles_Source_Puzzles_PuzzleGameInstance_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Puzzles_Source_Puzzles_PuzzleGameInstance_h_15_PRIVATE_PROPERTY_OFFSET \
	Puzzles_Source_Puzzles_PuzzleGameInstance_h_15_SPARSE_DATA \
	Puzzles_Source_Puzzles_PuzzleGameInstance_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Puzzles_Source_Puzzles_PuzzleGameInstance_h_15_INCLASS_NO_PURE_DECLS \
	Puzzles_Source_Puzzles_PuzzleGameInstance_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PUZZLES_API UClass* StaticClass<class UPuzzleGameInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Puzzles_Source_Puzzles_PuzzleGameInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
