// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "fpsGame/Public/FloatToPercent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFloatToPercent() {}
// Cross Module References
	FPSGAME_API UClass* Z_Construct_UClass_UFloatToPercent_NoRegister();
	FPSGAME_API UClass* Z_Construct_UClass_UFloatToPercent();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_fpsGame();
// End Cross Module References
	DEFINE_FUNCTION(UFloatToPercent::execfloatToPercent)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_input);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UFloatToPercent::floatToPercent(Z_Param_input);
		P_NATIVE_END;
	}
	void UFloatToPercent::StaticRegisterNativesUFloatToPercent()
	{
		UClass* Class = UFloatToPercent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "floatToPercent", &UFloatToPercent::execfloatToPercent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFloatToPercent_floatToPercent_Statics
	{
		struct FloatToPercent_eventfloatToPercent_Parms
		{
			float input;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_input;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFloatToPercent_floatToPercent_Statics::NewProp_input = { "input", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FloatToPercent_eventfloatToPercent_Parms, input), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFloatToPercent_floatToPercent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FloatToPercent_eventfloatToPercent_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFloatToPercent_floatToPercent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFloatToPercent_floatToPercent_Statics::NewProp_input,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFloatToPercent_floatToPercent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFloatToPercent_floatToPercent_Statics::Function_MetaDataParams[] = {
		{ "Category", "System Information" },
		{ "CompactNodeTitle", "FloatToPercentBluePrintNode" },
		{ "displayName", "Float To Percent" },
		{ "ModuleRelativePath", "Public/FloatToPercent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFloatToPercent_floatToPercent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFloatToPercent, nullptr, "floatToPercent", nullptr, nullptr, sizeof(FloatToPercent_eventfloatToPercent_Parms), Z_Construct_UFunction_UFloatToPercent_floatToPercent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFloatToPercent_floatToPercent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFloatToPercent_floatToPercent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFloatToPercent_floatToPercent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFloatToPercent_floatToPercent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFloatToPercent_floatToPercent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFloatToPercent_NoRegister()
	{
		return UFloatToPercent::StaticClass();
	}
	struct Z_Construct_UClass_UFloatToPercent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFloatToPercent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_fpsGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFloatToPercent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFloatToPercent_floatToPercent, "floatToPercent" }, // 3539054
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFloatToPercent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "FloatToPercent.h" },
		{ "ModuleRelativePath", "Public/FloatToPercent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFloatToPercent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFloatToPercent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFloatToPercent_Statics::ClassParams = {
		&UFloatToPercent::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFloatToPercent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFloatToPercent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFloatToPercent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFloatToPercent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFloatToPercent, 1952526265);
	template<> FPSGAME_API UClass* StaticClass<UFloatToPercent>()
	{
		return UFloatToPercent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFloatToPercent(Z_Construct_UClass_UFloatToPercent, &UFloatToPercent::StaticClass, TEXT("/Script/fpsGame"), TEXT("UFloatToPercent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFloatToPercent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
