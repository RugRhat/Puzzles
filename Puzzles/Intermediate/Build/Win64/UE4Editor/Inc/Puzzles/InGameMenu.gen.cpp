// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Puzzles/InGameMenu.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInGameMenu() {}
// Cross Module References
	PUZZLES_API UClass* Z_Construct_UClass_UInGameMenu_NoRegister();
	PUZZLES_API UClass* Z_Construct_UClass_UInGameMenu();
	PUZZLES_API UClass* Z_Construct_UClass_UMenuWidget();
	UPackage* Z_Construct_UPackage__Script_Puzzles();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UInGameMenu::execReturnToMain)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReturnToMain();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInGameMenu::execReturnToGame)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReturnToGame();
		P_NATIVE_END;
	}
	void UInGameMenu::StaticRegisterNativesUInGameMenu()
	{
		UClass* Class = UInGameMenu::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ReturnToGame", &UInGameMenu::execReturnToGame },
			{ "ReturnToMain", &UInGameMenu::execReturnToMain },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInGameMenu_ReturnToGame_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInGameMenu_ReturnToGame_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "InGameMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInGameMenu_ReturnToGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInGameMenu, nullptr, "ReturnToGame", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInGameMenu_ReturnToGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInGameMenu_ReturnToGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInGameMenu_ReturnToGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInGameMenu_ReturnToGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInGameMenu_ReturnToMain_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInGameMenu_ReturnToMain_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "InGameMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInGameMenu_ReturnToMain_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInGameMenu, nullptr, "ReturnToMain", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInGameMenu_ReturnToMain_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInGameMenu_ReturnToMain_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInGameMenu_ReturnToMain()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInGameMenu_ReturnToMain_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UInGameMenu_NoRegister()
	{
		return UInGameMenu::StaticClass();
	}
	struct Z_Construct_UClass_UInGameMenu_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MenuButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MenuButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BackButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BackButton;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInGameMenu_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMenuWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Puzzles,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInGameMenu_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInGameMenu_ReturnToGame, "ReturnToGame" }, // 4137387768
		{ &Z_Construct_UFunction_UInGameMenu_ReturnToMain, "ReturnToMain" }, // 3788798256
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInGameMenu_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "InGameMenu.h" },
		{ "ModuleRelativePath", "InGameMenu.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInGameMenu_Statics::NewProp_MenuButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Comment", "// Manually bind buttons.\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "InGameMenu.h" },
		{ "ToolTip", "Manually bind buttons." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInGameMenu_Statics::NewProp_MenuButton = { "MenuButton", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInGameMenu, MenuButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInGameMenu_Statics::NewProp_MenuButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInGameMenu_Statics::NewProp_MenuButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInGameMenu_Statics::NewProp_BackButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "InGameMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInGameMenu_Statics::NewProp_BackButton = { "BackButton", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInGameMenu, BackButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInGameMenu_Statics::NewProp_BackButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInGameMenu_Statics::NewProp_BackButton_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInGameMenu_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInGameMenu_Statics::NewProp_MenuButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInGameMenu_Statics::NewProp_BackButton,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInGameMenu_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInGameMenu>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInGameMenu_Statics::ClassParams = {
		&UInGameMenu::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UInGameMenu_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UInGameMenu_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInGameMenu_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInGameMenu_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInGameMenu()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInGameMenu_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInGameMenu, 3968981047);
	template<> PUZZLES_API UClass* StaticClass<UInGameMenu>()
	{
		return UInGameMenu::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInGameMenu(Z_Construct_UClass_UInGameMenu, &UInGameMenu::StaticClass, TEXT("/Script/Puzzles"), TEXT("UInGameMenu"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInGameMenu);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
