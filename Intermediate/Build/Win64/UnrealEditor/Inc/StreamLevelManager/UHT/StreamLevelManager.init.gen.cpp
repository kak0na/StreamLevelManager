// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStreamLevelManager_init() {}
	STREAMLEVELMANAGER_API UFunction* Z_Construct_UDelegateFunction_StreamLevelManager_OnSwitchAllStreamLevelFinished__DelegateSignature();
	STREAMLEVELMANAGER_API UFunction* Z_Construct_UDelegateFunction_StreamLevelManager_OnTrySwitchLevelFinished__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_StreamLevelManager;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_StreamLevelManager()
	{
		if (!Z_Registration_Info_UPackage__Script_StreamLevelManager.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_StreamLevelManager_OnSwitchAllStreamLevelFinished__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_StreamLevelManager_OnTrySwitchLevelFinished__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/StreamLevelManager",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xC30FA516,
				0x803306DB,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_StreamLevelManager.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_StreamLevelManager.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_StreamLevelManager(Z_Construct_UPackage__Script_StreamLevelManager, TEXT("/Script/StreamLevelManager"), Z_Registration_Info_UPackage__Script_StreamLevelManager, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xC30FA516, 0x803306DB));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
