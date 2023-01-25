// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HyperCasualRunner/SectionData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSectionData() {}
// Cross Module References
	HYPERCASUALRUNNER_API UClass* Z_Construct_UClass_USectionData_NoRegister();
	HYPERCASUALRUNNER_API UClass* Z_Construct_UClass_USectionData();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_HyperCasualRunner();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	HYPERCASUALRUNNER_API UClass* Z_Construct_UClass_ABaseLevel_NoRegister();
// End Cross Module References
	void USectionData::StaticRegisterNativesUSectionData()
	{
	}
	UClass* Z_Construct_UClass_USectionData_NoRegister()
	{
		return USectionData::StaticClass();
	}
	struct Z_Construct_UClass_USectionData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_level_set_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_level_set_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_level_set;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USectionData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_HyperCasualRunner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USectionData_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n *///class ABaselevel;\n" },
		{ "IncludePath", "SectionData.h" },
		{ "ModuleRelativePath", "SectionData.h" },
		{ "ToolTip", "//class ABaselevel;" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USectionData_Statics::NewProp_level_set_Inner = { "level_set", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ABaseLevel_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USectionData_Statics::NewProp_level_set_MetaData[] = {
		{ "Category", "SectionData" },
		{ "ModuleRelativePath", "SectionData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USectionData_Statics::NewProp_level_set = { "level_set", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USectionData, level_set), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USectionData_Statics::NewProp_level_set_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USectionData_Statics::NewProp_level_set_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USectionData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USectionData_Statics::NewProp_level_set_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USectionData_Statics::NewProp_level_set,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USectionData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USectionData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USectionData_Statics::ClassParams = {
		&USectionData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USectionData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USectionData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USectionData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USectionData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USectionData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USectionData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USectionData, 1344961110);
	template<> HYPERCASUALRUNNER_API UClass* StaticClass<USectionData>()
	{
		return USectionData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USectionData(Z_Construct_UClass_USectionData, &USectionData::StaticClass, TEXT("/Script/HyperCasualRunner"), TEXT("USectionData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USectionData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
