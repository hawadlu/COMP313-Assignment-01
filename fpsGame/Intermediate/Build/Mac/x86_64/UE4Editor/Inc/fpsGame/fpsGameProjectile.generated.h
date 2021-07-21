// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef FPSGAME_fpsGameProjectile_generated_h
#error "fpsGameProjectile.generated.h already included, missing '#pragma once' in fpsGameProjectile.h"
#endif
#define FPSGAME_fpsGameProjectile_generated_h

#define fpsGame_Source_fpsGame_fpsGameProjectile_h_15_SPARSE_DATA
#define fpsGame_Source_fpsGame_fpsGameProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define fpsGame_Source_fpsGame_fpsGameProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define fpsGame_Source_fpsGame_fpsGameProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAfpsGameProjectile(); \
	friend struct Z_Construct_UClass_AfpsGameProjectile_Statics; \
public: \
	DECLARE_CLASS(AfpsGameProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/fpsGame"), NO_API) \
	DECLARE_SERIALIZER(AfpsGameProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define fpsGame_Source_fpsGame_fpsGameProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAfpsGameProjectile(); \
	friend struct Z_Construct_UClass_AfpsGameProjectile_Statics; \
public: \
	DECLARE_CLASS(AfpsGameProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/fpsGame"), NO_API) \
	DECLARE_SERIALIZER(AfpsGameProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define fpsGame_Source_fpsGame_fpsGameProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AfpsGameProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AfpsGameProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AfpsGameProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AfpsGameProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AfpsGameProjectile(AfpsGameProjectile&&); \
	NO_API AfpsGameProjectile(const AfpsGameProjectile&); \
public:


#define fpsGame_Source_fpsGame_fpsGameProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AfpsGameProjectile(AfpsGameProjectile&&); \
	NO_API AfpsGameProjectile(const AfpsGameProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AfpsGameProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AfpsGameProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AfpsGameProjectile)


#define fpsGame_Source_fpsGame_fpsGameProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(AfpsGameProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AfpsGameProjectile, ProjectileMovement); }


#define fpsGame_Source_fpsGame_fpsGameProjectile_h_12_PROLOG
#define fpsGame_Source_fpsGame_fpsGameProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	fpsGame_Source_fpsGame_fpsGameProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	fpsGame_Source_fpsGame_fpsGameProjectile_h_15_SPARSE_DATA \
	fpsGame_Source_fpsGame_fpsGameProjectile_h_15_RPC_WRAPPERS \
	fpsGame_Source_fpsGame_fpsGameProjectile_h_15_INCLASS \
	fpsGame_Source_fpsGame_fpsGameProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define fpsGame_Source_fpsGame_fpsGameProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	fpsGame_Source_fpsGame_fpsGameProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	fpsGame_Source_fpsGame_fpsGameProjectile_h_15_SPARSE_DATA \
	fpsGame_Source_fpsGame_fpsGameProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	fpsGame_Source_fpsGame_fpsGameProjectile_h_15_INCLASS_NO_PURE_DECLS \
	fpsGame_Source_fpsGame_fpsGameProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPSGAME_API UClass* StaticClass<class AfpsGameProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID fpsGame_Source_fpsGame_fpsGameProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
