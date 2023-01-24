// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APawn;
struct FVector;
enum class EAIState : uint8;
#ifdef FPSGAME_FPSAIGaurd_generated_h
#error "FPSAIGaurd.generated.h already included, missing '#pragma once' in FPSAIGaurd.h"
#endif
#define FPSGAME_FPSAIGaurd_generated_h

#define SimpleFPSTemplate_master_4_23_Source_FPSGame_Public_FPSAIGaurd_h_25_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_GaurdState) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_GaurdState(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResetOrientation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ResetOrientation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnNoiseHeard) \
	{ \
		P_GET_OBJECT(APawn,Z_Param_NoiseInstigator); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Location); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Volume); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnNoiseHeard(Z_Param_NoiseInstigator,Z_Param_Out_Location,Z_Param_Volume); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnPawnSeen) \
	{ \
		P_GET_OBJECT(APawn,Z_Param_SeenPawn); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnPawnSeen(Z_Param_SeenPawn); \
		P_NATIVE_END; \
	}


#define SimpleFPSTemplate_master_4_23_Source_FPSGame_Public_FPSAIGaurd_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_GaurdState) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_GaurdState(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResetOrientation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ResetOrientation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnNoiseHeard) \
	{ \
		P_GET_OBJECT(APawn,Z_Param_NoiseInstigator); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Location); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Volume); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnNoiseHeard(Z_Param_NoiseInstigator,Z_Param_Out_Location,Z_Param_Volume); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnPawnSeen) \
	{ \
		P_GET_OBJECT(APawn,Z_Param_SeenPawn); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnPawnSeen(Z_Param_SeenPawn); \
		P_NATIVE_END; \
	}


#define SimpleFPSTemplate_master_4_23_Source_FPSGame_Public_FPSAIGaurd_h_25_EVENT_PARMS \
	struct FPSAIGaurd_eventOnStateChanged_Parms \
	{ \
		EAIState NewState; \
	};


#define SimpleFPSTemplate_master_4_23_Source_FPSGame_Public_FPSAIGaurd_h_25_CALLBACK_WRAPPERS
#define SimpleFPSTemplate_master_4_23_Source_FPSGame_Public_FPSAIGaurd_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFPSAIGaurd(); \
	friend struct Z_Construct_UClass_AFPSAIGaurd_Statics; \
public: \
	DECLARE_CLASS(AFPSAIGaurd, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FPSGame"), NO_API) \
	DECLARE_SERIALIZER(AFPSAIGaurd) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define SimpleFPSTemplate_master_4_23_Source_FPSGame_Public_FPSAIGaurd_h_25_INCLASS \
private: \
	static void StaticRegisterNativesAFPSAIGaurd(); \
	friend struct Z_Construct_UClass_AFPSAIGaurd_Statics; \
public: \
	DECLARE_CLASS(AFPSAIGaurd, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FPSGame"), NO_API) \
	DECLARE_SERIALIZER(AFPSAIGaurd) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define SimpleFPSTemplate_master_4_23_Source_FPSGame_Public_FPSAIGaurd_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFPSAIGaurd(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFPSAIGaurd) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSAIGaurd); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSAIGaurd); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPSAIGaurd(AFPSAIGaurd&&); \
	NO_API AFPSAIGaurd(const AFPSAIGaurd&); \
public:


#define SimpleFPSTemplate_master_4_23_Source_FPSGame_Public_FPSAIGaurd_h_25_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPSAIGaurd(AFPSAIGaurd&&); \
	NO_API AFPSAIGaurd(const AFPSAIGaurd&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSAIGaurd); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSAIGaurd); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFPSAIGaurd)


#define SimpleFPSTemplate_master_4_23_Source_FPSGame_Public_FPSAIGaurd_h_25_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PawnSensingComp() { return STRUCT_OFFSET(AFPSAIGaurd, PawnSensingComp); } \
	FORCEINLINE static uint32 __PPO__GaurdState() { return STRUCT_OFFSET(AFPSAIGaurd, GaurdState); }


#define SimpleFPSTemplate_master_4_23_Source_FPSGame_Public_FPSAIGaurd_h_22_PROLOG \
	SimpleFPSTemplate_master_4_23_Source_FPSGame_Public_FPSAIGaurd_h_25_EVENT_PARMS


#define SimpleFPSTemplate_master_4_23_Source_FPSGame_Public_FPSAIGaurd_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SimpleFPSTemplate_master_4_23_Source_FPSGame_Public_FPSAIGaurd_h_25_PRIVATE_PROPERTY_OFFSET \
	SimpleFPSTemplate_master_4_23_Source_FPSGame_Public_FPSAIGaurd_h_25_RPC_WRAPPERS \
	SimpleFPSTemplate_master_4_23_Source_FPSGame_Public_FPSAIGaurd_h_25_CALLBACK_WRAPPERS \
	SimpleFPSTemplate_master_4_23_Source_FPSGame_Public_FPSAIGaurd_h_25_INCLASS \
	SimpleFPSTemplate_master_4_23_Source_FPSGame_Public_FPSAIGaurd_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SimpleFPSTemplate_master_4_23_Source_FPSGame_Public_FPSAIGaurd_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SimpleFPSTemplate_master_4_23_Source_FPSGame_Public_FPSAIGaurd_h_25_PRIVATE_PROPERTY_OFFSET \
	SimpleFPSTemplate_master_4_23_Source_FPSGame_Public_FPSAIGaurd_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	SimpleFPSTemplate_master_4_23_Source_FPSGame_Public_FPSAIGaurd_h_25_CALLBACK_WRAPPERS \
	SimpleFPSTemplate_master_4_23_Source_FPSGame_Public_FPSAIGaurd_h_25_INCLASS_NO_PURE_DECLS \
	SimpleFPSTemplate_master_4_23_Source_FPSGame_Public_FPSAIGaurd_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPSGAME_API UClass* StaticClass<class AFPSAIGaurd>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SimpleFPSTemplate_master_4_23_Source_FPSGame_Public_FPSAIGaurd_h


#define FOREACH_ENUM_EAISTATE(op) \
	op(EAIState::Idle) \
	op(EAIState::Suspicious) \
	op(EAIState::Alerted) 

enum class EAIState : uint8;
template<> FPSGAME_API UEnum* StaticEnum<EAIState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
