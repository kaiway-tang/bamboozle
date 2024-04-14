// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BamboozleGameMode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APawn;
#ifdef MYPROJECT_BamboozleGameMode_generated_h
#error "BamboozleGameMode.generated.h already included, missing '#pragma once' in BamboozleGameMode.h"
#endif
#define MYPROJECT_BamboozleGameMode_generated_h

#define FID_GitHub_bamboozle_MyProject_Source_MyProject_Public_BamboozleGameMode_h_20_SPARSE_DATA
#define FID_GitHub_bamboozle_MyProject_Source_MyProject_Public_BamboozleGameMode_h_20_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_GitHub_bamboozle_MyProject_Source_MyProject_Public_BamboozleGameMode_h_20_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_GitHub_bamboozle_MyProject_Source_MyProject_Public_BamboozleGameMode_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDeregisterPawn); \
	DECLARE_FUNCTION(execCyclePawn); \
	DECLARE_FUNCTION(execRegisterPawn);


#define FID_GitHub_bamboozle_MyProject_Source_MyProject_Public_BamboozleGameMode_h_20_ACCESSORS
#define FID_GitHub_bamboozle_MyProject_Source_MyProject_Public_BamboozleGameMode_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABamboozleGameMode(); \
	friend struct Z_Construct_UClass_ABamboozleGameMode_Statics; \
public: \
	DECLARE_CLASS(ABamboozleGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(ABamboozleGameMode)


#define FID_GitHub_bamboozle_MyProject_Source_MyProject_Public_BamboozleGameMode_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABamboozleGameMode(ABamboozleGameMode&&); \
	NO_API ABamboozleGameMode(const ABamboozleGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABamboozleGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABamboozleGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABamboozleGameMode) \
	NO_API virtual ~ABamboozleGameMode();


#define FID_GitHub_bamboozle_MyProject_Source_MyProject_Public_BamboozleGameMode_h_17_PROLOG
#define FID_GitHub_bamboozle_MyProject_Source_MyProject_Public_BamboozleGameMode_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GitHub_bamboozle_MyProject_Source_MyProject_Public_BamboozleGameMode_h_20_SPARSE_DATA \
	FID_GitHub_bamboozle_MyProject_Source_MyProject_Public_BamboozleGameMode_h_20_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_GitHub_bamboozle_MyProject_Source_MyProject_Public_BamboozleGameMode_h_20_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_GitHub_bamboozle_MyProject_Source_MyProject_Public_BamboozleGameMode_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GitHub_bamboozle_MyProject_Source_MyProject_Public_BamboozleGameMode_h_20_ACCESSORS \
	FID_GitHub_bamboozle_MyProject_Source_MyProject_Public_BamboozleGameMode_h_20_INCLASS_NO_PURE_DECLS \
	FID_GitHub_bamboozle_MyProject_Source_MyProject_Public_BamboozleGameMode_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYPROJECT_API UClass* StaticClass<class ABamboozleGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GitHub_bamboozle_MyProject_Source_MyProject_Public_BamboozleGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
