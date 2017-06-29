// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FVector;
struct FHitResult;
#ifdef JBALL_JPlayer_generated_h
#error "JPlayer.generated.h already included, missing '#pragma once' in JPlayer.h"
#endif
#define JBALL_JPlayer_generated_h

#define JBall_Source_JBall_JPlayer_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCatch) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Catch(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execThrow) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Throw(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execWarp) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Warp(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDoubleJump) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->DoubleJump(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_otherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_otherComp); \
		P_GET_STRUCT(FVector,Z_Param_normalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnHit(Z_Param_otherActor,Z_Param_otherComp,Z_Param_normalImpulse,Z_Param_Out_hit); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnStopJump) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnStopJump(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnStartJump) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnStartJump(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTurn) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_val); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Turn(Z_Param_val); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLookUp) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_val); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->LookUp(Z_Param_val); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMoveRight) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_val); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->MoveRight(Z_Param_val); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMoveForward) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_val); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->MoveForward(Z_Param_val); \
		P_NATIVE_END; \
	}


#define JBall_Source_JBall_JPlayer_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCatch) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Catch(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execThrow) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Throw(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execWarp) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Warp(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDoubleJump) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->DoubleJump(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_otherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_otherComp); \
		P_GET_STRUCT(FVector,Z_Param_normalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnHit(Z_Param_otherActor,Z_Param_otherComp,Z_Param_normalImpulse,Z_Param_Out_hit); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnStopJump) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnStopJump(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnStartJump) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnStartJump(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTurn) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_val); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Turn(Z_Param_val); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLookUp) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_val); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->LookUp(Z_Param_val); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMoveRight) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_val); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->MoveRight(Z_Param_val); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMoveForward) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_val); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->MoveForward(Z_Param_val); \
		P_NATIVE_END; \
	}


#define JBall_Source_JBall_JPlayer_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAJPlayer(); \
	friend JBALL_API class UClass* Z_Construct_UClass_AJPlayer(); \
public: \
	DECLARE_CLASS(AJPlayer, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/JBall"), NO_API) \
	DECLARE_SERIALIZER(AJPlayer) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define JBall_Source_JBall_JPlayer_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAJPlayer(); \
	friend JBALL_API class UClass* Z_Construct_UClass_AJPlayer(); \
public: \
	DECLARE_CLASS(AJPlayer, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/JBall"), NO_API) \
	DECLARE_SERIALIZER(AJPlayer) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define JBall_Source_JBall_JPlayer_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AJPlayer(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AJPlayer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AJPlayer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AJPlayer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AJPlayer(AJPlayer&&); \
	NO_API AJPlayer(const AJPlayer&); \
public:


#define JBall_Source_JBall_JPlayer_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AJPlayer(AJPlayer&&); \
	NO_API AJPlayer(const AJPlayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AJPlayer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AJPlayer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AJPlayer)


#define JBall_Source_JBall_JPlayer_h_15_PRIVATE_PROPERTY_OFFSET
#define JBall_Source_JBall_JPlayer_h_12_PROLOG
#define JBall_Source_JBall_JPlayer_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	JBall_Source_JBall_JPlayer_h_15_PRIVATE_PROPERTY_OFFSET \
	JBall_Source_JBall_JPlayer_h_15_RPC_WRAPPERS \
	JBall_Source_JBall_JPlayer_h_15_INCLASS \
	JBall_Source_JBall_JPlayer_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define JBall_Source_JBall_JPlayer_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	JBall_Source_JBall_JPlayer_h_15_PRIVATE_PROPERTY_OFFSET \
	JBall_Source_JBall_JPlayer_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	JBall_Source_JBall_JPlayer_h_15_INCLASS_NO_PURE_DECLS \
	JBall_Source_JBall_JPlayer_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID JBall_Source_JBall_JPlayer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
