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
	MYPROJECT_API UClass* Z_Construct_UClass_APlayerClone_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MyProject();
// End Cross Module References
	DEFINE_FUNCTION(ABamboozleGameMode::execReloadLevel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReloadLevel();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABamboozleGameMode::execRestartMatch)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RestartMatch();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABamboozleGameMode::execAddScore)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_amt);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddScore(Z_Param_amt);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABamboozleGameMode::execGetPlayerRef)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(APlayerClone**)Z_Param__Result=P_THIS->GetPlayerRef();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABamboozleGameMode::execSetPlayerRef)
	{
		P_GET_OBJECT(APlayerClone,Z_Param_plr);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPlayerRef(Z_Param_plr);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABamboozleGameMode::execDeregisterPawn)
	{
		P_GET_OBJECT(APawn,Z_Param_pawn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeregisterPawn(Z_Param_pawn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABamboozleGameMode::execGetCurPawn)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(APawn**)Z_Param__Result=P_THIS->GetCurPawn();
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
			{ "AddScore", &ABamboozleGameMode::execAddScore },
			{ "CyclePawn", &ABamboozleGameMode::execCyclePawn },
			{ "DeregisterPawn", &ABamboozleGameMode::execDeregisterPawn },
			{ "GetCurPawn", &ABamboozleGameMode::execGetCurPawn },
			{ "GetPlayerRef", &ABamboozleGameMode::execGetPlayerRef },
			{ "RegisterPawn", &ABamboozleGameMode::execRegisterPawn },
			{ "ReloadLevel", &ABamboozleGameMode::execReloadLevel },
			{ "RestartMatch", &ABamboozleGameMode::execRestartMatch },
			{ "SetPlayerRef", &ABamboozleGameMode::execSetPlayerRef },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABamboozleGameMode_AddScore_Statics
	{
		struct BamboozleGameMode_eventAddScore_Parms
		{
			int32 amt;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_amt;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ABamboozleGameMode_AddScore_Statics::NewProp_amt = { "amt", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BamboozleGameMode_eventAddScore_Parms, amt), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABamboozleGameMode_AddScore_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABamboozleGameMode_AddScore_Statics::NewProp_amt,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABamboozleGameMode_AddScore_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BamboozleGameMode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABamboozleGameMode_AddScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABamboozleGameMode, nullptr, "AddScore", nullptr, nullptr, Z_Construct_UFunction_ABamboozleGameMode_AddScore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABamboozleGameMode_AddScore_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABamboozleGameMode_AddScore_Statics::BamboozleGameMode_eventAddScore_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABamboozleGameMode_AddScore_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABamboozleGameMode_AddScore_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABamboozleGameMode_AddScore_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ABamboozleGameMode_AddScore_Statics::BamboozleGameMode_eventAddScore_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ABamboozleGameMode_AddScore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABamboozleGameMode_AddScore_Statics::FuncParams);
		}
		return ReturnFunction;
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
	struct Z_Construct_UFunction_ABamboozleGameMode_GetCurPawn_Statics
	{
		struct BamboozleGameMode_eventGetCurPawn_Parms
		{
			APawn* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABamboozleGameMode_GetCurPawn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BamboozleGameMode_eventGetCurPawn_Parms, ReturnValue), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABamboozleGameMode_GetCurPawn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABamboozleGameMode_GetCurPawn_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABamboozleGameMode_GetCurPawn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BamboozleGameMode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABamboozleGameMode_GetCurPawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABamboozleGameMode, nullptr, "GetCurPawn", nullptr, nullptr, Z_Construct_UFunction_ABamboozleGameMode_GetCurPawn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABamboozleGameMode_GetCurPawn_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABamboozleGameMode_GetCurPawn_Statics::BamboozleGameMode_eventGetCurPawn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABamboozleGameMode_GetCurPawn_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABamboozleGameMode_GetCurPawn_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABamboozleGameMode_GetCurPawn_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ABamboozleGameMode_GetCurPawn_Statics::BamboozleGameMode_eventGetCurPawn_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ABamboozleGameMode_GetCurPawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABamboozleGameMode_GetCurPawn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABamboozleGameMode_GetPlayerRef_Statics
	{
		struct BamboozleGameMode_eventGetPlayerRef_Parms
		{
			APlayerClone* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABamboozleGameMode_GetPlayerRef_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BamboozleGameMode_eventGetPlayerRef_Parms, ReturnValue), Z_Construct_UClass_APlayerClone_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABamboozleGameMode_GetPlayerRef_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABamboozleGameMode_GetPlayerRef_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABamboozleGameMode_GetPlayerRef_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BamboozleGameMode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABamboozleGameMode_GetPlayerRef_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABamboozleGameMode, nullptr, "GetPlayerRef", nullptr, nullptr, Z_Construct_UFunction_ABamboozleGameMode_GetPlayerRef_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABamboozleGameMode_GetPlayerRef_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABamboozleGameMode_GetPlayerRef_Statics::BamboozleGameMode_eventGetPlayerRef_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABamboozleGameMode_GetPlayerRef_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABamboozleGameMode_GetPlayerRef_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABamboozleGameMode_GetPlayerRef_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ABamboozleGameMode_GetPlayerRef_Statics::BamboozleGameMode_eventGetPlayerRef_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ABamboozleGameMode_GetPlayerRef()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABamboozleGameMode_GetPlayerRef_Statics::FuncParams);
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
	struct Z_Construct_UFunction_ABamboozleGameMode_ReloadLevel_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABamboozleGameMode_ReloadLevel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BamboozleGameMode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABamboozleGameMode_ReloadLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABamboozleGameMode, nullptr, "ReloadLevel", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABamboozleGameMode_ReloadLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABamboozleGameMode_ReloadLevel_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ABamboozleGameMode_ReloadLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABamboozleGameMode_ReloadLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABamboozleGameMode_RestartMatch_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABamboozleGameMode_RestartMatch_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BamboozleGameMode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABamboozleGameMode_RestartMatch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABamboozleGameMode, nullptr, "RestartMatch", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABamboozleGameMode_RestartMatch_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABamboozleGameMode_RestartMatch_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ABamboozleGameMode_RestartMatch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABamboozleGameMode_RestartMatch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABamboozleGameMode_SetPlayerRef_Statics
	{
		struct BamboozleGameMode_eventSetPlayerRef_Parms
		{
			APlayerClone* plr;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_plr;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABamboozleGameMode_SetPlayerRef_Statics::NewProp_plr = { "plr", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BamboozleGameMode_eventSetPlayerRef_Parms, plr), Z_Construct_UClass_APlayerClone_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABamboozleGameMode_SetPlayerRef_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABamboozleGameMode_SetPlayerRef_Statics::NewProp_plr,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABamboozleGameMode_SetPlayerRef_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BamboozleGameMode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABamboozleGameMode_SetPlayerRef_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABamboozleGameMode, nullptr, "SetPlayerRef", nullptr, nullptr, Z_Construct_UFunction_ABamboozleGameMode_SetPlayerRef_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABamboozleGameMode_SetPlayerRef_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABamboozleGameMode_SetPlayerRef_Statics::BamboozleGameMode_eventSetPlayerRef_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABamboozleGameMode_SetPlayerRef_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABamboozleGameMode_SetPlayerRef_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABamboozleGameMode_SetPlayerRef_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ABamboozleGameMode_SetPlayerRef_Statics::BamboozleGameMode_eventSetPlayerRef_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ABamboozleGameMode_SetPlayerRef()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABamboozleGameMode_SetPlayerRef_Statics::FuncParams);
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QueueGameUI_MetaData[];
#endif
		static void NewProp_QueueGameUI_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_QueueGameUI;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Score_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Score;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABamboozleGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABamboozleGameMode_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ABamboozleGameMode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABamboozleGameMode_AddScore, "AddScore" }, // 2059127052
		{ &Z_Construct_UFunction_ABamboozleGameMode_CyclePawn, "CyclePawn" }, // 2742511753
		{ &Z_Construct_UFunction_ABamboozleGameMode_DeregisterPawn, "DeregisterPawn" }, // 2811743003
		{ &Z_Construct_UFunction_ABamboozleGameMode_GetCurPawn, "GetCurPawn" }, // 1022243215
		{ &Z_Construct_UFunction_ABamboozleGameMode_GetPlayerRef, "GetPlayerRef" }, // 2318644058
		{ &Z_Construct_UFunction_ABamboozleGameMode_RegisterPawn, "RegisterPawn" }, // 3946879819
		{ &Z_Construct_UFunction_ABamboozleGameMode_ReloadLevel, "ReloadLevel" }, // 3289607857
		{ &Z_Construct_UFunction_ABamboozleGameMode_RestartMatch, "RestartMatch" }, // 2408940508
		{ &Z_Construct_UFunction_ABamboozleGameMode_SetPlayerRef, "SetPlayerRef" }, // 3531645806
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABamboozleGameMode_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABamboozleGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "BamboozleGameMode.h" },
		{ "ModuleRelativePath", "Public/BamboozleGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABamboozleGameMode_Statics::NewProp_QueueGameUI_MetaData[] = {
		{ "Category", "BamboozleGameMode" },
		{ "ModuleRelativePath", "Public/BamboozleGameMode.h" },
	};
#endif
	void Z_Construct_UClass_ABamboozleGameMode_Statics::NewProp_QueueGameUI_SetBit(void* Obj)
	{
		((ABamboozleGameMode*)Obj)->QueueGameUI = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABamboozleGameMode_Statics::NewProp_QueueGameUI = { "QueueGameUI", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ABamboozleGameMode), &Z_Construct_UClass_ABamboozleGameMode_Statics::NewProp_QueueGameUI_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABamboozleGameMode_Statics::NewProp_QueueGameUI_MetaData), Z_Construct_UClass_ABamboozleGameMode_Statics::NewProp_QueueGameUI_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABamboozleGameMode_Statics::NewProp_Score_MetaData[] = {
		{ "Category", "BamboozleGameMode" },
		{ "ModuleRelativePath", "Public/BamboozleGameMode.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABamboozleGameMode_Statics::NewProp_Score = { "Score", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABamboozleGameMode, Score), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABamboozleGameMode_Statics::NewProp_Score_MetaData), Z_Construct_UClass_ABamboozleGameMode_Statics::NewProp_Score_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABamboozleGameMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABamboozleGameMode_Statics::NewProp_QueueGameUI,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABamboozleGameMode_Statics::NewProp_Score,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABamboozleGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABamboozleGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABamboozleGameMode_Statics::ClassParams = {
		&ABamboozleGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABamboozleGameMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABamboozleGameMode_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABamboozleGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ABamboozleGameMode_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABamboozleGameMode_Statics::PropPointers) < 2048);
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
		{ Z_Construct_UClass_ABamboozleGameMode, ABamboozleGameMode::StaticClass, TEXT("ABamboozleGameMode"), &Z_Registration_Info_UClass_ABamboozleGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABamboozleGameMode), 1949799552U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_bamboozle_MyProject_Source_MyProject_Public_BamboozleGameMode_h_3863716098(TEXT("/Script/MyProject"),
		Z_CompiledInDeferFile_FID_GitHub_bamboozle_MyProject_Source_MyProject_Public_BamboozleGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_bamboozle_MyProject_Source_MyProject_Public_BamboozleGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
