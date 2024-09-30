// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MyListView.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OPCUA_UNREAL_CLIENT_MyListView_generated_h
#error "MyListView.generated.h already included, missing '#pragma once' in MyListView.h"
#endif
#define OPCUA_UNREAL_CLIENT_MyListView_generated_h

#define FID_Work_Project_Source_Opcua_Unreal_Client_MyListView_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMyListView(); \
	friend struct Z_Construct_UClass_UMyListView_Statics; \
public: \
	DECLARE_CLASS(UMyListView, UListView, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Opcua_Unreal_Client"), NO_API) \
	DECLARE_SERIALIZER(UMyListView)


#define FID_Work_Project_Source_Opcua_Unreal_Client_MyListView_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMyListView(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMyListView(UMyListView&&); \
	UMyListView(const UMyListView&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyListView); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyListView); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMyListView) \
	NO_API virtual ~UMyListView();


#define FID_Work_Project_Source_Opcua_Unreal_Client_MyListView_h_12_PROLOG
#define FID_Work_Project_Source_Opcua_Unreal_Client_MyListView_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Work_Project_Source_Opcua_Unreal_Client_MyListView_h_15_INCLASS_NO_PURE_DECLS \
	FID_Work_Project_Source_Opcua_Unreal_Client_MyListView_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OPCUA_UNREAL_CLIENT_API UClass* StaticClass<class UMyListView>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Work_Project_Source_Opcua_Unreal_Client_MyListView_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
