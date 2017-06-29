// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "JBall.generated.dep.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCode1JBall() {}
#if USE_COMPILED_IN_NATIVES
// Cross Module References
	ENGINE_API class UClass* Z_Construct_UClass_AGameModeBase();
	ENGINE_API class UClass* Z_Construct_UClass_UCharacterMovementComponent();
	ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	COREUOBJECT_API class UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API class UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API class UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_AGameMode();

	JBALL_API class UClass* Z_Construct_UClass_AJBallGameModeBase_NoRegister();
	JBALL_API class UClass* Z_Construct_UClass_AJBallGameModeBase();
	JBALL_API class UClass* Z_Construct_UClass_UJMovementComponent_NoRegister();
	JBALL_API class UClass* Z_Construct_UClass_UJMovementComponent();
	JBALL_API class UFunction* Z_Construct_UFunction_AJPlayer_Catch();
	JBALL_API class UFunction* Z_Construct_UFunction_AJPlayer_DoubleJump();
	JBALL_API class UFunction* Z_Construct_UFunction_AJPlayer_LookUp();
	JBALL_API class UFunction* Z_Construct_UFunction_AJPlayer_MoveForward();
	JBALL_API class UFunction* Z_Construct_UFunction_AJPlayer_MoveRight();
	JBALL_API class UFunction* Z_Construct_UFunction_AJPlayer_OnHit();
	JBALL_API class UFunction* Z_Construct_UFunction_AJPlayer_OnStartJump();
	JBALL_API class UFunction* Z_Construct_UFunction_AJPlayer_OnStopJump();
	JBALL_API class UFunction* Z_Construct_UFunction_AJPlayer_Throw();
	JBALL_API class UFunction* Z_Construct_UFunction_AJPlayer_Turn();
	JBALL_API class UFunction* Z_Construct_UFunction_AJPlayer_Warp();
	JBALL_API class UClass* Z_Construct_UClass_AJPlayer_NoRegister();
	JBALL_API class UClass* Z_Construct_UClass_AJPlayer();
	JBALL_API class UClass* Z_Construct_UClass_ATestMode_NoRegister();
	JBALL_API class UClass* Z_Construct_UClass_ATestMode();
	JBALL_API class UPackage* Z_Construct_UPackage__Script_JBall();
	void AJBallGameModeBase::StaticRegisterNativesAJBallGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AJBallGameModeBase_NoRegister()
	{
		return AJBallGameModeBase::StaticClass();
	}
	UClass* Z_Construct_UClass_AJBallGameModeBase()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AGameModeBase();
			Z_Construct_UPackage__Script_JBall();
			OuterClass = AJBallGameModeBase::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900288;


				static TCppClassTypeInfo<TCppClassTypeTraits<AJBallGameModeBase> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("JBallGameModeBase.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("JBallGameModeBase.h"));
				MetaData->SetValue(OuterClass, TEXT("ShowCategories"), TEXT("Input|MouseInput Input|TouchInput"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AJBallGameModeBase, 4231494562);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AJBallGameModeBase(Z_Construct_UClass_AJBallGameModeBase, &AJBallGameModeBase::StaticClass, TEXT("/Script/JBall"), TEXT("AJBallGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AJBallGameModeBase);
	void UJMovementComponent::StaticRegisterNativesUJMovementComponent()
	{
	}
	UClass* Z_Construct_UClass_UJMovementComponent_NoRegister()
	{
		return UJMovementComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UJMovementComponent()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UCharacterMovementComponent();
			Z_Construct_UPackage__Script_JBall();
			OuterClass = UJMovementComponent::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20B00084;


				OuterClass->ClassConfigName = FName(TEXT("Engine"));
				static TCppClassTypeInfo<TCppClassTypeTraits<UJMovementComponent> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("JMovementComponent.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("JMovementComponent.h"));
				MetaData->SetValue(OuterClass, TEXT("ObjectInitializerConstructorDeclared"), TEXT(""));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UJMovementComponent, 1915057732);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UJMovementComponent(Z_Construct_UClass_UJMovementComponent, &UJMovementComponent::StaticClass, TEXT("/Script/JBall"), TEXT("UJMovementComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UJMovementComponent);
	void AJPlayer::StaticRegisterNativesAJPlayer()
	{
		UClass* Class = AJPlayer::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "Catch", (Native)&AJPlayer::execCatch },
			{ "DoubleJump", (Native)&AJPlayer::execDoubleJump },
			{ "LookUp", (Native)&AJPlayer::execLookUp },
			{ "MoveForward", (Native)&AJPlayer::execMoveForward },
			{ "MoveRight", (Native)&AJPlayer::execMoveRight },
			{ "OnHit", (Native)&AJPlayer::execOnHit },
			{ "OnStartJump", (Native)&AJPlayer::execOnStartJump },
			{ "OnStopJump", (Native)&AJPlayer::execOnStopJump },
			{ "Throw", (Native)&AJPlayer::execThrow },
			{ "Turn", (Native)&AJPlayer::execTurn },
			{ "Warp", (Native)&AJPlayer::execWarp },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, 11);
	}
	UFunction* Z_Construct_UFunction_AJPlayer_Catch()
	{
		UObject* Outer=Z_Construct_UClass_AJPlayer();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("Catch"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x00020401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("JPlayer.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AJPlayer_DoubleJump()
	{
		UObject* Outer=Z_Construct_UClass_AJPlayer();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("DoubleJump"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x00020401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("JPlayer.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AJPlayer_LookUp()
	{
		struct JPlayer_eventLookUp_Parms
		{
			float val;
		};
		UObject* Outer=Z_Construct_UClass_AJPlayer();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("LookUp"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x00020401, 65535, sizeof(JPlayer_eventLookUp_Parms));
			UProperty* NewProp_val = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("val"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(val, JPlayer_eventLookUp_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("JPlayer.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AJPlayer_MoveForward()
	{
		struct JPlayer_eventMoveForward_Parms
		{
			float val;
		};
		UObject* Outer=Z_Construct_UClass_AJPlayer();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("MoveForward"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x00020401, 65535, sizeof(JPlayer_eventMoveForward_Parms));
			UProperty* NewProp_val = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("val"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(val, JPlayer_eventMoveForward_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("JPlayer.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AJPlayer_MoveRight()
	{
		struct JPlayer_eventMoveRight_Parms
		{
			float val;
		};
		UObject* Outer=Z_Construct_UClass_AJPlayer();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("MoveRight"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x00020401, 65535, sizeof(JPlayer_eventMoveRight_Parms));
			UProperty* NewProp_val = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("val"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(val, JPlayer_eventMoveRight_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("JPlayer.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AJPlayer_OnHit()
	{
		struct JPlayer_eventOnHit_Parms
		{
			AActor* otherActor;
			UPrimitiveComponent* otherComp;
			FVector normalImpulse;
			FHitResult hit;
		};
		UObject* Outer=Z_Construct_UClass_AJPlayer();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("OnHit"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x00C20400, 65535, sizeof(JPlayer_eventOnHit_Parms));
			UProperty* NewProp_hit = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("hit"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(hit, JPlayer_eventOnHit_Parms), 0x0010008008000182, Z_Construct_UScriptStruct_FHitResult());
			UProperty* NewProp_normalImpulse = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("normalImpulse"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(normalImpulse, JPlayer_eventOnHit_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_otherComp = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("otherComp"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(otherComp, JPlayer_eventOnHit_Parms), 0x0010000000080080, Z_Construct_UClass_UPrimitiveComponent_NoRegister());
			UProperty* NewProp_otherActor = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("otherActor"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(otherActor, JPlayer_eventOnHit_Parms), 0x0010000000000080, Z_Construct_UClass_AActor_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("JPlayer.h"));
			MetaData->SetValue(NewProp_hit, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_otherComp, TEXT("EditInline"), TEXT("true"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AJPlayer_OnStartJump()
	{
		UObject* Outer=Z_Construct_UClass_AJPlayer();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("OnStartJump"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x00020401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("JPlayer.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AJPlayer_OnStopJump()
	{
		UObject* Outer=Z_Construct_UClass_AJPlayer();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("OnStopJump"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x00020401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("JPlayer.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AJPlayer_Throw()
	{
		UObject* Outer=Z_Construct_UClass_AJPlayer();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("Throw"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x00020401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("JPlayer.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AJPlayer_Turn()
	{
		struct JPlayer_eventTurn_Parms
		{
			float val;
		};
		UObject* Outer=Z_Construct_UClass_AJPlayer();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("Turn"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x00020401, 65535, sizeof(JPlayer_eventTurn_Parms));
			UProperty* NewProp_val = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("val"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(val, JPlayer_eventTurn_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("JPlayer.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AJPlayer_Warp()
	{
		UObject* Outer=Z_Construct_UClass_AJPlayer();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("Warp"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x00020401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("JPlayer.h"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AJPlayer_NoRegister()
	{
		return AJPlayer::StaticClass();
	}
	UClass* Z_Construct_UClass_AJPlayer()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_ACharacter();
			Z_Construct_UPackage__Script_JBall();
			OuterClass = AJPlayer::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900080;

				OuterClass->LinkChild(Z_Construct_UFunction_AJPlayer_Catch());
				OuterClass->LinkChild(Z_Construct_UFunction_AJPlayer_DoubleJump());
				OuterClass->LinkChild(Z_Construct_UFunction_AJPlayer_LookUp());
				OuterClass->LinkChild(Z_Construct_UFunction_AJPlayer_MoveForward());
				OuterClass->LinkChild(Z_Construct_UFunction_AJPlayer_MoveRight());
				OuterClass->LinkChild(Z_Construct_UFunction_AJPlayer_OnHit());
				OuterClass->LinkChild(Z_Construct_UFunction_AJPlayer_OnStartJump());
				OuterClass->LinkChild(Z_Construct_UFunction_AJPlayer_OnStopJump());
				OuterClass->LinkChild(Z_Construct_UFunction_AJPlayer_Throw());
				OuterClass->LinkChild(Z_Construct_UFunction_AJPlayer_Turn());
				OuterClass->LinkChild(Z_Construct_UFunction_AJPlayer_Warp());

PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_CharacterMesh = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CharacterMesh"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(CharacterMesh, AJPlayer), 0x0010000000080009, Z_Construct_UClass_USkeletalMeshComponent_NoRegister());
				UProperty* NewProp_WarpMarker = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("WarpMarker"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(WarpMarker, AJPlayer), 0x0010000000080009, Z_Construct_UClass_UParticleSystemComponent_NoRegister());
				UProperty* NewProp_WarpHandEffect = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("WarpHandEffect"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(WarpHandEffect, AJPlayer), 0x0010000000080009, Z_Construct_UClass_UParticleSystemComponent_NoRegister());
				UProperty* NewProp_WarpPoint = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("WarpPoint"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(WarpPoint, AJPlayer), 0x0010000000000001, Z_Construct_UScriptStruct_FVector());
				UProperty* NewProp_WarpSpeed = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("WarpSpeed"), RF_Public|RF_Transient|RF_MarkAsNative) UUnsizedIntProperty(CPP_PROPERTY_BASE(WarpSpeed, AJPlayer), 0x0010000000000001);
				UProperty* NewProp_WarpDistance = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("WarpDistance"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(WarpDistance, AJPlayer), 0x0010000000000001);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AJPlayer_Catch(), "Catch"); // 1810872242
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AJPlayer_DoubleJump(), "DoubleJump"); // 1818013131
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AJPlayer_LookUp(), "LookUp"); // 3907787890
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AJPlayer_MoveForward(), "MoveForward"); // 2250432038
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AJPlayer_MoveRight(), "MoveRight"); // 3909014366
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AJPlayer_OnHit(), "OnHit"); // 2689493592
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AJPlayer_OnStartJump(), "OnStartJump"); // 661910411
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AJPlayer_OnStopJump(), "OnStopJump"); // 1856149556
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AJPlayer_Throw(), "Throw"); // 3988886722
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AJPlayer_Turn(), "Turn"); // 1161790189
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AJPlayer_Warp(), "Warp"); // 292606593
				static TCppClassTypeInfo<TCppClassTypeTraits<AJPlayer> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Navigation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("JPlayer.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("JPlayer.h"));
				MetaData->SetValue(NewProp_CharacterMesh, TEXT("Category"), TEXT("JPlayer"));
				MetaData->SetValue(NewProp_CharacterMesh, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_CharacterMesh, TEXT("ModuleRelativePath"), TEXT("JPlayer.h"));
				MetaData->SetValue(NewProp_WarpMarker, TEXT("Category"), TEXT("JPlayer"));
				MetaData->SetValue(NewProp_WarpMarker, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_WarpMarker, TEXT("ModuleRelativePath"), TEXT("JPlayer.h"));
				MetaData->SetValue(NewProp_WarpHandEffect, TEXT("Category"), TEXT("JPlayer"));
				MetaData->SetValue(NewProp_WarpHandEffect, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_WarpHandEffect, TEXT("ModuleRelativePath"), TEXT("JPlayer.h"));
				MetaData->SetValue(NewProp_WarpPoint, TEXT("Category"), TEXT("JPlayer"));
				MetaData->SetValue(NewProp_WarpPoint, TEXT("ModuleRelativePath"), TEXT("JPlayer.h"));
				MetaData->SetValue(NewProp_WarpSpeed, TEXT("Category"), TEXT("JPlayer"));
				MetaData->SetValue(NewProp_WarpSpeed, TEXT("ModuleRelativePath"), TEXT("JPlayer.h"));
				MetaData->SetValue(NewProp_WarpDistance, TEXT("Category"), TEXT("JPlayer"));
				MetaData->SetValue(NewProp_WarpDistance, TEXT("ModuleRelativePath"), TEXT("JPlayer.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AJPlayer, 2388552300);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AJPlayer(Z_Construct_UClass_AJPlayer, &AJPlayer::StaticClass, TEXT("/Script/JBall"), TEXT("AJPlayer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AJPlayer);
	void ATestMode::StaticRegisterNativesATestMode()
	{
	}
	UClass* Z_Construct_UClass_ATestMode_NoRegister()
	{
		return ATestMode::StaticClass();
	}
	UClass* Z_Construct_UClass_ATestMode()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AGameMode();
			Z_Construct_UPackage__Script_JBall();
			OuterClass = ATestMode::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x2090028C;


				OuterClass->ClassConfigName = FName(TEXT("Game"));
				static TCppClassTypeInfo<TCppClassTypeTraits<ATestMode> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("TestMode.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("TestMode.h"));
				MetaData->SetValue(OuterClass, TEXT("ObjectInitializerConstructorDeclared"), TEXT(""));
				MetaData->SetValue(OuterClass, TEXT("ShowCategories"), TEXT("Input|MouseInput Input|TouchInput"));
				MetaData->SetValue(OuterClass, TEXT("ToolTip"), TEXT("TestMode\n*\n* Mode for testing stuff"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATestMode, 2430624277);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATestMode(Z_Construct_UClass_ATestMode, &ATestMode::StaticClass, TEXT("/Script/JBall"), TEXT("ATestMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATestMode);
	UPackage* Z_Construct_UPackage__Script_JBall()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			ReturnPackage = CastChecked<UPackage>(StaticFindObjectFast(UPackage::StaticClass(), nullptr, FName(TEXT("/Script/JBall")), false, false));
			ReturnPackage->SetPackageFlags(PKG_CompiledIn | 0x00000000);
			FGuid Guid;
			Guid.A = 0xFA255359;
			Guid.B = 0xBDFCE3E0;
			Guid.C = 0x00000000;
			Guid.D = 0x00000000;
			ReturnPackage->SetGuid(Guid);

		}
		return ReturnPackage;
	}
#endif
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
