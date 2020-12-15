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
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APuzzlesGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Puzzles,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APuzzlesGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "PuzzlesGameModeBase.h" },
		{ "ModuleRelativePath", "PuzzlesGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APuzzlesGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APuzzlesGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APuzzlesGameModeBase_Statics::ClassParams = {
		&APuzzlesGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
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
	IMPLEMENT_CLASS(APuzzlesGameModeBase, 4014529104);
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
