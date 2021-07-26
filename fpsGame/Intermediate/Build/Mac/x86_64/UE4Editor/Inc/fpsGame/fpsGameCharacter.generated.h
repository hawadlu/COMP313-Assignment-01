// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FPSGAME_fpsGameCharacter_generated_h
#error "fpsGameCharacter.generated.h already included, missing '#pragma once' in fpsGameCharacter.h"
#endif
#define FPSGAME_fpsGameCharacter_generated_h

#define fpsGame_Source_fpsGame_fpsGameCharacter_h_20_SPARSE_DATA
#define fpsGame_Source_fpsGame_fpsGameCharacter_h_20_RPC_WRAPPERS
#define fpsGame_Source_fpsGame_fpsGameCharacter_h_20_RPC_WRAPPERS_NO_PURE_DECLS
#define fpsGame_Source_fpsGame_fpsGameCharacter_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAfpsGameCharacter(); \
	friend struct Z_Construct_UClass_AfpsGameCharacter_Statics; \
public: \
	DECLARE_CLASS(AfpsGameCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/fpsGame"), NO_API) \
	DECLARE_SERIALIZER(AfpsGameCharacter)


#define fpsGame_Source_fpsGame_fpsGameCharacter_h_20_INCLASS \
private: \
	static void StaticRegisterNativesAfpsGameCharacter(); \
	friend struct Z_Construct_UClass_AfpsGameCharacter_Statics; \
public: \
	DECLARE_CLASS(AfpsGameCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/fpsGame"), NO_API) \
	DECLARE_SERIALIZER(AfpsGameCharacter)


#define fpsGame_Source_fpsGame_fpsGameCharacter_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AfpsGameCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AfpsGameCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AfpsGameCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AfpsGameCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AfpsGameCharacter(AfpsGameCharacter&&); \
	NO_API AfpsGameCharacter(const AfpsGameCharacter&); \
public:


#define fpsGame_Source_fpsGame_fpsGameCharacter_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AfpsGameCharacter(AfpsGameCharacter&&); \
	NO_API AfpsGameCharacter(const AfpsGameCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AfpsGameCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AfpsGameCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AfpsGameCharacter)


#define fpsGame_Source_fpsGame_fpsGameCharacter_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh1P() { return STRUCT_OFFSET(AfpsGameCharacter, Mesh1P); } \
	FORCEINLINE static uint32 __PPO__FP_Gun() { return STRUCT_OFFSET(AfpsGameCharacter, FP_Gun); } \
	FORCEINLINE static uint32 __PPO__FP_MuzzleLocation() { return STRUCT_OFFSET(AfpsGameCharacter, FP_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__VR_Gun() { return STRUCT_OFFSET(AfpsGameCharacter, VR_Gun); } \
	FORCEINLINE static uint32 __PPO__VR_MuzzleLocation() { return STRUCT_OFFSET(AfpsGameCharacter, VR_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__FirstPersonCameraComponent() { return STRUCT_OFFSET(AfpsGameCharacter, FirstPersonCameraComponent); } \
	FORCEINLINE static uint32 __PPO__R_MotionController() { return STRUCT_OFFSET(AfpsGameCharacter, R_MotionController); } \
	FORCEINLINE static uint32 __PPO__L_MotionController() { return STRUCT_OFFSET(AfpsGameCharacter, L_MotionController); }


#define fpsGame_Source_fpsGame_fpsGameCharacter_h_17_PROLOG
#define fpsGame_Source_fpsGame_fpsGameCharacter_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	fpsGame_Source_fpsGame_fpsGameCharacter_h_20_PRIVATE_PROPERTY_OFFSET \
	fpsGame_Source_fpsGame_fpsGameCharacter_h_20_SPARSE_DATA \
	fpsGame_Source_fpsGame_fpsGameCharacter_h_20_RPC_WRAPPERS \
	fpsGame_Source_fpsGame_fpsGameCharacter_h_20_INCLASS \
	fpsGame_Source_fpsGame_fpsGameCharacter_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define fpsGame_Source_fpsGame_fpsGameCharacter_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	fpsGame_Source_fpsGame_fpsGameCharacter_h_20_PRIVATE_PROPERTY_OFFSET \
	fpsGame_Source_fpsGame_fpsGameCharacter_h_20_SPARSE_DATA \
	fpsGame_Source_fpsGame_fpsGameCharacter_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	fpsGame_Source_fpsGame_fpsGameCharacter_h_20_INCLASS_NO_PURE_DECLS \
	fpsGame_Source_fpsGame_fpsGameCharacter_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPSGAME_API UClass* StaticClass<class AfpsGameCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID fpsGame_Source_fpsGame_fpsGameCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
