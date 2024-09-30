// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Opcua_Unreal_Client/SOptionWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSOptionWidget() {}

// Begin Cross Module References
OPCUA_UNREAL_CLIENT_API UClass* Z_Construct_UClass_USOptionWidget();
OPCUA_UNREAL_CLIENT_API UClass* Z_Construct_UClass_USOptionWidget_NoRegister();
SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_ESelectInfo();
UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
UMG_API UClass* Z_Construct_UClass_UComboBoxString_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_Opcua_Unreal_Client();
// End Cross Module References

// Begin Class USOptionWidget Function OnClickedclose
struct Z_Construct_UFunction_USOptionWidget_OnClickedclose_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SOptionWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOptionWidget_OnClickedclose_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USOptionWidget, nullptr, "OnClickedclose", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOptionWidget_OnClickedclose_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOptionWidget_OnClickedclose_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_USOptionWidget_OnClickedclose()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOptionWidget_OnClickedclose_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOptionWidget::execOnClickedclose)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnClickedclose();
	P_NATIVE_END;
}
// End Class USOptionWidget Function OnClickedclose

// Begin Class USOptionWidget Function OnResolutionChanged
struct Z_Construct_UFunction_USOptionWidget_OnResolutionChanged_Statics
{
	struct SOptionWidget_eventOnResolutionChanged_Parms
	{
		FString SelectedItem;
		TEnumAsByte<ESelectInfo::Type> SelectionType;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SOptionWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_SelectedItem;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SelectionType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USOptionWidget_OnResolutionChanged_Statics::NewProp_SelectedItem = { "SelectedItem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOptionWidget_eventOnResolutionChanged_Parms, SelectedItem), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USOptionWidget_OnResolutionChanged_Statics::NewProp_SelectionType = { "SelectionType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOptionWidget_eventOnResolutionChanged_Parms, SelectionType), Z_Construct_UEnum_SlateCore_ESelectInfo, METADATA_PARAMS(0, nullptr) }; // 4040429206
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOptionWidget_OnResolutionChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOptionWidget_OnResolutionChanged_Statics::NewProp_SelectedItem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOptionWidget_OnResolutionChanged_Statics::NewProp_SelectionType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOptionWidget_OnResolutionChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOptionWidget_OnResolutionChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USOptionWidget, nullptr, "OnResolutionChanged", nullptr, nullptr, Z_Construct_UFunction_USOptionWidget_OnResolutionChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USOptionWidget_OnResolutionChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_USOptionWidget_OnResolutionChanged_Statics::SOptionWidget_eventOnResolutionChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOptionWidget_OnResolutionChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOptionWidget_OnResolutionChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USOptionWidget_OnResolutionChanged_Statics::SOptionWidget_eventOnResolutionChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOptionWidget_OnResolutionChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOptionWidget_OnResolutionChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOptionWidget::execOnResolutionChanged)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_SelectedItem);
	P_GET_PROPERTY(FByteProperty,Z_Param_SelectionType);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnResolutionChanged(Z_Param_SelectedItem,ESelectInfo::Type(Z_Param_SelectionType));
	P_NATIVE_END;
}
// End Class USOptionWidget Function OnResolutionChanged

// Begin Class USOptionWidget Function OnScreenModeChanged
struct Z_Construct_UFunction_USOptionWidget_OnScreenModeChanged_Statics
{
	struct SOptionWidget_eventOnScreenModeChanged_Parms
	{
		FString SelectedItem;
		TEnumAsByte<ESelectInfo::Type> SelectionType;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SOptionWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_SelectedItem;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SelectionType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USOptionWidget_OnScreenModeChanged_Statics::NewProp_SelectedItem = { "SelectedItem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOptionWidget_eventOnScreenModeChanged_Parms, SelectedItem), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USOptionWidget_OnScreenModeChanged_Statics::NewProp_SelectionType = { "SelectionType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOptionWidget_eventOnScreenModeChanged_Parms, SelectionType), Z_Construct_UEnum_SlateCore_ESelectInfo, METADATA_PARAMS(0, nullptr) }; // 4040429206
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOptionWidget_OnScreenModeChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOptionWidget_OnScreenModeChanged_Statics::NewProp_SelectedItem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOptionWidget_OnScreenModeChanged_Statics::NewProp_SelectionType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOptionWidget_OnScreenModeChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOptionWidget_OnScreenModeChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USOptionWidget, nullptr, "OnScreenModeChanged", nullptr, nullptr, Z_Construct_UFunction_USOptionWidget_OnScreenModeChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USOptionWidget_OnScreenModeChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_USOptionWidget_OnScreenModeChanged_Statics::SOptionWidget_eventOnScreenModeChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOptionWidget_OnScreenModeChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOptionWidget_OnScreenModeChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USOptionWidget_OnScreenModeChanged_Statics::SOptionWidget_eventOnScreenModeChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOptionWidget_OnScreenModeChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOptionWidget_OnScreenModeChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOptionWidget::execOnScreenModeChanged)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_SelectedItem);
	P_GET_PROPERTY(FByteProperty,Z_Param_SelectionType);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnScreenModeChanged(Z_Param_SelectedItem,ESelectInfo::Type(Z_Param_SelectionType));
	P_NATIVE_END;
}
// End Class USOptionWidget Function OnScreenModeChanged

