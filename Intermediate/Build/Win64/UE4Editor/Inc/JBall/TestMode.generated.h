// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef JBALL_TestMode_generated_h
#error "TestMode.generated.h already included, missing '#pragma once' in TestMode.h"
#endif
#define JBALL_TestMode_generated_h

#define JBall_Source_JBall_TestMode_h_15_RPC_WRAPPERS
#define JBall_Source_JBall_TestMode_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define JBall_Source_JBall_TestMode_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATestMode(); \
	friend JBALL_API class UClass* Z_Construct_UClass_ATestMode(); \
public: \
	DECLARE_CLASS(ATestMode, AGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), 0, TEXT("/Script/JBall"), NO_API) \
	DECLARE_SERIALIZER(ATestMode) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define JBall_Source_JBall_TestMode_h_15_INCLASS \
private: \
	static void StaticRegisterNativesATestMode(); \
	friend JBALL_API class UClass* Z_Construct_UClass_ATestMode(); \
public: \
	DECLARE_CLASS(ATestMode, AGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), 0, TEXT("/Script/JBall"), NO_API) \
	DECLARE_SERIALIZER(ATestMode) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define JBall_Source_JBall_TestMode_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATestMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATestMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATestMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATestMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATestMode(ATestMode&&); \
	NO_API ATestMode(const ATestMode&); \
public:


#define JBall_Source_JBall_TestMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATestMode(ATestMode&&); \
	NO_API ATestMode(const ATestMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATestMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATestMode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATestMode)


#define JBall_Source_JBall_TestMode_h_15_PRIVATE_PROPERTY_OFFSET
#define JBall_Source_JBall_TestMode_h_12_PROLOG
#define JBall_Source_JBall_TestMode_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	JBall_Source_JBall_TestMode_h_15_PRIVATE_PROPERTY_OFFSET \
	JBall_Source_JBall_TestMode_h_15_RPC_WRAPPERS \
	JBall_Source_JBall_TestMode_h_15_INCLASS \
	JBall_Source_JBall_TestMode_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define JBall_Source_JBall_TestMode_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	JBall_Source_JBall_TestMode_h_15_PRIVATE_PROPERTY_OFFSET \
	JBall_Source_JBall_TestMode_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	JBall_Source_JBall_TestMode_h_15_INCLASS_NO_PURE_DECLS \
	JBall_Source_JBall_TestMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID JBall_Source_JBall_TestMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
