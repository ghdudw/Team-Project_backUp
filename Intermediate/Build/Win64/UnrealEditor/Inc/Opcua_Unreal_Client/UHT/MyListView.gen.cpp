// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Opcua_Unreal_Client/MyListView.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyListView() {}

// Begin Cross Module References
OPCUA_UNREAL_CLIENT_API UClass* Z_Construct_UClass_UMyListView();
OPCUA_UNREAL_CLIENT_API UClass* Z_Construct_UClass_UMyListView_NoRegister();
UMG_API UClass* Z_Construct_UClass_UListView();
UPackage* Z_Construct_UPackage__Script_Opcua_Unreal_Client();
// End Cross Module References

// Begin Class UMyListView
void UMyListView::StaticRegisterNativesUMyListView()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMyListView);
UClass* Z_Construct_UClass_UMyListView_NoRegister()
{
	return UMyListView::StaticClass();
}
struct Z_Construct_UClass_UMyListView_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "MyListView.h" },
		{ "ModuleRelativePath", "MyListView.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyListView>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMyListView_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UListView,
	(UObject* (*)())Z_Construct_UPackage__Script_Opcua_Unreal_Client,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyListView_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyListView_Statics::ClassParams = {
	&UMyListView::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00B000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyListView_Statics::Class_MetaDataParams), Z_Construct_UClass_UMyListView_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMyListView()
{
	if (!Z_Registration_Info_UClass_UMyListView.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyListView.OuterSingleton, Z_Construct_UClass_UMyListView_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMyListView.OuterSingleton;
}
template<> OPCUA_UNREAL_CLIENT_API UClass* StaticClass<UMyListView>()
{
	return UMyListView::StaticClass();
}
UMyListView::UMyListView(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMyListView);
UMyListView::~UMyListView() {}
// End Class UMyListView

// Begin Registration
struct Z_CompiledInDeferFile_FID_Work_Project_Source_Opcua_Unreal_Client_MyListView_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMyListView, UMyListView::StaticClass, TEXT("UMyListView"), &Z_Registration_Info_UClass_UMyListView, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyListView), 441789472U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Work_Project_Source_Opcua_Unreal_Client_MyListView_h_621525203(TEXT("/Script/Opcua_Unreal_Client"),
	Z_CompiledInDeferFile_FID_Work_Project_Source_Opcua_Unreal_Client_MyListView_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Work_Project_Source_Opcua_Unreal_Client_MyListView_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
