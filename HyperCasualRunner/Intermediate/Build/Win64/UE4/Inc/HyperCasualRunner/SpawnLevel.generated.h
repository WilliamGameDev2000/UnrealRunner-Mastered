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
struct FHitResult;
#ifdef HYPERCASUALRUNNER_SpawnLevel_generated_h
#error "SpawnLevel.generated.h already included, missing '#pragma once' in SpawnLevel.h"
#endif
#define HYPERCASUALRUNNER_SpawnLevel_generated_h

#define HyperCasualRunner_Source_HyperCasualRunner_SpawnLevel_h_14_SPARSE_DATA
#define HyperCasualRunner_Source_HyperCasualRunner_SpawnLevel_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execTimerEnd); \
	DECLARE_FUNCTION(execOnOverlapBegin); \
	DECLARE_FUNCTION(execSpawnLevel);


#define HyperCasualRunner_Source_HyperCasualRunner_SpawnLevel_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTimerEnd); \
	DECLARE_FUNCTION(execOnOverlapBegin); \
	DECLARE_FUNCTION(execSpawnLevel);


#define HyperCasualRunner_Source_HyperCasualRunner_SpawnLevel_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASpawnLevel(); \
	friend struct Z_Construct_UClass_ASpawnLevel_Statics; \
public: \
	DECLARE_CLASS(ASpawnLevel, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HyperCasualRunner"), NO_API) \
	DECLARE_SERIALIZER(ASpawnLevel)


#define HyperCasualRunner_Source_HyperCasualRunner_SpawnLevel_h_14_INCLASS \
private: \
	static void StaticRegisterNativesASpawnLevel(); \
	friend struct Z_Construct_UClass_ASpawnLevel_Statics; \
public: \
	DECLARE_CLASS(ASpawnLevel, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HyperCasualRunner"), NO_API) \
	DECLARE_SERIALIZER(ASpawnLevel)


#define HyperCasualRunner_Source_HyperCasualRunner_SpawnLevel_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASpawnLevel(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASpawnLevel) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASpawnLevel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpawnLevel); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASpawnLevel(ASpawnLevel&&); \
	NO_API ASpawnLevel(const ASpawnLevel&); \
public:


#define HyperCasualRunner_Source_HyperCasualRunner_SpawnLevel_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASpawnLevel(ASpawnLevel&&); \
	NO_API ASpawnLevel(const ASpawnLevel&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASpawnLevel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpawnLevel); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASpawnLevel)


#define HyperCasualRunner_Source_HyperCasualRunner_SpawnLevel_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__level_set() { return STRUCT_OFFSET(ASpawnLevel, level_set); }


#define HyperCasualRunner_Source_HyperCasualRunner_SpawnLevel_h_11_PROLOG
#define HyperCasualRunner_Source_HyperCasualRunner_SpawnLevel_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HyperCasualRunner_Source_HyperCasualRunner_SpawnLevel_h_14_PRIVATE_PROPERTY_OFFSET \
	HyperCasualRunner_Source_HyperCasualRunner_SpawnLevel_h_14_SPARSE_DATA \
	HyperCasualRunner_Source_HyperCasualRunner_SpawnLevel_h_14_RPC_WRAPPERS \
	HyperCasualRunner_Source_HyperCasualRunner_SpawnLevel_h_14_INCLASS \
	HyperCasualRunner_Source_HyperCasualRunner_SpawnLevel_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HyperCasualRunner_Source_HyperCasualRunner_SpawnLevel_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HyperCasualRunner_Source_HyperCasualRunner_SpawnLevel_h_14_PRIVATE_PROPERTY_OFFSET \
	HyperCasualRunner_Source_HyperCasualRunner_SpawnLevel_h_14_SPARSE_DATA \
	HyperCasualRunner_Source_HyperCasualRunner_SpawnLevel_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	HyperCasualRunner_Source_HyperCasualRunner_SpawnLevel_h_14_INCLASS_NO_PURE_DECLS \
	HyperCasualRunner_Source_HyperCasualRunner_SpawnLevel_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HYPERCASUALRUNNER_API UClass* StaticClass<class ASpawnLevel>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HyperCasualRunner_Source_HyperCasualRunner_SpawnLevel_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
