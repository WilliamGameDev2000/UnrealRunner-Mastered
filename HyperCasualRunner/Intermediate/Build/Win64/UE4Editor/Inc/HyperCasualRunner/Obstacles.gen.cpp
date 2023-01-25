// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HyperCasualRunner/Obstacles.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObstacles() {}
// Cross Module References
	HYPERCASUALRUNNER_API UClass* Z_Construct_UClass_AObstacles_NoRegister();
	HYPERCASUALRUNNER_API UClass* Z_Construct_UClass_AObstacles();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_HyperCasualRunner();
// End Cross Module References
	void AObstacles::StaticRegisterNativesAObstacles()
	{
	}
	UClass* Z_Construct_UClass_AObstacles_NoRegister()
	{
		return AObstacles::StaticClass();
	}
	struct Z_Construct_UClass_AObstacles_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AObstacles_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_HyperCasualRunner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObstacles_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Obstacles.h" },
		{ "ModuleRelativePath", "Obstacles.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AObstacles_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AObstacles>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AObstacles_Statics::ClassParams = {
		&AObstacles::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AObstacles_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AObstacles_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AObstacles()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AObstacles_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AObstacles, 4148919059);
	template<> HYPERCASUALRUNNER_API UClass* StaticClass<AObstacles>()
	{
		return AObstacles::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AObstacles(Z_Construct_UClass_AObstacles, &AObstacles::StaticClass, TEXT("/Script/HyperCasualRunner"), TEXT("AObstacles"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AObstacles);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
