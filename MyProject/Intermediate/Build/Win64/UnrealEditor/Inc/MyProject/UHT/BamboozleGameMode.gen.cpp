// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject/Public/BamboozleGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBamboozleGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	MYPROJECT_API UClass* Z_Construct_UClass_ABamboozleGameMode();
	MYPROJECT_API UClass* Z_Construct_UClass_ABamboozleGameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MyProject();
// End Cross Module References
	DEFINE_FUNCTION(ABamboozleGameMode::execDeregisterPawn)
	{
		P_GET_OBJECT(APawn,Z_Param_pawn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeregisterPawn(Z_Param_pawn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABamboozleGameMode::execCyclePawn)
	{
		P_GET_UBOOL(Z_Param_reverse);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(APawn**)Z_Param__Result=P_THIS->CyclePawn(Z_Param_reverse);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABamboozleGameMode::execRegisterPawn)
	{
		P_GET_OBJECT(APawn,Z_Param_pawn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RegisterPawn(Z_Param_pawn);
		P_NATIVE_END;
	}
	void ABamboozleGameMode::StaticRegisterNativesABamboozleGameMode()
	{
		UClass* Class = ABamboozleGameMode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CyclePawn", &ABamboozleGameMode::execCyclePawn },
			{ "DeregisterPawn", &ABamboozleGameMode::execDeregisterPawn },
			{ "RegisterPawn", &ABamboozleGameMode::execRegisterPawn },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABamboozleGameMode_CyclePawn_Statics
	{
		struct BamboozleGameMode_eventCyclePawn_Parms
		{
			bool reverse;
			APawn* ReturnValue;
		};
		static void NewProp_reverse_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_reverse;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ABamboozleGameMode_CyclePawn_Statics::NewProp_reverse_SetBit(void* Obj)
	{
		((BamboozleGameMode_eventCyclePawn_Parms*)Obj)->reverse = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABamboozleGameMode_CyclePawn_Statics::NewProp_reverse = { "reverse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BamboozleGameMode_eventCyclePawn_Parms), &Z_Construct_UFunction_ABamboozleGameMode_CyclePawn_Statics::NewProp_reverse_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABamboozleGameMode_CyclePawn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BamboozleGameMode_eventCyclePawn_Parms, ReturnValue), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABamboozleGameMode_CyclePawn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABamboozleGameMode_CyclePawn_Statics::NewProp_reverse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABamboozleGameMode_CyclePawn_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABamboozleGameMode_CyclePawn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BamboozleGameMode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABamboozleGameMode_CyclePawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABamboozleGameMode, nullptr, "CyclePawn", nullptr, nullptr, Z_Construct_UFunction_ABamboozleGameMode_CyclePawn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABamboozleGameMode_CyclePawn_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABamboozleGameMode_CyclePawn_Statics::BamboozleGameMode_eventCyclePawn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABamboozleGameMode_CyclePawn_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABamboozleGameMode_CyclePawn_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABamboozleGameMode_CyclePawn_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ABamboozleGameMode_CyclePawn_Statics::BamboozleGameMode_eventCyclePawn_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ABamboozleGameMode_CyclePawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABamboozleGameMode_CyclePawn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABamboozleGameMode_DeregisterPawn_Statics
	{
		struct BamboozleGameMode_eventDeregisterPawn_Parms
		{
			APawn* pawn;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_pawn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABamboozleGameMode_DeregisterPawn_Statics::NewProp_pawn = { "pawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BamboozleGameMode_eventDeregisterPawn_Parms, pawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABamboozleGameMode_DeregisterPawn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABamboozleGameMode_DeregisterPawn_Statics::NewProp_pawn,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABamboozleGameMode_DeregisterPawn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BamboozleGameMode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABamboozleGameMode_DeregisterPawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABamboozleGameMode, nullptr, "DeregisterPawn", nullptr, nullptr, Z_Construct_UFunction_ABamboozleGameMode_DeregisterPawn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABamboozleGameMode_DeregisterPawn_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABamboozleGameMode_DeregisterPawn_Statics::BamboozleGameMode_eventDeregisterPawn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABamboozleGameMode_DeregisterPawn_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABamboozleGameMode_DeregisterPawn_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABamboozleGameMode_DeregisterPawn_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ABamboozleGameMode_DeregisterPawn_Statics::BamboozleGameMode_eventDeregisterPawn_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ABamboozleGameMode_DeregisterPawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABamboozleGameMode_DeregisterPawn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABamboozleGameMode_RegisterPawn_Statics
	{
		struct BamboozleGameMode_eventRegisterPawn_Parms
		{
			APawn* pawn;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_pawn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABamboozleGameMode_RegisterPawn_Statics::NewProp_pawn = { "pawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BamboozleGameMode_eventRegisterPawn_Parms, pawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABamboozleGameMode_RegisterPawn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABamboozleGameMode_RegisterPawn_Statics::NewProp_pawn,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABamboozleGameMode_RegisterPawn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BamboozleGameMode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABamboozleGameMode_RegisterPawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABamboozleGameMode, nullptr, "RegisterPawn", nullptr, nullptr, Z_Construct_UFunction_ABamboozleGameMode_RegisterPawn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABamboozleGameMode_RegisterPawn_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABamboozleGameMode_RegisterPawn_Statics::BamboozleGameMode_eventRegisterPawn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABamboozleGameMode_RegisterPawn_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABamboozleGameMode_RegisterPawn_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABamboozleGameMode_RegisterPawn_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ABamboozleGameMode_RegisterPawn_Statics::BamboozleGameMode_eventRegisterPawn_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ABamboozleGameMode_RegisterPawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABamboozleGameMode_RegisterPawn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABamboozleGameMode);
	UClass* Z_Construct_UClass_ABamboozleGameMode_NoRegister()
	{
		return ABamboozleGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ABamboozleGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABamboozleGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABamboozleGameMode_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ABamboozleGameMode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABamboozleGameMode_CyclePawn, "CyclePawn" }, // 2742511753
		{ &Z_Construct_UFunction_ABamboozleGameMode_DeregisterPawn, "DeregisterPawn" }, // 2811743003
		{ &Z_Construct_UFunction_ABamboozleGameMode_RegisterPawn, "RegisterPawn" }, // 3946879819
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABamboozleGameMode_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABamboozleGameMode_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "BamboozleGameMode.h" },
		{ "ModuleRelativePath", "Public/BamboozleGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABamboozleGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABamboozleGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABamboozleGameMode_Statics::ClassParams = {
		&ABamboozleGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABamboozleGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ABamboozleGameMode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ABamboozleGameMode()
	{
		if (!Z_Registration_Info_UClass_ABamboozleGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABamboozleGameMode.OuterSingleton, Z_Construct_UClass_ABamboozleGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABamboozleGameMode.OuterSingleton;
	}
	template<> MYPROJECT_API UClass* StaticClass<ABamboozleGameMode>()
	{
		return ABamboozleGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABamboozleGameMode);
	ABamboozleGameMode::~ABamboozleGameMode() {}
	struct Z_CompiledInDeferFile_FID_GitHub_bamboozle_MyProject_Source_MyProject_Public_BamboozleGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_bamboozle_MyProject_Source_MyProject_Public_BamboozleGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABamboozleGameMode, ABamboozleGameMode::StaticClass, TEXT("ABamboozleGameMode"), &Z_Registration_Info_UClass_ABamboozleGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABamboozleGameMode), 2152759313U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_bamboozle_MyProject_Source_MyProject_Public_BamboozleGameMode_h_2428838925(TEXT("/Script/MyProject"),
		Z_CompiledInDeferFile_FID_GitHub_bamboozle_MyProject_Source_MyProject_Public_BamboozleGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_bamboozle_MyProject_Source_MyProject_Public_BamboozleGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
