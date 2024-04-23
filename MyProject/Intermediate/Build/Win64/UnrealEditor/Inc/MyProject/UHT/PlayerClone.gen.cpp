// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject/Public/PlayerClone.h"
#include "../../Source/Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerClone() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	MYPROJECT_API UClass* Z_Construct_UClass_AEnemy_NoRegister();
	MYPROJECT_API UClass* Z_Construct_UClass_APlayerClone();
	MYPROJECT_API UClass* Z_Construct_UClass_APlayerClone_NoRegister();
	MYPROJECT_API UClass* Z_Construct_UClass_APlayerSummon_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MyProject();
// End Cross Module References
	DEFINE_FUNCTION(APlayerClone::execKeySpaceDown)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->KeySpaceDown();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerClone::execSetPosition)
	{
		P_GET_STRUCT(FVector,Z_Param_position);
		P_GET_UBOOL(Z_Param_updatePhysics);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPosition(Z_Param_position,Z_Param_updatePhysics);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerClone::execAddForce)
	{
		P_GET_STRUCT(FVector,Z_Param_force);
		P_GET_UBOOL(Z_Param_ignoreMass);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddForce(Z_Param_force,Z_Param_ignoreMass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerClone::execKeyEDown)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->KeyEDown();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerClone::execKeyQDown)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->KeyQDown();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerClone::execOnTriggerEnter)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_curHitbox);
		P_GET_OBJECT(AActor,Z_Param_other);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_otherHitbox);
		P_GET_PROPERTY(FIntProperty,Z_Param_otherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTriggerEnter(Z_Param_curHitbox,Z_Param_other,Z_Param_otherHitbox,Z_Param_otherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	void APlayerClone::StaticRegisterNativesAPlayerClone()
	{
		UClass* Class = APlayerClone::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddForce", &APlayerClone::execAddForce },
			{ "KeyEDown", &APlayerClone::execKeyEDown },
			{ "KeyQDown", &APlayerClone::execKeyQDown },
			{ "KeySpaceDown", &APlayerClone::execKeySpaceDown },
			{ "OnTriggerEnter", &APlayerClone::execOnTriggerEnter },
			{ "SetPosition", &APlayerClone::execSetPosition },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APlayerClone_AddForce_Statics
	{
		struct PlayerClone_eventAddForce_Parms
		{
			FVector force;
			bool ignoreMass;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_force;
		static void NewProp_ignoreMass_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ignoreMass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayerClone_AddForce_Statics::NewProp_force = { "force", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerClone_eventAddForce_Parms, force), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_APlayerClone_AddForce_Statics::NewProp_ignoreMass_SetBit(void* Obj)
	{
		((PlayerClone_eventAddForce_Parms*)Obj)->ignoreMass = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerClone_AddForce_Statics::NewProp_ignoreMass = { "ignoreMass", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayerClone_eventAddForce_Parms), &Z_Construct_UFunction_APlayerClone_AddForce_Statics::NewProp_ignoreMass_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerClone_AddForce_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerClone_AddForce_Statics::NewProp_force,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerClone_AddForce_Statics::NewProp_ignoreMass,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerClone_AddForce_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Called to bind functionality to input\n//virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;\n" },
#endif
		{ "ModuleRelativePath", "Public/PlayerClone.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called to bind functionality to input\nvirtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerClone_AddForce_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerClone, nullptr, "AddForce", nullptr, nullptr, Z_Construct_UFunction_APlayerClone_AddForce_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerClone_AddForce_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayerClone_AddForce_Statics::PlayerClone_eventAddForce_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerClone_AddForce_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerClone_AddForce_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerClone_AddForce_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_APlayerClone_AddForce_Statics::PlayerClone_eventAddForce_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_APlayerClone_AddForce()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerClone_AddForce_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerClone_KeyEDown_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerClone_KeyEDown_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerClone.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerClone_KeyEDown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerClone, nullptr, "KeyEDown", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerClone_KeyEDown_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerClone_KeyEDown_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_APlayerClone_KeyEDown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerClone_KeyEDown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerClone_KeyQDown_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerClone_KeyQDown_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerClone.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerClone_KeyQDown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerClone, nullptr, "KeyQDown", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerClone_KeyQDown_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerClone_KeyQDown_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_APlayerClone_KeyQDown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerClone_KeyQDown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerClone_KeySpaceDown_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerClone_KeySpaceDown_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerClone.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerClone_KeySpaceDown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerClone, nullptr, "KeySpaceDown", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerClone_KeySpaceDown_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerClone_KeySpaceDown_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_APlayerClone_KeySpaceDown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerClone_KeySpaceDown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerClone_OnTriggerEnter_Statics
	{
		struct PlayerClone_eventOnTriggerEnter_Parms
		{
			UPrimitiveComponent* curHitbox;
			AActor* other;
			UPrimitiveComponent* otherHitbox;
			int32 otherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_curHitbox_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_curHitbox;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_other;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_otherHitbox_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_otherHitbox;
		static const UECodeGen_Private::FIntPropertyParams NewProp_otherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerClone_OnTriggerEnter_Statics::NewProp_curHitbox_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerClone_OnTriggerEnter_Statics::NewProp_curHitbox = { "curHitbox", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerClone_eventOnTriggerEnter_Parms, curHitbox), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerClone_OnTriggerEnter_Statics::NewProp_curHitbox_MetaData), Z_Construct_UFunction_APlayerClone_OnTriggerEnter_Statics::NewProp_curHitbox_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerClone_OnTriggerEnter_Statics::NewProp_other = { "other", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerClone_eventOnTriggerEnter_Parms, other), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerClone_OnTriggerEnter_Statics::NewProp_otherHitbox_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerClone_OnTriggerEnter_Statics::NewProp_otherHitbox = { "otherHitbox", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerClone_eventOnTriggerEnter_Parms, otherHitbox), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerClone_OnTriggerEnter_Statics::NewProp_otherHitbox_MetaData), Z_Construct_UFunction_APlayerClone_OnTriggerEnter_Statics::NewProp_otherHitbox_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APlayerClone_OnTriggerEnter_Statics::NewProp_otherBodyIndex = { "otherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerClone_eventOnTriggerEnter_Parms, otherBodyIndex), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_APlayerClone_OnTriggerEnter_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((PlayerClone_eventOnTriggerEnter_Parms*)Obj)->bFromSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerClone_OnTriggerEnter_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayerClone_eventOnTriggerEnter_Parms), &Z_Construct_UFunction_APlayerClone_OnTriggerEnter_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerClone_OnTriggerEnter_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayerClone_OnTriggerEnter_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerClone_eventOnTriggerEnter_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerClone_OnTriggerEnter_Statics::NewProp_SweepResult_MetaData), Z_Construct_UFunction_APlayerClone_OnTriggerEnter_Statics::NewProp_SweepResult_MetaData) }; // 1891709922
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerClone_OnTriggerEnter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerClone_OnTriggerEnter_Statics::NewProp_curHitbox,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerClone_OnTriggerEnter_Statics::NewProp_other,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerClone_OnTriggerEnter_Statics::NewProp_otherHitbox,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerClone_OnTriggerEnter_Statics::NewProp_otherBodyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerClone_OnTriggerEnter_Statics::NewProp_bFromSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerClone_OnTriggerEnter_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerClone_OnTriggerEnter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerClone.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerClone_OnTriggerEnter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerClone, nullptr, "OnTriggerEnter", nullptr, nullptr, Z_Construct_UFunction_APlayerClone_OnTriggerEnter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerClone_OnTriggerEnter_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayerClone_OnTriggerEnter_Statics::PlayerClone_eventOnTriggerEnter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerClone_OnTriggerEnter_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerClone_OnTriggerEnter_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerClone_OnTriggerEnter_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_APlayerClone_OnTriggerEnter_Statics::PlayerClone_eventOnTriggerEnter_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_APlayerClone_OnTriggerEnter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerClone_OnTriggerEnter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerClone_SetPosition_Statics
	{
		struct PlayerClone_eventSetPosition_Parms
		{
			FVector position;
			bool updatePhysics;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_position;
		static void NewProp_updatePhysics_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_updatePhysics;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayerClone_SetPosition_Statics::NewProp_position = { "position", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerClone_eventSetPosition_Parms, position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_APlayerClone_SetPosition_Statics::NewProp_updatePhysics_SetBit(void* Obj)
	{
		((PlayerClone_eventSetPosition_Parms*)Obj)->updatePhysics = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerClone_SetPosition_Statics::NewProp_updatePhysics = { "updatePhysics", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayerClone_eventSetPosition_Parms), &Z_Construct_UFunction_APlayerClone_SetPosition_Statics::NewProp_updatePhysics_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerClone_SetPosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerClone_SetPosition_Statics::NewProp_position,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerClone_SetPosition_Statics::NewProp_updatePhysics,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerClone_SetPosition_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerClone.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerClone_SetPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerClone, nullptr, "SetPosition", nullptr, nullptr, Z_Construct_UFunction_APlayerClone_SetPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerClone_SetPosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayerClone_SetPosition_Statics::PlayerClone_eventSetPosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerClone_SetPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerClone_SetPosition_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerClone_SetPosition_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_APlayerClone_SetPosition_Statics::PlayerClone_eventSetPosition_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_APlayerClone_SetPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerClone_SetPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APlayerClone);
	UClass* Z_Construct_UClass_APlayerClone_NoRegister()
	{
		return APlayerClone::StaticClass();
	}
	struct Z_Construct_UClass_APlayerClone_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RootMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Hitbox_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Hitbox;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PhysicsBody_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PhysicsBody;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_keyWDown_MetaData[];
#endif
		static void NewProp_keyWDown_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_keyWDown;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_keySDown_MetaData[];
#endif
		static void NewProp_keySDown_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_keySDown;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_keyADown_MetaData[];
#endif
		static void NewProp_keyADown_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_keyADown;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_keyDDown_MetaData[];
#endif
		static void NewProp_keyDDown_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_keyDDown;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_keySpaceDown_MetaData[];
#endif
		static void NewProp_keySpaceDown_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_keySpaceDown;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mouseLeftDown_MetaData[];
#endif
		static void NewProp_mouseLeftDown_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_mouseLeftDown;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mouseRightDown_MetaData[];
#endif
		static void NewProp_mouseRightDown_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_mouseRightDown;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mouseX_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_mouseX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mouseY_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_mouseY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mouseSensitivity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_mouseSensitivity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_fwdForce_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_fwdForce;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_baseMoveSpd_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_baseMoveSpd;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_moveMaxFactor_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_moveMaxFactor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_jumpPower_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_jumpPower;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_baseFrictionFactor_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_baseFrictionFactor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_gravity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_gravity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_startOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_startOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_endOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_endOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerSummonBP_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_PlayerSummonBP;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AsssassinSummoner_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_AsssassinSummoner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_abilityCost_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_abilityCost;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_maxEnergy_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_maxEnergy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_dashSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_dashSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_dashDuration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_dashDuration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_dJumpPower_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_dJumpPower;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_slashExtension_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_slashExtension;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_slashOffCD_MetaData[];
#endif
		static void NewProp_slashOffCD_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_slashOffCD;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_attackWidth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_attackWidth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_teleportDurationFactor_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_teleportDurationFactor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_energyBarFillPercent_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_energyBarFillPercent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DamagedThisTick_MetaData[];
#endif
		static void NewProp_DamagedThisTick_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_DamagedThisTick;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RecoveredThisTick_MetaData[];
#endif
		static void NewProp_RecoveredThisTick_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_RecoveredThisTick;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DamageRecoveryTimer_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageRecoveryTimer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlayerClone_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerClone_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_APlayerClone_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APlayerClone_AddForce, "AddForce" }, // 103674966
		{ &Z_Construct_UFunction_APlayerClone_KeyEDown, "KeyEDown" }, // 3439618348
		{ &Z_Construct_UFunction_APlayerClone_KeyQDown, "KeyQDown" }, // 1708008714
		{ &Z_Construct_UFunction_APlayerClone_KeySpaceDown, "KeySpaceDown" }, // 1455660203
		{ &Z_Construct_UFunction_APlayerClone_OnTriggerEnter, "OnTriggerEnter" }, // 2410427831
		{ &Z_Construct_UFunction_APlayerClone_SetPosition, "SetPosition" }, // 285945634
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerClone_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerClone_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "PlayerClone.h" },
		{ "ModuleRelativePath", "Public/PlayerClone.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerClone_Statics::NewProp_CameraComponent_MetaData[] = {
		{ "Category", "PlayerClone" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PlayerClone.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerClone_Statics::NewProp_CameraComponent = { "CameraComponent", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerClone, CameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerClone_Statics::NewProp_CameraComponent_MetaData), Z_Construct_UClass_APlayerClone_Statics::NewProp_CameraComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerClone_Statics::NewProp_RootMesh_MetaData[] = {
		{ "Category", "PlayerClone" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PlayerClone.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerClone_Statics::NewProp_RootMesh = { "RootMesh", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerClone, RootMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerClone_Statics::NewProp_RootMesh_MetaData), Z_Construct_UClass_APlayerClone_Statics::NewProp_RootMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerClone_Statics::NewProp_Hitbox_MetaData[] = {
		{ "Category", "PlayerClone" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PlayerClone.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerClone_Statics::NewProp_Hitbox = { "Hitbox", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerClone, Hitbox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerClone_Statics::NewProp_Hitbox_MetaData), Z_Construct_UClass_APlayerClone_Statics::NewProp_Hitbox_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerClone_Statics::NewProp_PhysicsBody_MetaData[] = {
		{ "Category", "PlayerClone" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PlayerClone.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerClone_Statics::NewProp_PhysicsBody = { "PhysicsBody", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerClone, PhysicsBody), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerClone_Statics::NewProp_PhysicsBody_MetaData), Z_Construct_UClass_APlayerClone_Statics::NewProp_PhysicsBody_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerClone_Statics::NewProp_keyWDown_MetaData[] = {
		{ "Category", "PlayerClone" },
		{ "ModuleRelativePath", "Public/PlayerClone.h" },
	};
#endif
	void Z_Construct_UClass_APlayerClone_Statics::NewProp_keyWDown_SetBit(void* Obj)
	{
		((APlayerClone*)Obj)->keyWDown = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APlayerClone_Statics::NewProp_keyWDown = { "keyWDown", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(APlayerClone), &Z_Construct_UClass_APlayerClone_Statics::NewProp_keyWDown_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerClone_Statics::NewProp_keyWDown_MetaData), Z_Construct_UClass_APlayerClone_Statics::NewProp_keyWDown_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerClone_Statics::NewProp_keySDown_MetaData[] = {
		{ "Category", "PlayerClone" },
		{ "ModuleRelativePath", "Public/PlayerClone.h" },
	};
#endif
	void Z_Construct_UClass_APlayerClone_Statics::NewProp_keySDown_SetBit(void* Obj)
	{
		((APlayerClone*)Obj)->keySDown = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APlayerClone_Statics::NewProp_keySDown = { "keySDown", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(APlayerClone), &Z_Construct_UClass_APlayerClone_Statics::NewProp_keySDown_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerClone_Statics::NewProp_keySDown_MetaData), Z_Construct_UClass_APlayerClone_Statics::NewProp_keySDown_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerClone_Statics::NewProp_keyADown_MetaData[] = {
		{ "Category", "PlayerClone" },
		{ "ModuleRelativePath", "Public/PlayerClone.h" },
	};
#endif
	void Z_Construct_UClass_APlayerClone_Statics::NewProp_keyADown_SetBit(void* Obj)
	{
		((APlayerClone*)Obj)->keyADown = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APlayerClone_Statics::NewProp_keyADown = { "keyADown", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(APlayerClone), &Z_Construct_UClass_APlayerClone_Statics::NewProp_keyADown_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerClone_Statics::NewProp_keyADown_MetaData), Z_Construct_UClass_APlayerClone_Statics::NewProp_keyADown_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerClone_Statics::NewProp_keyDDown_MetaData[] = {
		{ "Category", "PlayerClone" },
		{ "ModuleRelativePath", "Public/PlayerClone.h" },
	};
#endif
	void Z_Construct_UClass_APlayerClone_Statics::NewProp_keyDDown_SetBit(void* Obj)
	{
		((APlayerClone*)Obj)->keyDDown = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APlayerClone_Statics::NewProp_keyDDown = { "keyDDown", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(APlayerClone), &Z_Construct_UClass_APlayerClone_Statics::NewProp_keyDDown_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerClone_Statics::NewProp_keyDDown_MetaData), Z_Construct_UClass_APlayerClone_Statics::NewProp_keyDDown_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerClone_Statics::NewProp_keySpaceDown_MetaData[] = {
		{ "Category", "PlayerClone" },
		{ "ModuleRelativePath", "Public/PlayerClone.h" },
	};
#endif
	void Z_Construct_UClass_APlayerClone_Statics::NewProp_keySpaceDown_SetBit(void* Obj)
	{
		((APlayerClone*)Obj)->keySpaceDown = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APlayerClone_Statics::NewProp_keySpaceDown = { "keySpaceDown", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(APlayerClone), &Z_Construct_UClass_APlayerClone_Statics::NewProp_keySpaceDown_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerClone_Statics::NewProp_keySpaceDown_MetaData), Z_Construct_UClass_APlayerClone_Statics::NewProp_keySpaceDown_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerClone_Statics::NewProp_mouseLeftDown_MetaData[] = {
		{ "Category", "PlayerClone" },
		{ "ModuleRelativePath", "Public/PlayerClone.h" },
	};
#endif
	void Z_Construct_UClass_APlayerClone_Statics::NewProp_mouseLeftDown_SetBit(void* Obj)
	{
		((APlayerClone*)Obj)->mouseLeftDown = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APlayerClone_Statics::NewProp_mouseLeftDown = { "mouseLeftDown", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(APlayerClone), &Z_Construct_UClass_APlayerClone_Statics::NewProp_mouseLeftDown_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerClone_Statics::NewProp_mouseLeftDown_MetaData), Z_Construct_UClass_APlayerClone_Statics::NewProp_mouseLeftDown_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerClone_Statics::NewProp_mouseRightDown_MetaData[] = {
		{ "Category", "PlayerClone" },
		{ "ModuleRelativePath", "Public/PlayerClone.h" },
	};
#endif
	void Z_Construct_UClass_APlayerClone_Statics::NewProp_mouseRightDown_SetBit(void* Obj)
	{
		((APlayerClone*)Obj)->mouseRightDown = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APlayerClone_Statics::NewProp_mouseRightDown = { "mouseRightDown", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(APlayerClone), &Z_Construct_UClass_APlayerClone_Statics::NewProp_mouseRightDown_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerClone_Statics::NewProp_mouseRightDown_MetaData), Z_Construct_UClass_APlayerClone_Statics::NewProp_mouseRightDown_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerClone_Statics::NewProp_mouseX_MetaData[] = {
		{ "Category", "PlayerClone" },
		{ "ModuleRelativePath", "Public/PlayerClone.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerClone_Statics::NewProp_mouseX = { "mouseX", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerClone, mouseX), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerClone_Statics::NewProp_mouseX_MetaData), Z_Construct_UClass_APlayerClone_Statics::NewProp_mouseX_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerClone_Statics::NewProp_mouseY_MetaData[] = {
		{ "Category", "PlayerClone" },
		{ "ModuleRelativePath", "Public/PlayerClone.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerClone_Statics::NewProp_mouseY = { "mouseY", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerClone, mouseY), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerClone_Statics::NewProp_mouseY_MetaData), Z_Construct_UClass_APlayerClone_Statics::NewProp_mouseY_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerClone_Statics::NewProp_mouseSensitivity_MetaData[] = {
		{ "Category", "PlayerClone" },
		{ "ModuleRelativePath", "Public/PlayerClone.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerClone_Statics::NewProp_mouseSensitivity = { "mouseSensitivity", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerClone, mouseSensitivity), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerClone_Statics::NewProp_mouseSensitivity_MetaData), Z_Construct_UClass_APlayerClone_Statics::NewProp_mouseSensitivity_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerClone_Statics::NewProp_fwdForce_MetaData[] = {
		{ "Category", "PlayerClone" },
		{ "ModuleRelativePath", "Public/PlayerClone.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerClone_Statics::NewProp_fwdForce = { "fwdForce", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerClone, fwdForce), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerClone_Statics::NewProp_fwdForce_MetaData), Z_Construct_UClass_APlayerClone_Statics::NewProp_fwdForce_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerClone_Statics::NewProp_baseMoveSpd_MetaData[] = {
		{ "Category", "PlayerClone" },
		{ "ModuleRelativePath", "Public/PlayerClone.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerClone_Statics::NewProp_baseMoveSpd = { "baseMoveSpd", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerClone, baseMoveSpd), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerClone_Statics::NewProp_baseMoveSpd_MetaData), Z_Construct_UClass_APlayerClone_Statics::NewProp_baseMoveSpd_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerClone_Statics::NewProp_moveMaxFactor_MetaData[] = {
		{ "Category", "PlayerClone" },
		{ "ModuleRelativePath", "Public/PlayerClone.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerClone_Statics::NewProp_moveMaxFactor = { "moveMaxFactor", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerClone, moveMaxFactor), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerClone_Statics::NewProp_moveMaxFactor_MetaData), Z_Construct_UClass_APlayerClone_Statics::NewProp_moveMaxFactor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerClone_Statics::NewProp_jumpPower_MetaData[] = {
		{ "Category", "PlayerClone" },
		{ "ModuleRelativePath", "Public/PlayerClone.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerClone_Statics::NewProp_jumpPower = { "jumpPower", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerClone, jumpPower), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerClone_Statics::NewProp_jumpPower_MetaData), Z_Construct_UClass_APlayerClone_Statics::NewProp_jumpPower_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerClone_Statics::NewProp_baseFrictionFactor_MetaData[] = {
		{ "Category", "PlayerClone" },
		{ "ModuleRelativePath", "Public/PlayerClone.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerClone_Statics::NewProp_baseFrictionFactor = { "baseFrictionFactor", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerClone, baseFrictionFactor), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerClone_Statics::NewProp_baseFrictionFactor_MetaData), Z_Construct_UClass_APlayerClone_Statics::NewProp_baseFrictionFactor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerClone_Statics::NewProp_gravity_MetaData[] = {
		{ "Category", "PlayerClone" },
		{ "ModuleRelativePath", "Public/PlayerClone.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerClone_Statics::NewProp_gravity = { "gravity", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerClone, gravity), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerClone_Statics::NewProp_gravity_MetaData), Z_Construct_UClass_APlayerClone_Statics::NewProp_gravity_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerClone_Statics::NewProp_startOffset_MetaData[] = {
		{ "Category", "PlayerClone" },
		{ "ModuleRelativePath", "Public/PlayerClone.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerClone_Statics::NewProp_startOffset = { "startOffset", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerClone, startOffset), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerClone_Statics::NewProp_startOffset_MetaData), Z_Construct_UClass_APlayerClone_Statics::NewProp_startOffset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerClone_Statics::NewProp_endOffset_MetaData[] = {
		{ "Category", "PlayerClone" },
		{ "ModuleRelativePath", "Public/PlayerClone.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerClone_Statics::NewProp_endOffset = { "endOffset", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerClone, endOffset), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerClone_Statics::NewProp_endOffset_MetaData), Z_Construct_UClass_APlayerClone_Statics::NewProp_endOffset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerClone_Statics::NewProp_PlayerSummonBP_MetaData[] = {
		{ "Category", "ActorSpawning" },
		{ "ModuleRelativePath", "Public/PlayerClone.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_APlayerClone_Statics::NewProp_PlayerSummonBP = { "PlayerSummonBP", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerClone, PlayerSummonBP), Z_Construct_UClass_UClass, Z_Construct_UClass_APlayerSummon_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerClone_Statics::NewProp_PlayerSummonBP_MetaData), Z_Construct_UClass_APlayerClone_Statics::NewProp_PlayerSummonBP_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerClone_Statics::NewProp_AsssassinSummoner_MetaData[] = {
		{ "Category", "ActorSpawning" },
		{ "ModuleRelativePath", "Public/PlayerClone.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_APlayerClone_Statics::NewProp_AsssassinSummoner = { "AsssassinSummoner", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerClone, AsssassinSummoner), Z_Construct_UClass_UClass, Z_Construct_UClass_AEnemy_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerClone_Statics::NewProp_AsssassinSummoner_MetaData), Z_Construct_UClass_APlayerClone_Statics::NewProp_AsssassinSummoner_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerClone_Statics::NewProp_abilityCost_MetaData[] = {
		{ "Category", "PlayerClone" },
		{ "ModuleRelativePath", "Public/PlayerClone.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_APlayerClone_Statics::NewProp_abilityCost = { "abilityCost", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerClone, abilityCost), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerClone_Statics::NewProp_abilityCost_MetaData), Z_Construct_UClass_APlayerClone_Statics::NewProp_abilityCost_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerClone_Statics::NewProp_maxEnergy_MetaData[] = {
		{ "Category", "PlayerClone" },
		{ "ModuleRelativePath", "Public/PlayerClone.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_APlayerClone_Statics::NewProp_maxEnergy = { "maxEnergy", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerClone, maxEnergy), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerClone_Statics::NewProp_maxEnergy_MetaData), Z_Construct_UClass_APlayerClone_Statics::NewProp_maxEnergy_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerClone_Statics::NewProp_dashSpeed_MetaData[] = {
		{ "Category", "PlayerClone" },
		{ "ModuleRelativePath", "Public/PlayerClone.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerClone_Statics::NewProp_dashSpeed = { "dashSpeed", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerClone, dashSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerClone_Statics::NewProp_dashSpeed_MetaData), Z_Construct_UClass_APlayerClone_Statics::NewProp_dashSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerClone_Statics::NewProp_dashDuration_MetaData[] = {
		{ "Category", "PlayerClone" },
		{ "ModuleRelativePath", "Public/PlayerClone.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerClone_Statics::NewProp_dashDuration = { "dashDuration", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerClone, dashDuration), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerClone_Statics::NewProp_dashDuration_MetaData), Z_Construct_UClass_APlayerClone_Statics::NewProp_dashDuration_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerClone_Statics::NewProp_dJumpPower_MetaData[] = {
		{ "Category", "PlayerClone" },
		{ "ModuleRelativePath", "Public/PlayerClone.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerClone_Statics::NewProp_dJumpPower = { "dJumpPower", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerClone, dJumpPower), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerClone_Statics::NewProp_dJumpPower_MetaData), Z_Construct_UClass_APlayerClone_Statics::NewProp_dJumpPower_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerClone_Statics::NewProp_slashExtension_MetaData[] = {
		{ "Category", "PlayerClone" },
		{ "ModuleRelativePath", "Public/PlayerClone.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerClone_Statics::NewProp_slashExtension = { "slashExtension", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerClone, slashExtension), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerClone_Statics::NewProp_slashExtension_MetaData), Z_Construct_UClass_APlayerClone_Statics::NewProp_slashExtension_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerClone_Statics::NewProp_slashOffCD_MetaData[] = {
		{ "Category", "PlayerClone" },
		{ "ModuleRelativePath", "Public/PlayerClone.h" },
	};
#endif
	void Z_Construct_UClass_APlayerClone_Statics::NewProp_slashOffCD_SetBit(void* Obj)
	{
		((APlayerClone*)Obj)->slashOffCD = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APlayerClone_Statics::NewProp_slashOffCD = { "slashOffCD", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(APlayerClone), &Z_Construct_UClass_APlayerClone_Statics::NewProp_slashOffCD_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerClone_Statics::NewProp_slashOffCD_MetaData), Z_Construct_UClass_APlayerClone_Statics::NewProp_slashOffCD_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerClone_Statics::NewProp_attackWidth_MetaData[] = {
		{ "Category", "PlayerClone" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//----------------------------------------------------------------------------------------------\n" },
#endif
		{ "ModuleRelativePath", "Public/PlayerClone.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerClone_Statics::NewProp_attackWidth = { "attackWidth", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerClone, attackWidth), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerClone_Statics::NewProp_attackWidth_MetaData), Z_Construct_UClass_APlayerClone_Statics::NewProp_attackWidth_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerClone_Statics::NewProp_teleportDurationFactor_MetaData[] = {
		{ "Category", "PlayerClone" },
		{ "ModuleRelativePath", "Public/PlayerClone.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerClone_Statics::NewProp_teleportDurationFactor = { "teleportDurationFactor", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerClone, teleportDurationFactor), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerClone_Statics::NewProp_teleportDurationFactor_MetaData), Z_Construct_UClass_APlayerClone_Statics::NewProp_teleportDurationFactor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerClone_Statics::NewProp_energyBarFillPercent_MetaData[] = {
		{ "Category", "PlayerClone" },
		{ "ModuleRelativePath", "Public/PlayerClone.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerClone_Statics::NewProp_energyBarFillPercent = { "energyBarFillPercent", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerClone, energyBarFillPercent), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerClone_Statics::NewProp_energyBarFillPercent_MetaData), Z_Construct_UClass_APlayerClone_Statics::NewProp_energyBarFillPercent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerClone_Statics::NewProp_DamagedThisTick_MetaData[] = {
		{ "Category", "PlayerClone" },
		{ "ModuleRelativePath", "Public/PlayerClone.h" },
	};
#endif
	void Z_Construct_UClass_APlayerClone_Statics::NewProp_DamagedThisTick_SetBit(void* Obj)
	{
		((APlayerClone*)Obj)->DamagedThisTick = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APlayerClone_Statics::NewProp_DamagedThisTick = { "DamagedThisTick", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(APlayerClone), &Z_Construct_UClass_APlayerClone_Statics::NewProp_DamagedThisTick_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerClone_Statics::NewProp_DamagedThisTick_MetaData), Z_Construct_UClass_APlayerClone_Statics::NewProp_DamagedThisTick_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerClone_Statics::NewProp_RecoveredThisTick_MetaData[] = {
		{ "Category", "PlayerClone" },
		{ "ModuleRelativePath", "Public/PlayerClone.h" },
	};
#endif
	void Z_Construct_UClass_APlayerClone_Statics::NewProp_RecoveredThisTick_SetBit(void* Obj)
	{
		((APlayerClone*)Obj)->RecoveredThisTick = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APlayerClone_Statics::NewProp_RecoveredThisTick = { "RecoveredThisTick", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(APlayerClone), &Z_Construct_UClass_APlayerClone_Statics::NewProp_RecoveredThisTick_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerClone_Statics::NewProp_RecoveredThisTick_MetaData), Z_Construct_UClass_APlayerClone_Statics::NewProp_RecoveredThisTick_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerClone_Statics::NewProp_DamageRecoveryTimer_MetaData[] = {
		{ "Category", "PlayerClone" },
		{ "ModuleRelativePath", "Public/PlayerClone.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerClone_Statics::NewProp_DamageRecoveryTimer = { "DamageRecoveryTimer", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerClone, DamageRecoveryTimer), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerClone_Statics::NewProp_DamageRecoveryTimer_MetaData), Z_Construct_UClass_APlayerClone_Statics::NewProp_DamageRecoveryTimer_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlayerClone_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerClone_Statics::NewProp_CameraComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerClone_Statics::NewProp_RootMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerClone_Statics::NewProp_Hitbox,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerClone_Statics::NewProp_PhysicsBody,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerClone_Statics::NewProp_keyWDown,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerClone_Statics::NewProp_keySDown,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerClone_Statics::NewProp_keyADown,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerClone_Statics::NewProp_keyDDown,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerClone_Statics::NewProp_keySpaceDown,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerClone_Statics::NewProp_mouseLeftDown,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerClone_Statics::NewProp_mouseRightDown,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerClone_Statics::NewProp_mouseX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerClone_Statics::NewProp_mouseY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerClone_Statics::NewProp_mouseSensitivity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerClone_Statics::NewProp_fwdForce,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerClone_Statics::NewProp_baseMoveSpd,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerClone_Statics::NewProp_moveMaxFactor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerClone_Statics::NewProp_jumpPower,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerClone_Statics::NewProp_baseFrictionFactor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerClone_Statics::NewProp_gravity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerClone_Statics::NewProp_startOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerClone_Statics::NewProp_endOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerClone_Statics::NewProp_PlayerSummonBP,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerClone_Statics::NewProp_AsssassinSummoner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerClone_Statics::NewProp_abilityCost,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerClone_Statics::NewProp_maxEnergy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerClone_Statics::NewProp_dashSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerClone_Statics::NewProp_dashDuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerClone_Statics::NewProp_dJumpPower,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerClone_Statics::NewProp_slashExtension,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerClone_Statics::NewProp_slashOffCD,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerClone_Statics::NewProp_attackWidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerClone_Statics::NewProp_teleportDurationFactor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerClone_Statics::NewProp_energyBarFillPercent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerClone_Statics::NewProp_DamagedThisTick,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerClone_Statics::NewProp_RecoveredThisTick,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerClone_Statics::NewProp_DamageRecoveryTimer,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlayerClone_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayerClone>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APlayerClone_Statics::ClassParams = {
		&APlayerClone::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APlayerClone_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_APlayerClone_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerClone_Statics::Class_MetaDataParams), Z_Construct_UClass_APlayerClone_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerClone_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_APlayerClone()
	{
		if (!Z_Registration_Info_UClass_APlayerClone.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APlayerClone.OuterSingleton, Z_Construct_UClass_APlayerClone_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APlayerClone.OuterSingleton;
	}
	template<> MYPROJECT_API UClass* StaticClass<APlayerClone>()
	{
		return APlayerClone::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerClone);
	APlayerClone::~APlayerClone() {}
	struct Z_CompiledInDeferFile_FID_GitHub_bamboozle_MyProject_Source_MyProject_Public_PlayerClone_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_bamboozle_MyProject_Source_MyProject_Public_PlayerClone_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APlayerClone, APlayerClone::StaticClass, TEXT("APlayerClone"), &Z_Registration_Info_UClass_APlayerClone, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlayerClone), 303971208U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_bamboozle_MyProject_Source_MyProject_Public_PlayerClone_h_208512994(TEXT("/Script/MyProject"),
		Z_CompiledInDeferFile_FID_GitHub_bamboozle_MyProject_Source_MyProject_Public_PlayerClone_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_bamboozle_MyProject_Source_MyProject_Public_PlayerClone_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
