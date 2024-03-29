// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PUZZLES_PuzzleSolver_generated_h
#error "PuzzleSolver.generated.h already included, missing '#pragma once' in PuzzleSolver.h"
#endif
#define PUZZLES_PuzzleSolver_generated_h

#define Puzzles_Source_Puzzles_PuzzleSolver_h_13_SPARSE_DATA
#define Puzzles_Source_Puzzles_PuzzleSolver_h_13_RPC_WRAPPERS
#define Puzzles_Source_Puzzles_PuzzleSolver_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define Puzzles_Source_Puzzles_PuzzleSolver_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPuzzleSolver(); \
	friend struct Z_Construct_UClass_APuzzleSolver_Statics; \
public: \
	DECLARE_CLASS(APuzzleSolver, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Puzzles"), NO_API) \
	DECLARE_SERIALIZER(APuzzleSolver)


#define Puzzles_Source_Puzzles_PuzzleSolver_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAPuzzleSolver(); \
	friend struct Z_Construct_UClass_APuzzleSolver_Statics; \
public: \
	DECLARE_CLASS(APuzzleSolver, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Puzzles"), NO_API) \
	DECLARE_SERIALIZER(APuzzleSolver)


#define Puzzles_Source_Puzzles_PuzzleSolver_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APuzzleSolver(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APuzzleSolver) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APuzzleSolver); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APuzzleSolver); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APuzzleSolver(APuzzleSolver&&); \
	NO_API APuzzleSolver(const APuzzleSolver&); \
public:


#define Puzzles_Source_Puzzles_PuzzleSolver_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APuzzleSolver(APuzzleSolver&&); \
	NO_API APuzzleSolver(const APuzzleSolver&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APuzzleSolver); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APuzzleSolver); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APuzzleSolver)


#define Puzzles_Source_Puzzles_PuzzleSolver_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SpringArm() { return STRUCT_OFFSET(APuzzleSolver, SpringArm); } \
	FORCEINLINE static uint32 __PPO__Camera() { return STRUCT_OFFSET(APuzzleSolver, Camera); }


#define Puzzles_Source_Puzzles_PuzzleSolver_h_10_PROLOG
#define Puzzles_Source_Puzzles_PuzzleSolver_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Puzzles_Source_Puzzles_PuzzleSolver_h_13_PRIVATE_PROPERTY_OFFSET \
	Puzzles_Source_Puzzles_PuzzleSolver_h_13_SPARSE_DATA \
	Puzzles_Source_Puzzles_PuzzleSolver_h_13_RPC_WRAPPERS \
	Puzzles_Source_Puzzles_PuzzleSolver_h_13_INCLASS \
	Puzzles_Source_Puzzles_PuzzleSolver_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Puzzles_Source_Puzzles_PuzzleSolver_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Puzzles_Source_Puzzles_PuzzleSolver_h_13_PRIVATE_PROPERTY_OFFSET \
	Puzzles_Source_Puzzles_PuzzleSolver_h_13_SPARSE_DATA \
	Puzzles_Source_Puzzles_PuzzleSolver_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Puzzles_Source_Puzzles_PuzzleSolver_h_13_INCLASS_NO_PURE_DECLS \
	Puzzles_Source_Puzzles_PuzzleSolver_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PUZZLES_API UClass* StaticClass<class APuzzleSolver>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Puzzles_Source_Puzzles_PuzzleSolver_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