// Begin Class USOptionWidget
void USOptionWidget::StaticRegisterNativesUSOptionWidget()
{
	UClass* Class = USOptionWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnClickedclose", &USOptionWidget::execOnClickedclose },
		{ "OnResolutionChanged", &USOptionWidget::execOnResolutionChanged },
		{ "OnScreenModeChanged", &USOptionWidget::execOnScreenModeChanged },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USOptionWidget);
UClass* Z_Construct_UClass_USOptionWidget_NoRegister()
{
	return USOptionWidget::StaticClass();
}
struct Z_Construct_UClass_USOptionWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "SOptionWidget.h" },
		{ "ModuleRelativePath", "SOptionWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Button_close_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SOptionWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComboBox_Resolution_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SOptionWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComboBox_ScreenMode_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SOptionWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Button_close;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ComboBox_Resolution;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ComboBox_ScreenMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USOptionWidget_OnClickedclose, "OnClickedclose" }, // 2854420323
		{ &Z_Construct_UFunction_USOptionWidget_OnResolutionChanged, "OnResolutionChanged" }, // 201040855
		{ &Z_Construct_UFunction_USOptionWidget_OnScreenModeChanged, "OnScreenModeChanged" }, // 2458036678
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USOptionWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USOptionWidget_Statics::NewProp_Button_close = { "Button_close", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOptionWidget, Button_close), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Button_close_MetaData), NewProp_Button_close_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USOptionWidget_Statics::NewProp_ComboBox_Resolution = { "ComboBox_Resolution", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOptionWidget, ComboBox_Resolution), Z_Construct_UClass_UComboBoxString_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComboBox_Resolution_MetaData), NewProp_ComboBox_Resolution_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USOptionWidget_Statics::NewProp_ComboBox_ScreenMode = { "ComboBox_ScreenMode", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOptionWidget, ComboBox_ScreenMode), Z_Construct_UClass_UComboBoxString_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComboBox_ScreenMode_MetaData), NewProp_ComboBox_ScreenMode_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USOptionWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOptionWidget_Statics::NewProp_Button_close,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOptionWidget_Statics::NewProp_ComboBox_Resolution,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOptionWidget_Statics::NewProp_ComboBox_ScreenMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USOptionWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USOptionWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_Opcua_Unreal_Client,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USOptionWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USOptionWidget_Statics::ClassParams = {
	&USOptionWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USOptionWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USOptionWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USOptionWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_USOptionWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USOptionWidget()
{
	if (!Z_Registration_Info_UClass_USOptionWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USOptionWidget.OuterSingleton, Z_Construct_UClass_USOptionWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USOptionWidget.OuterSingleton;
}
template<> OPCUA_UNREAL_CLIENT_API UClass* StaticClass<USOptionWidget>()
{
	return USOptionWidget::StaticClass();
}
USOptionWidget::USOptionWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USOptionWidget);
USOptionWidget::~USOptionWidget() {}
// End Class USOptionWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_Work_Project_Source_Opcua_Unreal_Client_SOptionWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USOptionWidget, USOptionWidget::StaticClass, TEXT("USOptionWidget"), &Z_Registration_Info_UClass_USOptionWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USOptionWidget), 956056672U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Work_Project_Source_Opcua_Unreal_Client_SOptionWidget_h_3722466347(TEXT("/Script/Opcua_Unreal_Client"),
	Z_CompiledInDeferFile_FID_Work_Project_Source_Opcua_Unreal_Client_SOptionWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Work_Project_Source_Opcua_Unreal_Client_SOptionWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
