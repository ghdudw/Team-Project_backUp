// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Opcua_Unreal_Client/SMainWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSMainWidget() {}

// Begin Cross Module References
OPCUA_UNREAL_CLIENT_API UClass* Z_Construct_UClass_USMainWidget();
OPCUA_UNREAL_CLIENT_API UClass* Z_Construct_UClass_USMainWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
UMG_API UClass* Z_Construct_UClass_UListView_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_Opcua_Unreal_Client();
// End Cross Module References

// Begin Class USMainWidget Function GetCurrentDateTime
struct Z_Construct_UFunction_USMainWidget_GetCurrentDateTime_Statics
{
	struct SMainWidget_eventGetCurrentDateTime_Parms
	{
		FText ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DateTime" },
		{ "ModuleRelativePath", "SMainWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_USMainWidget_GetCurrentDateTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SMainWidget_eventGetCurrentDateTime_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMainWidget_GetCurrentDateTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMainWidget_GetCurrentDateTime_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USMainWidget_GetCurrentDateTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMainWidget_GetCurrentDateTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMainWidget, nullptr, "GetCurrentDateTime", nullptr, nullptr, Z_Construct_UFunction_USMainWidget_GetCurrentDateTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMainWidget_GetCurrentDateTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_USMainWidget_GetCurrentDateTime_Statics::SMainWidget_eventGetCurrentDateTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USMainWidget_GetCurrentDateTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_USMainWidget_GetCurrentDateTime_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USMainWidget_GetCurrentDateTime_Statics::SMainWidget_eventGetCurrentDateTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USMainWidget_GetCurrentDateTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USMainWidget_GetCurrentDateTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USMainWidget::execGetCurrentDateTime)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FText*)Z_Param__Result=P_THIS->GetCurrentDateTime();
	P_NATIVE_END;
}
// End Class USMainWidget Function GetCurrentDateTime

// Begin Class USMainWidget Function OnClickedOff
struct Z_Construct_UFunction_USMainWidget_OnClickedOff_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SMainWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMainWidget_OnClickedOff_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMainWidget, nullptr, "OnClickedOff", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USMainWidget_OnClickedOff_Statics::Function_MetaDataParams), Z_Construct_UFunction_USMainWidget_OnClickedOff_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_USMainWidget_OnClickedOff()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USMainWidget_OnClickedOff_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USMainWidget::execOnClickedOff)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnClickedOff();
	P_NATIVE_END;
}
// End Class USMainWidget Function OnClickedOff

// Begin Class USMainWidget Function OnClickedOption
struct Z_Construct_UFunction_USMainWidget_OnClickedOption_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SMainWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USMainWidget_OnClickedOption_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMainWidget, nullptr, "OnClickedOption", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USMainWidget_OnClickedOption_Statics::Function_MetaDataParams), Z_Construct_UFunction_USMainWidget_OnClickedOption_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_USMainWidget_OnClickedOption()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USMainWidget_OnClickedOption_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USMainWidget::execOnClickedOption)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnClickedOption();
	P_NATIVE_END;
}
// End Class USMainWidget Function OnClickedOption

// Begin Class USMainWidget
void USMainWidget::StaticRegisterNativesUSMainWidget()
{
	UClass* Class = USMainWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetCurrentDateTime", &USMainWidget::execGetCurrentDateTime },
		{ "OnClickedOff", &USMainWidget::execOnClickedOff },
		{ "OnClickedOption", &USMainWidget::execOnClickedOption },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USMainWidget);
UClass* Z_Construct_UClass_USMainWidget_NoRegister()
{
	return USMainWidget::StaticClass();
}
struct Z_Construct_UClass_USMainWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "SMainWidget.h" },
		{ "ModuleRelativePath", "SMainWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_home_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SMainWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BP_ShutDownWidget_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SMainWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BP_optionwidget_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SMainWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Off_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SMainWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_option_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SMainWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextBlock_Timer_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SMainWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ListView_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "SMainWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SMainWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_home;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BP_ShutDownWidget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BP_optionwidget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Off;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_option;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TextBlock_Timer;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ListView;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USMainWidget_GetCurrentDateTime, "GetCurrentDateTime" }, // 3606448820
		{ &Z_Construct_UFunction_USMainWidget_OnClickedOff, "OnClickedOff" }, // 1280577828
		{ &Z_Construct_UFunction_USMainWidget_OnClickedOption, "OnClickedOption" }, // 859851555
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USMainWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USMainWidget_Statics::NewProp_home = { "home", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USMainWidget, home), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_home_MetaData), NewProp_home_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USMainWidget_Statics::NewProp_BP_ShutDownWidget = { "BP_ShutDownWidget", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USMainWidget, BP_ShutDownWidget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BP_ShutDownWidget_MetaData), NewProp_BP_ShutDownWidget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USMainWidget_Statics::NewProp_BP_optionwidget = { "BP_optionwidget", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USMainWidget, BP_optionwidget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BP_optionwidget_MetaData), NewProp_BP_optionwidget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USMainWidget_Statics::NewProp_Off = { "Off", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USMainWidget, Off), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Off_MetaData), NewProp_Off_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USMainWidget_Statics::NewProp_option = { "option", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USMainWidget, option), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_option_MetaData), NewProp_option_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USMainWidget_Statics::NewProp_TextBlock_Timer = { "TextBlock_Timer", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USMainWidget, TextBlock_Timer), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextBlock_Timer_MetaData), NewProp_TextBlock_Timer_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USMainWidget_Statics::NewProp_ListView = { "ListView", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USMainWidget, ListView), Z_Construct_UClass_UListView_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ListView_MetaData), NewProp_ListView_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USMainWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMainWidget_Statics::NewProp_home,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMainWidget_Statics::NewProp_BP_ShutDownWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMainWidget_Statics::NewProp_BP_optionwidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMainWidget_Statics::NewProp_Off,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMainWidget_Statics::NewProp_option,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMainWidget_Statics::NewProp_TextBlock_Timer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMainWidget_Statics::NewProp_ListView,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USMainWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USMainWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_Opcua_Unreal_Client,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USMainWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USMainWidget_Statics::ClassParams = {
	&USMainWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USMainWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USMainWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USMainWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_USMainWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USMainWidget()
{
	if (!Z_Registration_Info_UClass_USMainWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USMainWidget.OuterSingleton, Z_Construct_UClass_USMainWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USMainWidget.OuterSingleton;
}
template<> OPCUA_UNREAL_CLIENT_API UClass* StaticClass<USMainWidget>()
{
	return USMainWidget::StaticClass();
}
USMainWidget::USMainWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USMainWidget);
USMainWidget::~USMainWidget() {}
// End Class USMainWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_Work_Project_Source_Opcua_Unreal_Client_SMainWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USMainWidget, USMainWidget::StaticClass, TEXT("USMainWidget"), &Z_Registration_Info_UClass_USMainWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USMainWidget), 4157840243U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Work_Project_Source_Opcua_Unreal_Client_SMainWidget_h_474017769(TEXT("/Script/Opcua_Unreal_Client"),
	Z_CompiledInDeferFile_FID_Work_Project_Source_Opcua_Unreal_Client_SMainWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Work_Project_Source_Opcua_Unreal_Client_SMainWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
