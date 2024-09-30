// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SMainWidget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OPCUA_UNREAL_CLIENT_SMainWidget_generated_h
#error "SMainWidget.generated.h already included, missing '#pragma once' in SMainWidget.h"
#endif
#define OPCUA_UNREAL_CLIENT_SMainWidget_generated_h

#define FID_Work_Project_Source_Opcua_Unreal_Client_SMainWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetCurrentDateTime); \
	DECLARE_FUNCTION(execOnClickedOption); \
	DECLARE_FUNCTION(execOnClickedOff);


#define FID_Work_Project_Source_Opcua_Unreal_Client_SMainWidget_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSMainWidget(); \
	friend struct Z_Construct_UClass_USMainWidget_Statics; \
public: \
	DECLARE_CLASS(USMainWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Opcua_Unreal_Client"), NO_API) \
	DECLARE_SERIALIZER(USMainWidget)


#define FID_Work_Project_Source_Opcua_Unreal_Client_SMainWidget_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USMainWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USMainWidget(USMainWidget&&); \
	USMainWidget(const USMainWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USMainWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USMainWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USMainWidget) \
	NO_API virtual ~USMainWidget();


#define FID_Work_Project_Source_Opcua_Unreal_Client_SMainWidget_h_12_PROLOG
#define FID_Work_Project_Source_Opcua_Unreal_Client_SMainWidget_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Work_Project_Source_Opcua_Unreal_Client_SMainWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Work_Project_Source_Opcua_Unreal_Client_SMainWidget_h_15_INCLASS_NO_PURE_DECLS \
	FID_Work_Project_Source_Opcua_Unreal_Client_SMainWidget_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OPCUA_UNREAL_CLIENT_API UClass* StaticClass<class USMainWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Work_Project_Source_Opcua_Unreal_Client_SMainWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
