// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PlayerClone.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef MYPROJECT_PlayerClone_generated_h
#error "PlayerClone.generated.h already included, missing '#pragma once' in PlayerClone.h"
#endif
#define MYPROJECT_PlayerClone_generated_h

#define FID_GitHub_bamboozle_MyProject_Source_MyProject_Public_PlayerClone_h_13_SPARSE_DATA
#define FID_GitHub_bamboozle_MyProject_Source_MyProject_Public_PlayerClone_h_13_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_GitHub_bamboozle_MyProject_Source_MyProject_Public_PlayerClone_h_13_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_GitHub_bamboozle_MyProject_Source_MyProject_Public_PlayerClone_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetPosition); \
	DECLARE_FUNCTION(execAddForce); \
	DECLARE_FUNCTION(execOnTriggerEnter);


#define FID_GitHub_bamboozle_MyProject_Source_MyProject_Public_PlayerClone_h_13_ACCESSORS
#define FID_GitHub_bamboozle_MyProject_Source_MyProject_Public_PlayerClone_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayerClone(); \
	friend struct Z_Construct_UClass_APlayerClone_Statics; \
public: \
	DECLARE_CLASS(APlayerClone, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(APlayerClone)


#define FID_GitHub_bamboozle_MyProject_Source_MyProject_Public_PlayerClone_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerClone(APlayerClone&&); \
	NO_API APlayerClone(const APlayerClone&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerClone); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerClone); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlayerClone) \
	NO_API virtual ~APlayerClone();


#define FID_GitHub_bamboozle_MyProject_Source_MyProject_Public_PlayerClone_h_10_PROLOG
#define FID_GitHub_bamboozle_MyProject_Source_MyProject_Public_PlayerClone_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GitHub_bamboozle_MyProject_Source_MyProject_Public_PlayerClone_h_13_SPARSE_DATA \
	FID_GitHub_bamboozle_MyProject_Source_MyProject_Public_PlayerClone_h_13_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_GitHub_bamboozle_MyProject_Source_MyProject_Public_PlayerClone_h_13_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_GitHub_bamboozle_MyProject_Source_MyProject_Public_PlayerClone_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GitHub_bamboozle_MyProject_Source_MyProject_Public_PlayerClone_h_13_ACCESSORS \
	FID_GitHub_bamboozle_MyProject_Source_MyProject_Public_PlayerClone_h_13_INCLASS_NO_PURE_DECLS \
	FID_GitHub_bamboozle_MyProject_Source_MyProject_Public_PlayerClone_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYPROJECT_API UClass* StaticClass<class APlayerClone>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GitHub_bamboozle_MyProject_Source_MyProject_Public_PlayerClone_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
