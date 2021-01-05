// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Puzzles/PuzzleGameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePuzzleGameInstance() {}
// Cross Module References
	PUZZLES_API UClass* Z_Construct_UClass_UPuzzleGameInstance_NoRegister();
	PUZZLES_API UClass* Z_Construct_UClass_UPuzzleGameInstance();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
	UPackage* Z_Construct_UPackage__Script_Puzzles();
	PUZZLES_API UClass* Z_Construct_UClass_UMenuInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UPuzzleGameInstance::execJoin)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Address);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Join(Z_Param_Address);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPuzzleGameInstance::execHost)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Host();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPuzzleGameInstance::execLoadMenu)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadMenu();
		P_NATIVE_END;
	}
	void UPuzzleGameInstance::StaticRegisterNativesUPuzzleGameInstance()
	{
		UClass* Class = UPuzzleGameInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Host", &UPuzzleGameInstance::execHost },
			{ "Join", &UPuzzleGameInstance::execJoin },
			{ "LoadMenu", &UPuzzleGameInstance::execLoadMenu },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPuzzleGameInstance_Host_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPuzzleGameInstance_Host_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PuzzleGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPuzzleGameInstance_Host_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPuzzleGameInstance, nullptr, "Host", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPuzzleGameInstance_Host_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPuzzleGameInstance_Host_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPuzzleGameInstance_Host()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPuzzleGameInstance_Host_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPuzzleGameInstance_Join_Statics
	{
		struct PuzzleGameInstance_eventJoin_Parms
		{
			FString Address;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Address_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Address;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPuzzleGameInstance_Join_Statics::NewProp_Address_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPuzzleGameInstance_Join_Statics::NewProp_Address = { "Address", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PuzzleGameInstance_eventJoin_Parms, Address), METADATA_PARAMS(Z_Construct_UFunction_UPuzzleGameInstance_Join_Statics::NewProp_Address_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPuzzleGameInstance_Join_Statics::NewProp_Address_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPuzzleGameInstance_Join_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPuzzleGameInstance_Join_Statics::NewProp_Address,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPuzzleGameInstance_Join_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PuzzleGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPuzzleGameInstance_Join_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPuzzleGameInstance, nullptr, "Join", nullptr, nullptr, sizeof(PuzzleGameInstance_eventJoin_Parms), Z_Construct_UFunction_UPuzzleGameInstance_Join_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPuzzleGameInstance_Join_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPuzzleGameInstance_Join_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPuzzleGameInstance_Join_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPuzzleGameInstance_Join()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPuzzleGameInstance_Join_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPuzzleGameInstance_LoadMenu_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPuzzleGameInstance_LoadMenu_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PuzzleGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPuzzleGameInstance_LoadMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPuzzleGameInstance, nullptr, "LoadMenu", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPuzzleGameInstance_LoadMenu_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPuzzleGameInstance_LoadMenu_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPuzzleGameInstance_LoadMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPuzzleGameInstance_LoadMenu_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPuzzleGameInstance_NoRegister()
	{
		return UPuzzleGameInstance::StaticClass();
	}
	struct Z_Construct_UClass_UPuzzleGameInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPuzzleGameInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_Puzzles,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPuzzleGameInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPuzzleGameInstance_Host, "Host" }, // 2239856190
		{ &Z_Construct_UFunction_UPuzzleGameInstance_Join, "Join" }, // 1326074223
		{ &Z_Construct_UFunction_UPuzzleGameInstance_LoadMenu, "LoadMenu" }, // 2408180339
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPuzzleGameInstance_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "PuzzleGameInstance.h" },
		{ "ModuleRelativePath", "PuzzleGameInstance.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UPuzzleGameInstance_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UMenuInterface_NoRegister, (int32)VTABLE_OFFSET(UPuzzleGameInstance, IMenuInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPuzzleGameInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPuzzleGameInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPuzzleGameInstance_Statics::ClassParams = {
		&UPuzzleGameInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UPuzzleGameInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPuzzleGameInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPuzzleGameInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPuzzleGameInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPuzzleGameInstance, 2096146005);
	template<> PUZZLES_API UClass* StaticClass<UPuzzleGameInstance>()
	{
		return UPuzzleGameInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPuzzleGameInstance(Z_Construct_UClass_UPuzzleGameInstance, &UPuzzleGameInstance::StaticClass, TEXT("/Script/Puzzles"), TEXT("UPuzzleGameInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPuzzleGameInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
