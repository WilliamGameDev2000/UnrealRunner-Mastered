// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HyperCasualRunner/HyperCasualRunnerGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHyperCasualRunnerGameMode() {}
// Cross Module References
	HYPERCASUALRUNNER_API UClass* Z_Construct_UClass_AHyperCasualRunnerGameMode_NoRegister();
	HYPERCASUALRUNNER_API UClass* Z_Construct_UClass_AHyperCasualRunnerGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_HyperCasualRunner();
// End Cross Module References
	void AHyperCasualRunnerGameMode::StaticRegisterNativesAHyperCasualRunnerGameMode()
	{
	}
	UClass* Z_Construct_UClass_AHyperCasualRunnerGameMode_NoRegister()
	{
		return AHyperCasualRunnerGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AHyperCasualRunnerGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHyperCasualRunnerGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_HyperCasualRunner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHyperCasualRunnerGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "HyperCasualRunnerGameMode.h" },
		{ "ModuleRelativePath", "HyperCasualRunnerGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHyperCasualRunnerGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHyperCasualRunnerGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AHyperCasualRunnerGameMode_Statics::ClassParams = {
		&AHyperCasualRunnerGameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AHyperCasualRunnerGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AHyperCasualRunnerGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHyperCasualRunnerGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AHyperCasualRunnerGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AHyperCasualRunnerGameMode, 3485135236);
	template<> HYPERCASUALRUNNER_API UClass* StaticClass<AHyperCasualRunnerGameMode>()
	{
		return AHyperCasualRunnerGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHyperCasualRunnerGameMode(Z_Construct_UClass_AHyperCasualRunnerGameMode, &AHyperCasualRunnerGameMode::StaticClass, TEXT("/Script/HyperCasualRunner"), TEXT("AHyperCasualRunnerGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHyperCasualRunnerGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
