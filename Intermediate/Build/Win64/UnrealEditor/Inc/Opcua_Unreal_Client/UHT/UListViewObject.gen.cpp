// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Opcua_Unreal_Client/UListViewObject.h"
#include "Opcua_Unreal_Client/MyCustomStruct.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUListViewObject() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
OPCUA_UNREAL_CLIENT_API UClass* Z_Construct_UClass_UUListViewObject();
OPCUA_UNREAL_CLIENT_API UClass* Z_Construct_UClass_UUListViewObject_NoRegister();
OPCUA_UNREAL_CLIENT_API UScriptStruct* Z_Construct_UScriptStruct_FMyCustomStruct();
UPackage* Z_Construct_UPackage__Script_Opcua_Unreal_Client();
// End Cross Module References

// Begin Class UUListViewObject
void UUListViewObject::StaticRegisterNativesUUListViewObject()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUListViewObject);
UClass* Z_Construct_UClass_UUListViewObject_NoRegister()
{
	return UUListViewObject::StaticClass();
}
struct Z_Construct_UClass_UUListViewObject_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UListViewObject.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "UListViewObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MyCustomStruct_MetaData[] = {
		{ "Category", "List" },
		{ "ModuleRelativePath", "UListViewObject.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_MyCustomStruct;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUListViewObject>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUListViewObject_Statics::NewProp_MyCustomStruct = { "MyCustomStruct", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUListViewObject, MyCustomStruct), Z_Construct_UScriptStruct_FMyCustomStruct, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MyCustomStruct_MetaData), NewProp_MyCustomStruct_MetaData) }; // 2221330329
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUListViewObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUListViewObject_Statics::NewProp_MyCustomStruct,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUListViewObject_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UUListViewObject_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Opcua_Unreal_Client,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUListViewObject_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UUListViewObject_Statics::ClassParams = {
	&UUListViewObject::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UUListViewObject_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UUListViewObject_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUListViewObject_Statics::Class_MetaDataParams), Z_Construct_UClass_UUListViewObject_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UUListViewObject()
{
	if (!Z_Registration_Info_UClass_UUListViewObject.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUListViewObject.OuterSingleton, Z_Construct_UClass_UUListViewObject_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUListViewObject.OuterSingleton;
}
template<> OPCUA_UNREAL_CLIENT_API UClass* StaticClass<UUListViewObject>()
{
	return UUListViewObject::StaticClass();
}
UUListViewObject::UUListViewObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UUListViewObject);
UUListViewObject::~UUListViewObject() {}
// End Class UUListViewObject

// Begin Registration
struct Z_CompiledInDeferFile_FID_Work_Project_Source_Opcua_Unreal_Client_UListViewObject_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UUListViewObject, UUListViewObject::StaticClass, TEXT("UUListViewObject"), &Z_Registration_Info_UClass_UUListViewObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUListViewObject), 3437957188U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Work_Project_Source_Opcua_Unreal_Client_UListViewObject_h_401997034(TEXT("/Script/Opcua_Unreal_Client"),
	Z_CompiledInDeferFile_FID_Work_Project_Source_Opcua_Unreal_Client_UListViewObject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Work_Project_Source_Opcua_Unreal_Client_UListViewObject_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
