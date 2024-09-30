// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SOptionWidget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OPCUA_UNREAL_CLIENT_SOptionWidget_generated_h
#error "SOptionWidget.generated.h already included, missing '#pragma once' in SOptionWidget.h"
#endif
#define OPCUA_UNREAL_CLIENT_SOptionWidget_generated_h

#define FID_Work_Project_Source_Opcua_Unreal_Client_SOptionWidget_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnScreenModeChanged); \
	DECLARE_FUNCTION(execOnClickedclose); \
	DECLARE_FUNCTION(execOnResolutionChanged);


#define FID_Work_Project_Source_Opcua_Unreal_Client_SOptionWidget_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSOptionWidget(); \
	friend struct Z_Construct_UClass_USOptionWidget_Statics; \
public: \
	DECLARE_CLASS(USOptionWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Opcua_Unreal_Client"), NO_API) \
	DECLARE_SERIALIZER(USOptionWidget)


#define FID_Work_Project_Source_Opcua_Unreal_Client_SOptionWidget_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USOptionWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USOptionWidget(USOptionWidget&&); \
	USOptionWidget(const USOptionWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USOptionWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USOptionWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USOptionWidget) \
	NO_API virtual ~USOptionWidget();


#define FID_Work_Project_Source_Opcua_Unreal_Client_SOptionWidget_h_13_PROLOG
#define FID_Work_Project_Source_Opcua_Unreal_Client_SOptionWidget_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Work_Project_Source_Opcua_Unreal_Client_SOptionWidget_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Work_Project_Source_Opcua_Unreal_Client_SOptionWidget_h_16_INCLASS_NO_PURE_DECLS \
	FID_Work_Project_Source_Opcua_Unreal_Client_SOptionWidget_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OPCUA_UNREAL_CLIENT_API UClass* StaticClass<class USOptionWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Work_Project_Source_Opcua_Unreal_Client_SOptionWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
