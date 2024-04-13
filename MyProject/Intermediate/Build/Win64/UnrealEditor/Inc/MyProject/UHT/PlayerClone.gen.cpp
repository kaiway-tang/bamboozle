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
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	MYPROJECT_API UClass* Z_Construct_UClass_APlayerClone();
	MYPROJECT_API UClass* Z_Construct_UClass_APlayerClone_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MyProject();
// End Cross Module References
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
		{ "ModuleRelativePath", "Public/PlayerClone.h" },
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
		{ &Z_Construct_UFunction_APlayerClone_AddForce, "AddForce" }, // 1608936733
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
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlayerClone_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerClone_Statics::NewProp_RootMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerClone_Statics::NewProp_Hitbox,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerClone_Statics::NewProp_PhysicsBody,
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
		{ Z_Construct_UClass_APlayerClone, APlayerClone::StaticClass, TEXT("APlayerClone"), &Z_Registration_Info_UClass_APlayerClone, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlayerClone), 197890886U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_bamboozle_MyProject_Source_MyProject_Public_PlayerClone_h_2059812763(TEXT("/Script/MyProject"),
		Z_CompiledInDeferFile_FID_GitHub_bamboozle_MyProject_Source_MyProject_Public_PlayerClone_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_bamboozle_MyProject_Source_MyProject_Public_PlayerClone_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
