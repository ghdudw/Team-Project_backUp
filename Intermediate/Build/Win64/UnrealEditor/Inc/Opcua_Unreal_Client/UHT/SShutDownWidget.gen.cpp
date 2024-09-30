// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Opcua_Unreal_Client/SShutDownWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSShutDownWidget() {}

// Begin Cross Module References
OPCUA_UNREAL_CLIENT_API UClass* Z_Construct_UClass_USShutDownWidget();
OPCUA_UNREAL_CLIENT_API UClass* Z_Construct_UClass_USShutDownWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_Opcua_Unreal_Client();
// End Cross Module References

// Begin Class USShutDownWidget Function OnClickedNo
struct Z_Construct_UFunction_USShutDownWidget_OnClickedNo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SShutDownWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USShutDownWidget_OnClickedNo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USShutDownWidget, nullptr, "OnClickedNo", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USShutDownWidget_OnClickedNo_Statics::Function_MetaDataParams), Z_Construct_UFunction_USShutDownWidget_OnClickedNo_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_USShutDownWidget_OnClickedNo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USShutDownWidget_OnClickedNo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USShutDownWidget::execOnClickedNo)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnClickedNo();
	P_NATIVE_END;
}
// End Class USShutDownWidget Function OnClickedNo

// Begin Class USShutDownWidget Function OnClickedYes
struct Z_Construct_UFunction_USShutDownWidget_OnClickedYes_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SShutDownWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USShutDownWidget_OnClickedYes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USShutDownWidget, nullptr, "OnClickedYes", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USShutDownWidget_OnClickedYes_Statics::Function_MetaDataParams), Z_Construct_UFunction_USShutDownWidget_OnClickedYes_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_USShutDownWidget_OnClickedYes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USShutDownWidget_OnClickedYes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USShutDownWidget::execOnClickedYes)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnClickedYes();
	P_NATIVE_END;
}
// End Class USShutDownWidget Function OnClickedYes

// Begin Class USShutDownWidget
void USShutDownWidget::StaticRegisterNativesUSShutDownWidget()
{
	UClass* Class = USShutDownWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnClickedNo", &USShutDownWidget::execOnClickedNo },
		{ "OnClickedYes", &USShutDownWidget::execOnClickedYes },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USShutDownWidget);
UClass* Z_Construct_UClass_USShutDownWidget_NoRegister()
{
	return USShutDownWidget::StaticClass();
}
struct Z_Construct_UClass_USShutDownWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "SShutDownWidget.h" },
		{ "ModuleRelativePath", "SShutDownWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Button_yes_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SShutDownWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Button_no_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SShutDownWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Button_yes;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Button_no;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USShutDownWidget_OnClickedNo, "OnClickedNo" }, // 856628341
		{ &Z_Construct_UFunction_USShutDownWidget_OnClickedYes, "OnClickedYes" }, // 3041591120
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USShutDownWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USShutDownWidget_Statics::NewProp_Button_yes = { "Button_yes", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USShutDownWidget, Button_yes), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Button_yes_MetaData), NewProp_Button_yes_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USShutDownWidget_Statics::NewProp_Button_no = { "Button_no", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USShutDownWidget, Button_no), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Button_no_MetaData), NewProp_Button_no_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USShutDownWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USShutDownWidget_Statics::NewProp_Button_yes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USShutDownWidget_Statics::NewProp_Button_no,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USShutDownWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USShutDownWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_Opcua_Unreal_Client,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USShutDownWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USShutDownWidget_Statics::ClassParams = {
	&USShutDownWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USShutDownWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USShutDownWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USShutDownWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_USShutDownWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USShutDownWidget()
{
	if (!Z_Registration_Info_UClass_USShutDownWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USShutDownWidget.OuterSingleton, Z_Construct_UClass_USShutDownWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USShutDownWidget.OuterSingleton;
}
template<> OPCUA_UNREAL_CLIENT_API UClass* StaticClass<USShutDownWidget>()
{
	return USShutDownWidget::StaticClass();
}
USShutDownWidget::USShutDownWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USShutDownWidget);
USShutDownWidget::~USShutDownWidget() {}
// End Class USShutDownWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_Work_Project_Source_Opcua_Unreal_Client_SShutDownWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USShutDownWidget, USShutDownWidget::StaticClass, TEXT("USShutDownWidget"), &Z_Registration_Info_UClass_USShutDownWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USShutDownWidget), 3468056808U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Work_Project_Source_Opcua_Unreal_Client_SShutDownWidget_h_3356092151(TEXT("/Script/Opcua_Unreal_Client"),
	Z_CompiledInDeferFile_FID_Work_Project_Source_Opcua_Unreal_Client_SShutDownWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Work_Project_Source_Opcua_Unreal_Client_SShutDownWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
