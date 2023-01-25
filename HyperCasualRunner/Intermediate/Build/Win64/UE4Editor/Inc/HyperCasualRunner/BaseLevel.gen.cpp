// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HyperCasualRunner/BaseLevel.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseLevel() {}
// Cross Module References
	HYPERCASUALRUNNER_API UClass* Z_Construct_UClass_ABaseLevel_NoRegister();
	HYPERCASUALRUNNER_API UClass* Z_Construct_UClass_ABaseLevel();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_HyperCasualRunner();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
// End Cross Module References
	void ABaseLevel::StaticRegisterNativesABaseLevel()
	{
	}
	UClass* Z_Construct_UClass_ABaseLevel_NoRegister()
	{
		return ABaseLevel::StaticClass();
	}
	struct Z_Construct_UClass_ABaseLevel_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_trigger_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_trigger;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_spawn_location_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_spawn_location;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABaseLevel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_HyperCasualRunner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseLevel_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BaseLevel.h" },
		{ "ModuleRelativePath", "BaseLevel.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseLevel_Statics::NewProp_trigger_MetaData[] = {
		{ "Category", "Triggers" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BaseLevel.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseLevel_Statics::NewProp_trigger = { "trigger", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseLevel, trigger), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseLevel_Statics::NewProp_trigger_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseLevel_Statics::NewProp_trigger_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseLevel_Statics::NewProp_spawn_location_MetaData[] = {
		{ "Category", "Triggers" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BaseLevel.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseLevel_Statics::NewProp_spawn_location = { "spawn_location", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseLevel, spawn_location), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseLevel_Statics::NewProp_spawn_location_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseLevel_Statics::NewProp_spawn_location_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABaseLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseLevel_Statics::NewProp_trigger,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseLevel_Statics::NewProp_spawn_location,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABaseLevel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseLevel>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABaseLevel_Statics::ClassParams = {
		&ABaseLevel::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABaseLevel_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ABaseLevel_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABaseLevel_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseLevel_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABaseLevel()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABaseLevel_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABaseLevel, 1891691958);
	template<> HYPERCASUALRUNNER_API UClass* StaticClass<ABaseLevel>()
	{
		return ABaseLevel::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABaseLevel(Z_Construct_UClass_ABaseLevel, &ABaseLevel::StaticClass, TEXT("/Script/HyperCasualRunner"), TEXT("ABaseLevel"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABaseLevel);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
