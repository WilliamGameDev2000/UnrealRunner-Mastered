// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HyperCasualRunner/spikes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodespikes() {}
// Cross Module References
	HYPERCASUALRUNNER_API UClass* Z_Construct_UClass_Aspikes_NoRegister();
	HYPERCASUALRUNNER_API UClass* Z_Construct_UClass_Aspikes();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_HyperCasualRunner();
// End Cross Module References
	void Aspikes::StaticRegisterNativesAspikes()
	{
	}
	UClass* Z_Construct_UClass_Aspikes_NoRegister()
	{
		return Aspikes::StaticClass();
	}
	struct Z_Construct_UClass_Aspikes_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Aspikes_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_HyperCasualRunner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aspikes_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "spikes.h" },
		{ "ModuleRelativePath", "spikes.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_Aspikes_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Aspikes>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_Aspikes_Statics::ClassParams = {
		&Aspikes::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_Aspikes_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_Aspikes_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_Aspikes()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_Aspikes_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(Aspikes, 3509718176);
	template<> HYPERCASUALRUNNER_API UClass* StaticClass<Aspikes>()
	{
		return Aspikes::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_Aspikes(Z_Construct_UClass_Aspikes, &Aspikes::StaticClass, TEXT("/Script/HyperCasualRunner"), TEXT("Aspikes"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(Aspikes);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
