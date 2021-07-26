// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "fpsGame/fpsGameHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodefpsGameHUD() {}
// Cross Module References
	FPSGAME_API UClass* Z_Construct_UClass_AfpsGameHUD_NoRegister();
	FPSGAME_API UClass* Z_Construct_UClass_AfpsGameHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_fpsGame();
// End Cross Module References
	void AfpsGameHUD::StaticRegisterNativesAfpsGameHUD()
	{
	}
	UClass* Z_Construct_UClass_AfpsGameHUD_NoRegister()
	{
		return AfpsGameHUD::StaticClass();
	}
	struct Z_Construct_UClass_AfpsGameHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AfpsGameHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_fpsGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AfpsGameHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "fpsGameHUD.h" },
		{ "ModuleRelativePath", "fpsGameHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AfpsGameHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AfpsGameHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AfpsGameHUD_Statics::ClassParams = {
		&AfpsGameHUD::StaticClass,
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
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AfpsGameHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AfpsGameHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AfpsGameHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AfpsGameHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AfpsGameHUD, 2739383100);
	template<> FPSGAME_API UClass* StaticClass<AfpsGameHUD>()
	{
		return AfpsGameHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AfpsGameHUD(Z_Construct_UClass_AfpsGameHUD, &AfpsGameHUD::StaticClass, TEXT("/Script/fpsGame"), TEXT("AfpsGameHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AfpsGameHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
