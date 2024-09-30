// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Opcua_Unreal_Client/ResolutionOption.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeResolutionOption() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
OPCUA_UNREAL_CLIENT_API UScriptStruct* Z_Construct_UScriptStruct_FResolutionCategory();
OPCUA_UNREAL_CLIENT_API UScriptStruct* Z_Construct_UScriptStruct_FResolutionOption();
UPackage* Z_Construct_UPackage__Script_Opcua_Unreal_Client();
// End Cross Module References

// Begin ScriptStruct FResolutionOption
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ResolutionOption;
class UScriptStruct* FResolutionOption::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ResolutionOption.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ResolutionOption.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FResolutionOption, (UObject*)Z_Construct_UPackage__Script_Opcua_Unreal_Client(), TEXT("ResolutionOption"));
	}
	return Z_Registration_Info_UScriptStruct_ResolutionOption.OuterSingleton;
}
template<> OPCUA_UNREAL_CLIENT_API UScriptStruct* StaticStruct<FResolutionOption>()
{
	return FResolutionOption::StaticStruct();
}
struct Z_Construct_UScriptStruct_FResolutionOption_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "ModuleRelativePath", "ResolutionOption.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResolutionLabel_MetaData[] = {
		{ "Category", "Resolution" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xd8\xbb\xef\xbf\xbd \xef\xbf\xbd\xd8\xbd\xef\xbf\xbd\xc6\xae (\xef\xbf\xbd\xef\xbf\xbd: 1920x1080)\n" },
#endif
		{ "ModuleRelativePath", "ResolutionOption.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xd8\xbb\xef\xbf\xbd \xef\xbf\xbd\xd8\xbd\xef\xbf\xbd\xc6\xae (\xef\xbf\xbd\xef\xbf\xbd: 1920x1080)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResolutionValue_MetaData[] = {
		{ "Category", "Resolution" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xd8\xbb\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd (\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd x \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd)\n" },
#endif
		{ "ModuleRelativePath", "ResolutionOption.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xd8\xbb\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd (\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd x \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ResolutionLabel;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ResolutionValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FResolutionOption>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FResolutionOption_Statics::NewProp_ResolutionLabel = { "ResolutionLabel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FResolutionOption, ResolutionLabel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResolutionLabel_MetaData), NewProp_ResolutionLabel_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FResolutionOption_Statics::NewProp_ResolutionValue = { "ResolutionValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FResolutionOption, ResolutionValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResolutionValue_MetaData), NewProp_ResolutionValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FResolutionOption_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResolutionOption_Statics::NewProp_ResolutionLabel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResolutionOption_Statics::NewProp_ResolutionValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FResolutionOption_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FResolutionOption_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Opcua_Unreal_Client,
	nullptr,
	&NewStructOps,
	"ResolutionOption",
	Z_Construct_UScriptStruct_FResolutionOption_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FResolutionOption_Statics::PropPointers),
	sizeof(FResolutionOption),
	alignof(FResolutionOption),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FResolutionOption_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FResolutionOption_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FResolutionOption()
{
	if (!Z_Registration_Info_UScriptStruct_ResolutionOption.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ResolutionOption.InnerSingleton, Z_Construct_UScriptStruct_FResolutionOption_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ResolutionOption.InnerSingleton;
}
// End ScriptStruct FResolutionOption

// Begin ScriptStruct FResolutionCategory
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ResolutionCategory;
class UScriptStruct* FResolutionCategory::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ResolutionCategory.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ResolutionCategory.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FResolutionCategory, (UObject*)Z_Construct_UPackage__Script_Opcua_Unreal_Client(), TEXT("ResolutionCategory"));
	}
	return Z_Registration_Info_UScriptStruct_ResolutionCategory.OuterSingleton;
}
template<> OPCUA_UNREAL_CLIENT_API UScriptStruct* StaticStruct<FResolutionCategory>()
{
	return FResolutionCategory::StaticStruct();
}
struct Z_Construct_UScriptStruct_FResolutionCategory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "ResolutionOption.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CategoryLabel_MetaData[] = {
		{ "Category", "Resolution" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xd8\xbb\xef\xbf\xbd \xc4\xab\xef\xbf\xbd\xd7\xb0\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd (\xef\xbf\xbd\xef\xbf\xbd: 16:9)\n" },
#endif
		{ "ModuleRelativePath", "ResolutionOption.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xd8\xbb\xef\xbf\xbd \xc4\xab\xef\xbf\xbd\xd7\xb0\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd (\xef\xbf\xbd\xef\xbf\xbd: 16:9)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Resolutions_MetaData[] = {
		{ "Category", "Resolution" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd \xc4\xab\xef\xbf\xbd\xd7\xb0\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd8\xbb\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "ResolutionOption.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd \xc4\xab\xef\xbf\xbd\xd7\xb0\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd8\xbb\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_CategoryLabel;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Resolutions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Resolutions;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FResolutionCategory>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FResolutionCategory_Statics::NewProp_CategoryLabel = { "CategoryLabel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FResolutionCategory, CategoryLabel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CategoryLabel_MetaData), NewProp_CategoryLabel_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FResolutionCategory_Statics::NewProp_Resolutions_Inner = { "Resolutions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FResolutionOption, METADATA_PARAMS(0, nullptr) }; // 2465536553
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FResolutionCategory_Statics::NewProp_Resolutions = { "Resolutions", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FResolutionCategory, Resolutions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Resolutions_MetaData), NewProp_Resolutions_MetaData) }; // 2465536553
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FResolutionCategory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResolutionCategory_Statics::NewProp_CategoryLabel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResolutionCategory_Statics::NewProp_Resolutions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResolutionCategory_Statics::NewProp_Resolutions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FResolutionCategory_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FResolutionCategory_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Opcua_Unreal_Client,
	nullptr,
	&NewStructOps,
	"ResolutionCategory",
	Z_Construct_UScriptStruct_FResolutionCategory_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FResolutionCategory_Statics::PropPointers),
	sizeof(FResolutionCategory),
	alignof(FResolutionCategory),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FResolutionCategory_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FResolutionCategory_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FResolutionCategory()
{
	if (!Z_Registration_Info_UScriptStruct_ResolutionCategory.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ResolutionCategory.InnerSingleton, Z_Construct_UScriptStruct_FResolutionCategory_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ResolutionCategory.InnerSingleton;
}
// End ScriptStruct FResolutionCategory

// Begin Registration
struct Z_CompiledInDeferFile_FID_Work_Project_Source_Opcua_Unreal_Client_ResolutionOption_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FResolutionOption::StaticStruct, Z_Construct_UScriptStruct_FResolutionOption_Statics::NewStructOps, TEXT("ResolutionOption"), &Z_Registration_Info_UScriptStruct_ResolutionOption, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FResolutionOption), 2465536553U) },
		{ FResolutionCategory::StaticStruct, Z_Construct_UScriptStruct_FResolutionCategory_Statics::NewStructOps, TEXT("ResolutionCategory"), &Z_Registration_Info_UScriptStruct_ResolutionCategory, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FResolutionCategory), 980250248U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Work_Project_Source_Opcua_Unreal_Client_ResolutionOption_h_4196164233(TEXT("/Script/Opcua_Unreal_Client"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Work_Project_Source_Opcua_Unreal_Client_ResolutionOption_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Work_Project_Source_Opcua_Unreal_Client_ResolutionOption_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
