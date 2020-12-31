// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Puzzles/PuzzlesGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePuzzlesGameModeBase() {}
// Cross Module References
	PUZZLES_API UClass* Z_Construct_UClass_APuzzlesGameModeBase_NoRegister();
	PUZZLES_API UClass* Z_Construct_UClass_APuzzlesGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Puzzles();
	PUZZLES_API UClass* Z_Construct_UClass_APuzzleSolver_NoRegister();
// End Cross Module References
	void APuzzlesGameModeBase::StaticRegisterNativesAPuzzlesGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_APuzzlesGameModeBase_NoRegister()
	{
		return APuzzlesGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_APuzzlesGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Solver_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Solver;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APuzzlesGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Puzzles,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APuzzlesGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "PuzzlesGameModeBase.h" },
		{ "ModuleRelativePath", "PuzzlesGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APuzzlesGameModeBase_Statics::NewProp_Solver_MetaData[] = {
		{ "Category", "PuzzlesGameModeBase" },
		{ "ModuleRelativePath", "PuzzlesGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APuzzlesGameModeBase_Statics::NewProp_Solver = { "Solver", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APuzzlesGameModeBase, Solver), Z_Construct_UClass_APuzzleSolver_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APuzzlesGameModeBase_Statics::NewProp_Solver_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APuzzlesGameModeBase_Statics::NewProp_Solver_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APuzzlesGameModeBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APuzzlesGameModeBase_Statics::NewProp_Solver,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APuzzlesGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APuzzlesGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APuzzlesGameModeBase_Statics::ClassParams = {
		&APuzzlesGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APuzzlesGameModeBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APuzzlesGameModeBase_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_APuzzlesGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APuzzlesGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APuzzlesGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APuzzlesGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APuzzlesGameModeBase, 1316603951);
	template<> PUZZLES_API UClass* StaticClass<APuzzlesGameModeBase>()
	{
		return APuzzlesGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APuzzlesGameModeBase(Z_Construct_UClass_APuzzlesGameModeBase, &APuzzlesGameModeBase::StaticClass, TEXT("/Script/Puzzles"), TEXT("APuzzlesGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APuzzlesGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
