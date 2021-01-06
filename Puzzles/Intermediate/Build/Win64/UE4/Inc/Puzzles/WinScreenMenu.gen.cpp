// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Puzzles/WinScreenMenu.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWinScreenMenu() {}
// Cross Module References
	PUZZLES_API UClass* Z_Construct_UClass_UWinScreenMenu_NoRegister();
	PUZZLES_API UClass* Z_Construct_UClass_UWinScreenMenu();
	PUZZLES_API UClass* Z_Construct_UClass_UMenuWidget();
	UPackage* Z_Construct_UPackage__Script_Puzzles();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UWinScreenMenu::execReturnToMain)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReturnToMain();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWinScreenMenu::execReplayGame)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReplayGame();
		P_NATIVE_END;
	}
	void UWinScreenMenu::StaticRegisterNativesUWinScreenMenu()
	{
		UClass* Class = UWinScreenMenu::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ReplayGame", &UWinScreenMenu::execReplayGame },
			{ "ReturnToMain", &UWinScreenMenu::execReturnToMain },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWinScreenMenu_ReplayGame_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWinScreenMenu_ReplayGame_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "WinScreenMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWinScreenMenu_ReplayGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWinScreenMenu, nullptr, "ReplayGame", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWinScreenMenu_ReplayGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWinScreenMenu_ReplayGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWinScreenMenu_ReplayGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWinScreenMenu_ReplayGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWinScreenMenu_ReturnToMain_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWinScreenMenu_ReturnToMain_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "WinScreenMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWinScreenMenu_ReturnToMain_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWinScreenMenu, nullptr, "ReturnToMain", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWinScreenMenu_ReturnToMain_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWinScreenMenu_ReturnToMain_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWinScreenMenu_ReturnToMain()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWinScreenMenu_ReturnToMain_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UWinScreenMenu_NoRegister()
	{
		return UWinScreenMenu::StaticClass();
	}
	struct Z_Construct_UClass_UWinScreenMenu_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReplayButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReplayButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MenuButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MenuButton;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWinScreenMenu_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMenuWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Puzzles,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWinScreenMenu_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWinScreenMenu_ReplayGame, "ReplayGame" }, // 116023750
		{ &Z_Construct_UFunction_UWinScreenMenu_ReturnToMain, "ReturnToMain" }, // 1684319396
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWinScreenMenu_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "WinScreenMenu.h" },
		{ "ModuleRelativePath", "WinScreenMenu.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWinScreenMenu_Statics::NewProp_ReplayButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "WinScreenMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWinScreenMenu_Statics::NewProp_ReplayButton = { "ReplayButton", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWinScreenMenu, ReplayButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWinScreenMenu_Statics::NewProp_ReplayButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWinScreenMenu_Statics::NewProp_ReplayButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWinScreenMenu_Statics::NewProp_MenuButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Comment", "// Manually bind buttons.\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "WinScreenMenu.h" },
		{ "ToolTip", "Manually bind buttons." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWinScreenMenu_Statics::NewProp_MenuButton = { "MenuButton", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWinScreenMenu, MenuButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWinScreenMenu_Statics::NewProp_MenuButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWinScreenMenu_Statics::NewProp_MenuButton_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWinScreenMenu_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWinScreenMenu_Statics::NewProp_ReplayButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWinScreenMenu_Statics::NewProp_MenuButton,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWinScreenMenu_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWinScreenMenu>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWinScreenMenu_Statics::ClassParams = {
		&UWinScreenMenu::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UWinScreenMenu_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UWinScreenMenu_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWinScreenMenu_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWinScreenMenu_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWinScreenMenu()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWinScreenMenu_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWinScreenMenu, 2980452890);
	template<> PUZZLES_API UClass* StaticClass<UWinScreenMenu>()
	{
		return UWinScreenMenu::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWinScreenMenu(Z_Construct_UClass_UWinScreenMenu, &UWinScreenMenu::StaticClass, TEXT("/Script/Puzzles"), TEXT("UWinScreenMenu"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWinScreenMenu);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
