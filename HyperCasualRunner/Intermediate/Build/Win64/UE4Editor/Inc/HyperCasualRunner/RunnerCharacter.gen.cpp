// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HyperCasualRunner/RunnerCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRunnerCharacter() {}
// Cross Module References
	HYPERCASUALRUNNER_API UClass* Z_Construct_UClass_ARunnerCharacter_NoRegister();
	HYPERCASUALRUNNER_API UClass* Z_Construct_UClass_ARunnerCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_HyperCasualRunner();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ARunnerCharacter::execOnOverlapBegin)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_overlapped);
		P_GET_OBJECT(AActor,Z_Param_actor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_other_comp);
		P_GET_PROPERTY(FIntProperty,Z_Param_other_index);
		P_GET_UBOOL(Z_Param_sweep_result);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_hit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnOverlapBegin(Z_Param_overlapped,Z_Param_actor,Z_Param_other_comp,Z_Param_other_index,Z_Param_sweep_result,Z_Param_Out_hit);
		P_NATIVE_END;
	}
	void ARunnerCharacter::StaticRegisterNativesARunnerCharacter()
	{
		UClass* Class = ARunnerCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnOverlapBegin", &ARunnerCharacter::execOnOverlapBegin },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ARunnerCharacter_OnOverlapBegin_Statics
	{
		struct RunnerCharacter_eventOnOverlapBegin_Parms
		{
			UPrimitiveComponent* overlapped;
			AActor* actor;
			UPrimitiveComponent* other_comp;
			int32 other_index;
			bool sweep_result;
			FHitResult hit;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_overlapped_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_overlapped;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_actor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_other_comp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_other_comp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_other_index;
		static void NewProp_sweep_result_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_sweep_result;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_hit_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_hit;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARunnerCharacter_OnOverlapBegin_Statics::NewProp_overlapped_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARunnerCharacter_OnOverlapBegin_Statics::NewProp_overlapped = { "overlapped", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RunnerCharacter_eventOnOverlapBegin_Parms, overlapped), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ARunnerCharacter_OnOverlapBegin_Statics::NewProp_overlapped_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ARunnerCharacter_OnOverlapBegin_Statics::NewProp_overlapped_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARunnerCharacter_OnOverlapBegin_Statics::NewProp_actor = { "actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RunnerCharacter_eventOnOverlapBegin_Parms, actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARunnerCharacter_OnOverlapBegin_Statics::NewProp_other_comp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARunnerCharacter_OnOverlapBegin_Statics::NewProp_other_comp = { "other_comp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RunnerCharacter_eventOnOverlapBegin_Parms, other_comp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ARunnerCharacter_OnOverlapBegin_Statics::NewProp_other_comp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ARunnerCharacter_OnOverlapBegin_Statics::NewProp_other_comp_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ARunnerCharacter_OnOverlapBegin_Statics::NewProp_other_index = { "other_index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RunnerCharacter_eventOnOverlapBegin_Parms, other_index), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ARunnerCharacter_OnOverlapBegin_Statics::NewProp_sweep_result_SetBit(void* Obj)
	{
		((RunnerCharacter_eventOnOverlapBegin_Parms*)Obj)->sweep_result = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ARunnerCharacter_OnOverlapBegin_Statics::NewProp_sweep_result = { "sweep_result", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RunnerCharacter_eventOnOverlapBegin_Parms), &Z_Construct_UFunction_ARunnerCharacter_OnOverlapBegin_Statics::NewProp_sweep_result_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARunnerCharacter_OnOverlapBegin_Statics::NewProp_hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ARunnerCharacter_OnOverlapBegin_Statics::NewProp_hit = { "hit", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RunnerCharacter_eventOnOverlapBegin_Parms, hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ARunnerCharacter_OnOverlapBegin_Statics::NewProp_hit_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ARunnerCharacter_OnOverlapBegin_Statics::NewProp_hit_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARunnerCharacter_OnOverlapBegin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARunnerCharacter_OnOverlapBegin_Statics::NewProp_overlapped,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARunnerCharacter_OnOverlapBegin_Statics::NewProp_actor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARunnerCharacter_OnOverlapBegin_Statics::NewProp_other_comp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARunnerCharacter_OnOverlapBegin_Statics::NewProp_other_index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARunnerCharacter_OnOverlapBegin_Statics::NewProp_sweep_result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARunnerCharacter_OnOverlapBegin_Statics::NewProp_hit,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARunnerCharacter_OnOverlapBegin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "RunnerCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARunnerCharacter_OnOverlapBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARunnerCharacter, nullptr, "OnOverlapBegin", nullptr, nullptr, sizeof(RunnerCharacter_eventOnOverlapBegin_Parms), Z_Construct_UFunction_ARunnerCharacter_OnOverlapBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARunnerCharacter_OnOverlapBegin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARunnerCharacter_OnOverlapBegin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARunnerCharacter_OnOverlapBegin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARunnerCharacter_OnOverlapBegin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARunnerCharacter_OnOverlapBegin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ARunnerCharacter_NoRegister()
	{
		return ARunnerCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ARunnerCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_side_cam_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_side_cam;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARunnerCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_HyperCasualRunner,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ARunnerCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ARunnerCharacter_OnOverlapBegin, "OnOverlapBegin" }, // 3522141517
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARunnerCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "RunnerCharacter.h" },
		{ "ModuleRelativePath", "RunnerCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARunnerCharacter_Statics::NewProp_side_cam_MetaData[] = {
		{ "Category", "RunnerCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "RunnerCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARunnerCharacter_Statics::NewProp_side_cam = { "side_cam", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARunnerCharacter, side_cam), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARunnerCharacter_Statics::NewProp_side_cam_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARunnerCharacter_Statics::NewProp_side_cam_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARunnerCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARunnerCharacter_Statics::NewProp_side_cam,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARunnerCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARunnerCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARunnerCharacter_Statics::ClassParams = {
		&ARunnerCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ARunnerCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ARunnerCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ARunnerCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARunnerCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARunnerCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARunnerCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARunnerCharacter, 2510440941);
	template<> HYPERCASUALRUNNER_API UClass* StaticClass<ARunnerCharacter>()
	{
		return ARunnerCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARunnerCharacter(Z_Construct_UClass_ARunnerCharacter, &ARunnerCharacter::StaticClass, TEXT("/Script/HyperCasualRunner"), TEXT("ARunnerCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARunnerCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
