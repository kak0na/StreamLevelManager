// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StreamLevelManager/Public/LevelManagerFuncs.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelManagerFuncs() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	STREAMLEVELMANAGER_API UClass* Z_Construct_UClass_ULevelManagerFuncs();
	STREAMLEVELMANAGER_API UClass* Z_Construct_UClass_ULevelManagerFuncs_NoRegister();
	UPackage* Z_Construct_UPackage__Script_StreamLevelManager();
// End Cross Module References
	void ULevelManagerFuncs::StaticRegisterNativesULevelManagerFuncs()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULevelManagerFuncs);
	UClass* Z_Construct_UClass_ULevelManagerFuncs_NoRegister()
	{
		return ULevelManagerFuncs::StaticClass();
	}
	struct Z_Construct_UClass_ULevelManagerFuncs_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULevelManagerFuncs_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_StreamLevelManager,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelManagerFuncs_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "LevelManagerFuncs.h" },
		{ "ModuleRelativePath", "Public/LevelManagerFuncs.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULevelManagerFuncs_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULevelManagerFuncs>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULevelManagerFuncs_Statics::ClassParams = {
		&ULevelManagerFuncs::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULevelManagerFuncs_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelManagerFuncs_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULevelManagerFuncs()
	{
		if (!Z_Registration_Info_UClass_ULevelManagerFuncs.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULevelManagerFuncs.OuterSingleton, Z_Construct_UClass_ULevelManagerFuncs_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULevelManagerFuncs.OuterSingleton;
	}
	template<> STREAMLEVELMANAGER_API UClass* StaticClass<ULevelManagerFuncs>()
	{
		return ULevelManagerFuncs::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULevelManagerFuncs);
	ULevelManagerFuncs::~ULevelManagerFuncs() {}
	struct Z_CompiledInDeferFile_FID_Test501cpp3_Plugins_StreamLevelManager_Source_StreamLevelManager_Public_LevelManagerFuncs_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Test501cpp3_Plugins_StreamLevelManager_Source_StreamLevelManager_Public_LevelManagerFuncs_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULevelManagerFuncs, ULevelManagerFuncs::StaticClass, TEXT("ULevelManagerFuncs"), &Z_Registration_Info_UClass_ULevelManagerFuncs, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULevelManagerFuncs), 1485714535U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Test501cpp3_Plugins_StreamLevelManager_Source_StreamLevelManager_Public_LevelManagerFuncs_h_3230261498(TEXT("/Script/StreamLevelManager"),
		Z_CompiledInDeferFile_FID_Test501cpp3_Plugins_StreamLevelManager_Source_StreamLevelManager_Public_LevelManagerFuncs_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Test501cpp3_Plugins_StreamLevelManager_Source_StreamLevelManager_Public_LevelManagerFuncs_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
