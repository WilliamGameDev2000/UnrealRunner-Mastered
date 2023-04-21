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
#ifdef HYPERCASUALRUNNER_RunnerCharacter_generated_h
#error "RunnerCharacter.generated.h already included, missing '#pragma once' in RunnerCharacter.h"
#endif
#define HYPERCASUALRUNNER_RunnerCharacter_generated_h

#define HyperCasualRunner_Source_HyperCasualRunner_RunnerCharacter_h_12_SPARSE_DATA
#define HyperCasualRunner_Source_HyperCasualRunner_RunnerCharacter_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define HyperCasualRunner_Source_HyperCasualRunner_RunnerCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define HyperCasualRunner_Source_HyperCasualRunner_RunnerCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARunnerCharacter(); \
	friend struct Z_Construct_UClass_ARunnerCharacter_Statics; \
public: \
	DECLARE_CLASS(ARunnerCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HyperCasualRunner"), NO_API) \
	DECLARE_SERIALIZER(ARunnerCharacter)


#define HyperCasualRunner_Source_HyperCasualRunner_RunnerCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesARunnerCharacter(); \
	friend struct Z_Construct_UClass_ARunnerCharacter_Statics; \
public: \
	DECLARE_CLASS(ARunnerCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HyperCasualRunner"), NO_API) \
	DECLARE_SERIALIZER(ARunnerCharacter)


#define HyperCasualRunner_Source_HyperCasualRunner_RunnerCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ARunnerCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARunnerCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARunnerCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARunnerCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARunnerCharacter(ARunnerCharacter&&); \
	NO_API ARunnerCharacter(const ARunnerCharacter&); \
public:


#define HyperCasualRunner_Source_HyperCasualRunner_RunnerCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARunnerCharacter(ARunnerCharacter&&); \
	NO_API ARunnerCharacter(const ARunnerCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARunnerCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARunnerCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARunnerCharacter)


#define HyperCasualRunner_Source_HyperCasualRunner_RunnerCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__side_cam() { return STRUCT_OFFSET(ARunnerCharacter, side_cam); }


#define HyperCasualRunner_Source_HyperCasualRunner_RunnerCharacter_h_9_PROLOG
#define HyperCasualRunner_Source_HyperCasualRunner_RunnerCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HyperCasualRunner_Source_HyperCasualRunner_RunnerCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	HyperCasualRunner_Source_HyperCasualRunner_RunnerCharacter_h_12_SPARSE_DATA \
	HyperCasualRunner_Source_HyperCasualRunner_RunnerCharacter_h_12_RPC_WRAPPERS \
	HyperCasualRunner_Source_HyperCasualRunner_RunnerCharacter_h_12_INCLASS \
	HyperCasualRunner_Source_HyperCasualRunner_RunnerCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HyperCasualRunner_Source_HyperCasualRunner_RunnerCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HyperCasualRunner_Source_HyperCasualRunner_RunnerCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	HyperCasualRunner_Source_HyperCasualRunner_RunnerCharacter_h_12_SPARSE_DATA \
	HyperCasualRunner_Source_HyperCasualRunner_RunnerCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	HyperCasualRunner_Source_HyperCasualRunner_RunnerCharacter_h_12_INCLASS_NO_PURE_DECLS \
	HyperCasualRunner_Source_HyperCasualRunner_RunnerCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HYPERCASUALRUNNER_API UClass* StaticClass<class ARunnerCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HyperCasualRunner_Source_HyperCasualRunner_RunnerCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
