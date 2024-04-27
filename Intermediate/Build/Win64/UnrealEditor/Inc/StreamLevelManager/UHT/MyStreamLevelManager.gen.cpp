// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StreamLevelManager/Public/MyStreamLevelManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyStreamLevelManager() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorldSubsystem();
	STREAMLEVELMANAGER_API UClass* Z_Construct_UClass_UMyStreamLevelManager();
	STREAMLEVELMANAGER_API UClass* Z_Construct_UClass_UMyStreamLevelManager_NoRegister();
	STREAMLEVELMANAGER_API UFunction* Z_Construct_UDelegateFunction_StreamLevelManager_OnSwitchAllStreamLevelFinished__DelegateSignature();
	STREAMLEVELMANAGER_API UFunction* Z_Construct_UDelegateFunction_StreamLevelManager_OnTrySwitchLevelFinished__DelegateSignature();
	STREAMLEVELMANAGER_API UScriptStruct* Z_Construct_UScriptStruct_FSwitchInfo();
	UPackage* Z_Construct_UPackage__Script_StreamLevelManager();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_StreamLevelManager_OnSwitchAllStreamLevelFinished__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_StreamLevelManager_OnSwitchAllStreamLevelFinished__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MyStreamLevelManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_StreamLevelManager_OnSwitchAllStreamLevelFinished__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_StreamLevelManager, nullptr, "OnSwitchAllStreamLevelFinished__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_StreamLevelManager_OnSwitchAllStreamLevelFinished__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_StreamLevelManager_OnSwitchAllStreamLevelFinished__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_StreamLevelManager_OnSwitchAllStreamLevelFinished__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_StreamLevelManager_OnSwitchAllStreamLevelFinished__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_StreamLevelManager_OnTrySwitchLevelFinished__DelegateSignature_Statics
	{
		struct _Script_StreamLevelManager_eventOnTrySwitchLevelFinished_Parms
		{
			bool bIsLoadCommand;
		};
		static void NewProp_bIsLoadCommand_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsLoadCommand;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_StreamLevelManager_OnTrySwitchLevelFinished__DelegateSignature_Statics::NewProp_bIsLoadCommand_SetBit(void* Obj)
	{
		((_Script_StreamLevelManager_eventOnTrySwitchLevelFinished_Parms*)Obj)->bIsLoadCommand = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_StreamLevelManager_OnTrySwitchLevelFinished__DelegateSignature_Statics::NewProp_bIsLoadCommand = { "bIsLoadCommand", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_StreamLevelManager_eventOnTrySwitchLevelFinished_Parms), &Z_Construct_UDelegateFunction_StreamLevelManager_OnTrySwitchLevelFinished__DelegateSignature_Statics::NewProp_bIsLoadCommand_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_StreamLevelManager_OnTrySwitchLevelFinished__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_StreamLevelManager_OnTrySwitchLevelFinished__DelegateSignature_Statics::NewProp_bIsLoadCommand,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_StreamLevelManager_OnTrySwitchLevelFinished__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MyStreamLevelManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_StreamLevelManager_OnTrySwitchLevelFinished__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_StreamLevelManager, nullptr, "OnTrySwitchLevelFinished__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_StreamLevelManager_OnTrySwitchLevelFinished__DelegateSignature_Statics::_Script_StreamLevelManager_eventOnTrySwitchLevelFinished_Parms), Z_Construct_UDelegateFunction_StreamLevelManager_OnTrySwitchLevelFinished__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_StreamLevelManager_OnTrySwitchLevelFinished__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_StreamLevelManager_OnTrySwitchLevelFinished__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_StreamLevelManager_OnTrySwitchLevelFinished__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_StreamLevelManager_OnTrySwitchLevelFinished__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_StreamLevelManager_OnTrySwitchLevelFinished__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SwitchInfo;
class UScriptStruct* FSwitchInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SwitchInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SwitchInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSwitchInfo, Z_Construct_UPackage__Script_StreamLevelManager(), TEXT("SwitchInfo"));
	}
	return Z_Registration_Info_UScriptStruct_SwitchInfo.OuterSingleton;
}
template<> STREAMLEVELMANAGER_API UScriptStruct* StaticStruct<FSwitchInfo>()
{
	return FSwitchInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSwitchInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSwitchInfo_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MyStreamLevelManager.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSwitchInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSwitchInfo>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSwitchInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StreamLevelManager,
		nullptr,
		&NewStructOps,
		"SwitchInfo",
		sizeof(FSwitchInfo),
		alignof(FSwitchInfo),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSwitchInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSwitchInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSwitchInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_SwitchInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SwitchInfo.InnerSingleton, Z_Construct_UScriptStruct_FSwitchInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SwitchInfo.InnerSingleton;
	}
	DEFINE_FUNCTION(UMyStreamLevelManager::execSwitchStreamLevels)
	{
		P_GET_TSET_REF(FName,Z_Param_Out_PresetLoadLevels);
		P_GET_TSET_REF(FName,Z_Param_Out_PresetRemoveLevels);
		P_GET_TSET_REF(FName,Z_Param_Out_CustomLoadLevels);
		P_GET_TSET_REF(FName,Z_Param_Out_CustomRemoveLevel);
		P_GET_OBJECT(UObject,Z_Param_NotificationReceiver);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SwitchStreamLevels(Z_Param_Out_PresetLoadLevels,Z_Param_Out_PresetRemoveLevels,Z_Param_Out_CustomLoadLevels,Z_Param_Out_CustomRemoveLevel,Z_Param_NotificationReceiver);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMyStreamLevelManager::execSwitchCallbackInternal)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SwitchCallbackInternal();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMyStreamLevelManager::execLoadWithPresetInfo)
	{
		P_GET_TSET_REF(FName,Z_Param_Out_PresetLoadLevels);
		P_GET_TSET_REF(FName,Z_Param_Out_PresetRemoveLevels);
		P_GET_TSET_REF(FName,Z_Param_Out_CustomLoadLevels);
		P_GET_TSET_REF(FName,Z_Param_Out_CustomRemoveLevel);
		P_GET_OBJECT(UObject,Z_Param_NotificationReceiver);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadWithPresetInfo(Z_Param_Out_PresetLoadLevels,Z_Param_Out_PresetRemoveLevels,Z_Param_Out_CustomLoadLevels,Z_Param_Out_CustomRemoveLevel,Z_Param_NotificationReceiver);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMyStreamLevelManager::execGetCurrentStreamLevels)
	{
		P_GET_TSET_REF(FName,Z_Param_Out_LevelNames);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetCurrentStreamLevels(Z_Param_Out_LevelNames);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMyStreamLevelManager::execSwitchLevelsInOneFunc)
	{
		P_GET_TSET_REF(FName,Z_Param_Out_LevelToAdd);
		P_GET_TSET_REF(FName,Z_Param_Out_LevelToRemove);
		P_GET_OBJECT(UObject,Z_Param_NotificationReceiver);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SwitchLevelsInOneFunc(Z_Param_Out_LevelToAdd,Z_Param_Out_LevelToRemove,Z_Param_NotificationReceiver);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMyStreamLevelManager::execCallBackForOneFunc)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CallBackForOneFunc();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMyStreamLevelManager::execTryUnLoadCallBackTarget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TryUnLoadCallBackTarget();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMyStreamLevelManager::execTryLoadCallBackTarget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TryLoadCallBackTarget();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMyStreamLevelManager::execTryUnloadSomeLevels)
	{
		P_GET_TSET_REF(FName,Z_Param_Out_LevelNames);
		P_GET_OBJECT(UObject,Z_Param_NotifyTarget);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TryUnloadSomeLevels(Z_Param_Out_LevelNames,Z_Param_NotifyTarget);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMyStreamLevelManager::execTryLoadSomeLevels)
	{
		P_GET_TSET_REF(FName,Z_Param_Out_LevelNames);
		P_GET_OBJECT(UObject,Z_Param_NotifyTarget);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TryLoadSomeLevels(Z_Param_Out_LevelNames,Z_Param_NotifyTarget);
		P_NATIVE_END;
	}
	void UMyStreamLevelManager::StaticRegisterNativesUMyStreamLevelManager()
	{
		UClass* Class = UMyStreamLevelManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CallBackForOneFunc", &UMyStreamLevelManager::execCallBackForOneFunc },
			{ "GetCurrentStreamLevels", &UMyStreamLevelManager::execGetCurrentStreamLevels },
			{ "LoadWithPresetInfo", &UMyStreamLevelManager::execLoadWithPresetInfo },
			{ "SwitchCallbackInternal", &UMyStreamLevelManager::execSwitchCallbackInternal },
			{ "SwitchLevelsInOneFunc", &UMyStreamLevelManager::execSwitchLevelsInOneFunc },
			{ "SwitchStreamLevels", &UMyStreamLevelManager::execSwitchStreamLevels },
			{ "TryLoadCallBackTarget", &UMyStreamLevelManager::execTryLoadCallBackTarget },
			{ "TryLoadSomeLevels", &UMyStreamLevelManager::execTryLoadSomeLevels },
			{ "TryUnLoadCallBackTarget", &UMyStreamLevelManager::execTryUnLoadCallBackTarget },
			{ "TryUnloadSomeLevels", &UMyStreamLevelManager::execTryUnloadSomeLevels },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMyStreamLevelManager_CallBackForOneFunc_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyStreamLevelManager_CallBackForOneFunc_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//\xe6\x95\xb4\xe5\x90\x88\xe5\x9c\xa8\xe4\xb8\x80\xe4\xb8\xaa\xe5\x87\xbd\xe6\x95\xb0\xe4\xb8\xad\n" },
		{ "ModuleRelativePath", "Public/MyStreamLevelManager.h" },
		{ "ToolTip", "\xe6\x95\xb4\xe5\x90\x88\xe5\x9c\xa8\xe4\xb8\x80\xe4\xb8\xaa\xe5\x87\xbd\xe6\x95\xb0\xe4\xb8\xad" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyStreamLevelManager_CallBackForOneFunc_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyStreamLevelManager, nullptr, "CallBackForOneFunc", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMyStreamLevelManager_CallBackForOneFunc_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyStreamLevelManager_CallBackForOneFunc_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMyStreamLevelManager_CallBackForOneFunc()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyStreamLevelManager_CallBackForOneFunc_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMyStreamLevelManager_GetCurrentStreamLevels_Statics
	{
		struct MyStreamLevelManager_eventGetCurrentStreamLevels_Parms
		{
			TSet<FName> LevelNames;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_LevelNames_ElementProp;
		static const UECodeGen_Private::FSetPropertyParams NewProp_LevelNames;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMyStreamLevelManager_GetCurrentStreamLevels_Statics::NewProp_LevelNames_ElementProp = { "LevelNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UMyStreamLevelManager_GetCurrentStreamLevels_Statics::NewProp_LevelNames = { "LevelNames", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MyStreamLevelManager_eventGetCurrentStreamLevels_Parms, LevelNames), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyStreamLevelManager_GetCurrentStreamLevels_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyStreamLevelManager_GetCurrentStreamLevels_Statics::NewProp_LevelNames_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyStreamLevelManager_GetCurrentStreamLevels_Statics::NewProp_LevelNames,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyStreamLevelManager_GetCurrentStreamLevels_Statics::Function_MetaDataParams[] = {
		{ "Category", "StreamLevelsManager" },
		{ "Comment", "//\xe8\x8e\xb7\xe5\x8f\x96\xe5\xbd\x93\xe5\x89\x8d\xe6\x89\x80\xe6\x9c\x89\xe5\x85\xb3\xe5\x8d\xa1TSet<FName>\n" },
		{ "ModuleRelativePath", "Public/MyStreamLevelManager.h" },
		{ "ToolTip", "\xe8\x8e\xb7\xe5\x8f\x96\xe5\xbd\x93\xe5\x89\x8d\xe6\x89\x80\xe6\x9c\x89\xe5\x85\xb3\xe5\x8d\xa1TSet<FName>" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyStreamLevelManager_GetCurrentStreamLevels_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyStreamLevelManager, nullptr, "GetCurrentStreamLevels", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMyStreamLevelManager_GetCurrentStreamLevels_Statics::MyStreamLevelManager_eventGetCurrentStreamLevels_Parms), Z_Construct_UFunction_UMyStreamLevelManager_GetCurrentStreamLevels_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyStreamLevelManager_GetCurrentStreamLevels_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMyStreamLevelManager_GetCurrentStreamLevels_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyStreamLevelManager_GetCurrentStreamLevels_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMyStreamLevelManager_GetCurrentStreamLevels()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyStreamLevelManager_GetCurrentStreamLevels_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMyStreamLevelManager_LoadWithPresetInfo_Statics
	{
		struct MyStreamLevelManager_eventLoadWithPresetInfo_Parms
		{
			TSet<FName> PresetLoadLevels;
			TSet<FName> PresetRemoveLevels;
			TSet<FName> CustomLoadLevels;
			TSet<FName> CustomRemoveLevel;
			UObject* NotificationReceiver;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_PresetLoadLevels_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PresetLoadLevels_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_PresetLoadLevels;
		static const UECodeGen_Private::FNamePropertyParams NewProp_PresetRemoveLevels_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PresetRemoveLevels_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_PresetRemoveLevels;
		static const UECodeGen_Private::FNamePropertyParams NewProp_CustomLoadLevels_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomLoadLevels_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_CustomLoadLevels;
		static const UECodeGen_Private::FNamePropertyParams NewProp_CustomRemoveLevel_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomRemoveLevel_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_CustomRemoveLevel;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NotificationReceiver;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMyStreamLevelManager_LoadWithPresetInfo_Statics::NewProp_PresetLoadLevels_ElementProp = { "PresetLoadLevels", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyStreamLevelManager_LoadWithPresetInfo_Statics::NewProp_PresetLoadLevels_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UMyStreamLevelManager_LoadWithPresetInfo_Statics::NewProp_PresetLoadLevels = { "PresetLoadLevels", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MyStreamLevelManager_eventLoadWithPresetInfo_Parms, PresetLoadLevels), METADATA_PARAMS(Z_Construct_UFunction_UMyStreamLevelManager_LoadWithPresetInfo_Statics::NewProp_PresetLoadLevels_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyStreamLevelManager_LoadWithPresetInfo_Statics::NewProp_PresetLoadLevels_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMyStreamLevelManager_LoadWithPresetInfo_Statics::NewProp_PresetRemoveLevels_ElementProp = { "PresetRemoveLevels", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyStreamLevelManager_LoadWithPresetInfo_Statics::NewProp_PresetRemoveLevels_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UMyStreamLevelManager_LoadWithPresetInfo_Statics::NewProp_PresetRemoveLevels = { "PresetRemoveLevels", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MyStreamLevelManager_eventLoadWithPresetInfo_Parms, PresetRemoveLevels), METADATA_PARAMS(Z_Construct_UFunction_UMyStreamLevelManager_LoadWithPresetInfo_Statics::NewProp_PresetRemoveLevels_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyStreamLevelManager_LoadWithPresetInfo_Statics::NewProp_PresetRemoveLevels_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMyStreamLevelManager_LoadWithPresetInfo_Statics::NewProp_CustomLoadLevels_ElementProp = { "CustomLoadLevels", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyStreamLevelManager_LoadWithPresetInfo_Statics::NewProp_CustomLoadLevels_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UMyStreamLevelManager_LoadWithPresetInfo_Statics::NewProp_CustomLoadLevels = { "CustomLoadLevels", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MyStreamLevelManager_eventLoadWithPresetInfo_Parms, CustomLoadLevels), METADATA_PARAMS(Z_Construct_UFunction_UMyStreamLevelManager_LoadWithPresetInfo_Statics::NewProp_CustomLoadLevels_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyStreamLevelManager_LoadWithPresetInfo_Statics::NewProp_CustomLoadLevels_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMyStreamLevelManager_LoadWithPresetInfo_Statics::NewProp_CustomRemoveLevel_ElementProp = { "CustomRemoveLevel", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyStreamLevelManager_LoadWithPresetInfo_Statics::NewProp_CustomRemoveLevel_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UMyStreamLevelManager_LoadWithPresetInfo_Statics::NewProp_CustomRemoveLevel = { "CustomRemoveLevel", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MyStreamLevelManager_eventLoadWithPresetInfo_Parms, CustomRemoveLevel), METADATA_PARAMS(Z_Construct_UFunction_UMyStreamLevelManager_LoadWithPresetInfo_Statics::NewProp_CustomRemoveLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyStreamLevelManager_LoadWithPresetInfo_Statics::NewProp_CustomRemoveLevel_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMyStreamLevelManager_LoadWithPresetInfo_Statics::NewProp_NotificationReceiver = { "NotificationReceiver", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MyStreamLevelManager_eventLoadWithPresetInfo_Parms, NotificationReceiver), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyStreamLevelManager_LoadWithPresetInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyStreamLevelManager_LoadWithPresetInfo_Statics::NewProp_PresetLoadLevels_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyStreamLevelManager_LoadWithPresetInfo_Statics::NewProp_PresetLoadLevels,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyStreamLevelManager_LoadWithPresetInfo_Statics::NewProp_PresetRemoveLevels_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyStreamLevelManager_LoadWithPresetInfo_Statics::NewProp_PresetRemoveLevels,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyStreamLevelManager_LoadWithPresetInfo_Statics::NewProp_CustomLoadLevels_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyStreamLevelManager_LoadWithPresetInfo_Statics::NewProp_CustomLoadLevels,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyStreamLevelManager_LoadWithPresetInfo_Statics::NewProp_CustomRemoveLevel_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyStreamLevelManager_LoadWithPresetInfo_Statics::NewProp_CustomRemoveLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyStreamLevelManager_LoadWithPresetInfo_Statics::NewProp_NotificationReceiver,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyStreamLevelManager_LoadWithPresetInfo_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//\xe5\x9c\xa8\xe9\xa2\x84\xe8\xae\xbe\xe5\x9f\xba\xe7\xa1\x80\xe4\xb8\x8a\xe6\x94\xaf\xe6\x8c\x81\xe7\x94\xa8\xe6\x88\xb7\xe5\xae\x9a\xe4\xb9\x89\xe5\x8a\xa0\xe5\x8d\xb8\xe8\xbd\xbd\n" },
		{ "ModuleRelativePath", "Public/MyStreamLevelManager.h" },
		{ "ToolTip", "\xe5\x9c\xa8\xe9\xa2\x84\xe8\xae\xbe\xe5\x9f\xba\xe7\xa1\x80\xe4\xb8\x8a\xe6\x94\xaf\xe6\x8c\x81\xe7\x94\xa8\xe6\x88\xb7\xe5\xae\x9a\xe4\xb9\x89\xe5\x8a\xa0\xe5\x8d\xb8\xe8\xbd\xbd" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyStreamLevelManager_LoadWithPresetInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyStreamLevelManager, nullptr, "LoadWithPresetInfo", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMyStreamLevelManager_LoadWithPresetInfo_Statics::MyStreamLevelManager_eventLoadWithPresetInfo_Parms), Z_Construct_UFunction_UMyStreamLevelManager_LoadWithPresetInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyStreamLevelManager_LoadWithPresetInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMyStreamLevelManager_LoadWithPresetInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyStreamLevelManager_LoadWithPresetInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMyStreamLevelManager_LoadWithPresetInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyStreamLevelManager_LoadWithPresetInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMyStreamLevelManager_SwitchCallbackInternal_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyStreamLevelManager_SwitchCallbackInternal_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MyStreamLevelManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyStreamLevelManager_SwitchCallbackInternal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyStreamLevelManager, nullptr, "SwitchCallbackInternal", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMyStreamLevelManager_SwitchCallbackInternal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyStreamLevelManager_SwitchCallbackInternal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMyStreamLevelManager_SwitchCallbackInternal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyStreamLevelManager_SwitchCallbackInternal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMyStreamLevelManager_SwitchLevelsInOneFunc_Statics
	{
		struct MyStreamLevelManager_eventSwitchLevelsInOneFunc_Parms
		{
			TSet<FName> LevelToAdd;
			TSet<FName> LevelToRemove;
			UObject* NotificationReceiver;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_LevelToAdd_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LevelToAdd_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_LevelToAdd;
		static const UECodeGen_Private::FNamePropertyParams NewProp_LevelToRemove_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LevelToRemove_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_LevelToRemove;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NotificationReceiver;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMyStreamLevelManager_SwitchLevelsInOneFunc_Statics::NewProp_LevelToAdd_ElementProp = { "LevelToAdd", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyStreamLevelManager_SwitchLevelsInOneFunc_Statics::NewProp_LevelToAdd_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UMyStreamLevelManager_SwitchLevelsInOneFunc_Statics::NewProp_LevelToAdd = { "LevelToAdd", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MyStreamLevelManager_eventSwitchLevelsInOneFunc_Parms, LevelToAdd), METADATA_PARAMS(Z_Construct_UFunction_UMyStreamLevelManager_SwitchLevelsInOneFunc_Statics::NewProp_LevelToAdd_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyStreamLevelManager_SwitchLevelsInOneFunc_Statics::NewProp_LevelToAdd_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMyStreamLevelManager_SwitchLevelsInOneFunc_Statics::NewProp_LevelToRemove_ElementProp = { "LevelToRemove", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyStreamLevelManager_SwitchLevelsInOneFunc_Statics::NewProp_LevelToRemove_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UMyStreamLevelManager_SwitchLevelsInOneFunc_Statics::NewProp_LevelToRemove = { "LevelToRemove", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MyStreamLevelManager_eventSwitchLevelsInOneFunc_Parms, LevelToRemove), METADATA_PARAMS(Z_Construct_UFunction_UMyStreamLevelManager_SwitchLevelsInOneFunc_Statics::NewProp_LevelToRemove_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyStreamLevelManager_SwitchLevelsInOneFunc_Statics::NewProp_LevelToRemove_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMyStreamLevelManager_SwitchLevelsInOneFunc_Statics::NewProp_NotificationReceiver = { "NotificationReceiver", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MyStreamLevelManager_eventSwitchLevelsInOneFunc_Parms, NotificationReceiver), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyStreamLevelManager_SwitchLevelsInOneFunc_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyStreamLevelManager_SwitchLevelsInOneFunc_Statics::NewProp_LevelToAdd_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyStreamLevelManager_SwitchLevelsInOneFunc_Statics::NewProp_LevelToAdd,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyStreamLevelManager_SwitchLevelsInOneFunc_Statics::NewProp_LevelToRemove_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyStreamLevelManager_SwitchLevelsInOneFunc_Statics::NewProp_LevelToRemove,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyStreamLevelManager_SwitchLevelsInOneFunc_Statics::NewProp_NotificationReceiver,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyStreamLevelManager_SwitchLevelsInOneFunc_Statics::Function_MetaDataParams[] = {
		{ "Category", "StreamLevelsManager" },
		{ "Comment", "//\xe6\x95\xb4\xe5\x90\x88\n" },
		{ "ModuleRelativePath", "Public/MyStreamLevelManager.h" },
		{ "ToolTip", "\xe6\x95\xb4\xe5\x90\x88" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyStreamLevelManager_SwitchLevelsInOneFunc_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyStreamLevelManager, nullptr, "SwitchLevelsInOneFunc", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMyStreamLevelManager_SwitchLevelsInOneFunc_Statics::MyStreamLevelManager_eventSwitchLevelsInOneFunc_Parms), Z_Construct_UFunction_UMyStreamLevelManager_SwitchLevelsInOneFunc_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyStreamLevelManager_SwitchLevelsInOneFunc_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMyStreamLevelManager_SwitchLevelsInOneFunc_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyStreamLevelManager_SwitchLevelsInOneFunc_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMyStreamLevelManager_SwitchLevelsInOneFunc()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyStreamLevelManager_SwitchLevelsInOneFunc_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMyStreamLevelManager_SwitchStreamLevels_Statics
	{
		struct MyStreamLevelManager_eventSwitchStreamLevels_Parms
		{
			TSet<FName> PresetLoadLevels;
			TSet<FName> PresetRemoveLevels;
			TSet<FName> CustomLoadLevels;
			TSet<FName> CustomRemoveLevel;
			UObject* NotificationReceiver;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_PresetLoadLevels_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PresetLoadLevels_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_PresetLoadLevels;
		static const UECodeGen_Private::FNamePropertyParams NewProp_PresetRemoveLevels_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PresetRemoveLevels_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_PresetRemoveLevels;
		static const UECodeGen_Private::FNamePropertyParams NewProp_CustomLoadLevels_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomLoadLevels_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_CustomLoadLevels;
		static const UECodeGen_Private::FNamePropertyParams NewProp_CustomRemoveLevel_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomRemoveLevel_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_CustomRemoveLevel;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NotificationReceiver;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMyStreamLevelManager_SwitchStreamLevels_Statics::NewProp_PresetLoadLevels_ElementProp = { "PresetLoadLevels", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyStreamLevelManager_SwitchStreamLevels_Statics::NewProp_PresetLoadLevels_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UMyStreamLevelManager_SwitchStreamLevels_Statics::NewProp_PresetLoadLevels = { "PresetLoadLevels", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MyStreamLevelManager_eventSwitchStreamLevels_Parms, PresetLoadLevels), METADATA_PARAMS(Z_Construct_UFunction_UMyStreamLevelManager_SwitchStreamLevels_Statics::NewProp_PresetLoadLevels_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyStreamLevelManager_SwitchStreamLevels_Statics::NewProp_PresetLoadLevels_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMyStreamLevelManager_SwitchStreamLevels_Statics::NewProp_PresetRemoveLevels_ElementProp = { "PresetRemoveLevels", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyStreamLevelManager_SwitchStreamLevels_Statics::NewProp_PresetRemoveLevels_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UMyStreamLevelManager_SwitchStreamLevels_Statics::NewProp_PresetRemoveLevels = { "PresetRemoveLevels", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MyStreamLevelManager_eventSwitchStreamLevels_Parms, PresetRemoveLevels), METADATA_PARAMS(Z_Construct_UFunction_UMyStreamLevelManager_SwitchStreamLevels_Statics::NewProp_PresetRemoveLevels_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyStreamLevelManager_SwitchStreamLevels_Statics::NewProp_PresetRemoveLevels_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMyStreamLevelManager_SwitchStreamLevels_Statics::NewProp_CustomLoadLevels_ElementProp = { "CustomLoadLevels", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyStreamLevelManager_SwitchStreamLevels_Statics::NewProp_CustomLoadLevels_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UMyStreamLevelManager_SwitchStreamLevels_Statics::NewProp_CustomLoadLevels = { "CustomLoadLevels", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MyStreamLevelManager_eventSwitchStreamLevels_Parms, CustomLoadLevels), METADATA_PARAMS(Z_Construct_UFunction_UMyStreamLevelManager_SwitchStreamLevels_Statics::NewProp_CustomLoadLevels_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyStreamLevelManager_SwitchStreamLevels_Statics::NewProp_CustomLoadLevels_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMyStreamLevelManager_SwitchStreamLevels_Statics::NewProp_CustomRemoveLevel_ElementProp = { "CustomRemoveLevel", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyStreamLevelManager_SwitchStreamLevels_Statics::NewProp_CustomRemoveLevel_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UMyStreamLevelManager_SwitchStreamLevels_Statics::NewProp_CustomRemoveLevel = { "CustomRemoveLevel", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MyStreamLevelManager_eventSwitchStreamLevels_Parms, CustomRemoveLevel), METADATA_PARAMS(Z_Construct_UFunction_UMyStreamLevelManager_SwitchStreamLevels_Statics::NewProp_CustomRemoveLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyStreamLevelManager_SwitchStreamLevels_Statics::NewProp_CustomRemoveLevel_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMyStreamLevelManager_SwitchStreamLevels_Statics::NewProp_NotificationReceiver = { "NotificationReceiver", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MyStreamLevelManager_eventSwitchStreamLevels_Parms, NotificationReceiver), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyStreamLevelManager_SwitchStreamLevels_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyStreamLevelManager_SwitchStreamLevels_Statics::NewProp_PresetLoadLevels_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyStreamLevelManager_SwitchStreamLevels_Statics::NewProp_PresetLoadLevels,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyStreamLevelManager_SwitchStreamLevels_Statics::NewProp_PresetRemoveLevels_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyStreamLevelManager_SwitchStreamLevels_Statics::NewProp_PresetRemoveLevels,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyStreamLevelManager_SwitchStreamLevels_Statics::NewProp_CustomLoadLevels_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyStreamLevelManager_SwitchStreamLevels_Statics::NewProp_CustomLoadLevels,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyStreamLevelManager_SwitchStreamLevels_Statics::NewProp_CustomRemoveLevel_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyStreamLevelManager_SwitchStreamLevels_Statics::NewProp_CustomRemoveLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyStreamLevelManager_SwitchStreamLevels_Statics::NewProp_NotificationReceiver,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyStreamLevelManager_SwitchStreamLevels_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//\xe9\x98\x9f\xe5\x88\x97\xe5\x8a\xa0\xe5\x8d\xb8\xe8\xbd\xbd\xe8\x93\x9d\xe5\x9b\xbe\xe8\xb0\x83\xe7\x94\xa8\n" },
		{ "ModuleRelativePath", "Public/MyStreamLevelManager.h" },
		{ "ToolTip", "\xe9\x98\x9f\xe5\x88\x97\xe5\x8a\xa0\xe5\x8d\xb8\xe8\xbd\xbd\xe8\x93\x9d\xe5\x9b\xbe\xe8\xb0\x83\xe7\x94\xa8" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyStreamLevelManager_SwitchStreamLevels_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyStreamLevelManager, nullptr, "SwitchStreamLevels", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMyStreamLevelManager_SwitchStreamLevels_Statics::MyStreamLevelManager_eventSwitchStreamLevels_Parms), Z_Construct_UFunction_UMyStreamLevelManager_SwitchStreamLevels_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyStreamLevelManager_SwitchStreamLevels_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMyStreamLevelManager_SwitchStreamLevels_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyStreamLevelManager_SwitchStreamLevels_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMyStreamLevelManager_SwitchStreamLevels()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyStreamLevelManager_SwitchStreamLevels_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMyStreamLevelManager_TryLoadCallBackTarget_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyStreamLevelManager_TryLoadCallBackTarget_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//\xe5\x8d\x95\xe7\x8b\xac\xe5\x8a\xa0\xe8\xbd\xbd\xe3\x80\x81\xe5\x8d\xb8\xe8\xbd\xbd\xe5\x85\xb3\xe5\x8d\xa1\n" },
		{ "ModuleRelativePath", "Public/MyStreamLevelManager.h" },
		{ "ToolTip", "\xe5\x8d\x95\xe7\x8b\xac\xe5\x8a\xa0\xe8\xbd\xbd\xe3\x80\x81\xe5\x8d\xb8\xe8\xbd\xbd\xe5\x85\xb3\xe5\x8d\xa1" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyStreamLevelManager_TryLoadCallBackTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyStreamLevelManager, nullptr, "TryLoadCallBackTarget", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMyStreamLevelManager_TryLoadCallBackTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyStreamLevelManager_TryLoadCallBackTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMyStreamLevelManager_TryLoadCallBackTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyStreamLevelManager_TryLoadCallBackTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMyStreamLevelManager_TryLoadSomeLevels_Statics
	{
		struct MyStreamLevelManager_eventTryLoadSomeLevels_Parms
		{
			TSet<FName> LevelNames;
			UObject* NotifyTarget;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_LevelNames_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LevelNames_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_LevelNames;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NotifyTarget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMyStreamLevelManager_TryLoadSomeLevels_Statics::NewProp_LevelNames_ElementProp = { "LevelNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyStreamLevelManager_TryLoadSomeLevels_Statics::NewProp_LevelNames_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UMyStreamLevelManager_TryLoadSomeLevels_Statics::NewProp_LevelNames = { "LevelNames", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MyStreamLevelManager_eventTryLoadSomeLevels_Parms, LevelNames), METADATA_PARAMS(Z_Construct_UFunction_UMyStreamLevelManager_TryLoadSomeLevels_Statics::NewProp_LevelNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyStreamLevelManager_TryLoadSomeLevels_Statics::NewProp_LevelNames_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMyStreamLevelManager_TryLoadSomeLevels_Statics::NewProp_NotifyTarget = { "NotifyTarget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MyStreamLevelManager_eventTryLoadSomeLevels_Parms, NotifyTarget), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyStreamLevelManager_TryLoadSomeLevels_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyStreamLevelManager_TryLoadSomeLevels_Statics::NewProp_LevelNames_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyStreamLevelManager_TryLoadSomeLevels_Statics::NewProp_LevelNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyStreamLevelManager_TryLoadSomeLevels_Statics::NewProp_NotifyTarget,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyStreamLevelManager_TryLoadSomeLevels_Statics::Function_MetaDataParams[] = {
		{ "Category", "LoadExample" },
		{ "Comment", "//\xe5\x8d\x95\xe7\x8b\xac\xe5\x8a\xa0\xe8\xbd\xbd\xe3\x80\x81\xe5\x8d\xb8\xe8\xbd\xbd\xe5\x85\xb3\xe5\x8d\xa1\n" },
		{ "ModuleRelativePath", "Public/MyStreamLevelManager.h" },
		{ "ToolTip", "\xe5\x8d\x95\xe7\x8b\xac\xe5\x8a\xa0\xe8\xbd\xbd\xe3\x80\x81\xe5\x8d\xb8\xe8\xbd\xbd\xe5\x85\xb3\xe5\x8d\xa1" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyStreamLevelManager_TryLoadSomeLevels_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyStreamLevelManager, nullptr, "TryLoadSomeLevels", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMyStreamLevelManager_TryLoadSomeLevels_Statics::MyStreamLevelManager_eventTryLoadSomeLevels_Parms), Z_Construct_UFunction_UMyStreamLevelManager_TryLoadSomeLevels_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyStreamLevelManager_TryLoadSomeLevels_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMyStreamLevelManager_TryLoadSomeLevels_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyStreamLevelManager_TryLoadSomeLevels_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMyStreamLevelManager_TryLoadSomeLevels()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyStreamLevelManager_TryLoadSomeLevels_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMyStreamLevelManager_TryUnLoadCallBackTarget_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyStreamLevelManager_TryUnLoadCallBackTarget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MyStreamLevelManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyStreamLevelManager_TryUnLoadCallBackTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyStreamLevelManager, nullptr, "TryUnLoadCallBackTarget", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMyStreamLevelManager_TryUnLoadCallBackTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyStreamLevelManager_TryUnLoadCallBackTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMyStreamLevelManager_TryUnLoadCallBackTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyStreamLevelManager_TryUnLoadCallBackTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMyStreamLevelManager_TryUnloadSomeLevels_Statics
	{
		struct MyStreamLevelManager_eventTryUnloadSomeLevels_Parms
		{
			TSet<FName> LevelNames;
			UObject* NotifyTarget;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_LevelNames_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LevelNames_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_LevelNames;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NotifyTarget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMyStreamLevelManager_TryUnloadSomeLevels_Statics::NewProp_LevelNames_ElementProp = { "LevelNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyStreamLevelManager_TryUnloadSomeLevels_Statics::NewProp_LevelNames_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UMyStreamLevelManager_TryUnloadSomeLevels_Statics::NewProp_LevelNames = { "LevelNames", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MyStreamLevelManager_eventTryUnloadSomeLevels_Parms, LevelNames), METADATA_PARAMS(Z_Construct_UFunction_UMyStreamLevelManager_TryUnloadSomeLevels_Statics::NewProp_LevelNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyStreamLevelManager_TryUnloadSomeLevels_Statics::NewProp_LevelNames_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMyStreamLevelManager_TryUnloadSomeLevels_Statics::NewProp_NotifyTarget = { "NotifyTarget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MyStreamLevelManager_eventTryUnloadSomeLevels_Parms, NotifyTarget), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyStreamLevelManager_TryUnloadSomeLevels_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyStreamLevelManager_TryUnloadSomeLevels_Statics::NewProp_LevelNames_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyStreamLevelManager_TryUnloadSomeLevels_Statics::NewProp_LevelNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyStreamLevelManager_TryUnloadSomeLevels_Statics::NewProp_NotifyTarget,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyStreamLevelManager_TryUnloadSomeLevels_Statics::Function_MetaDataParams[] = {
		{ "Category", "UnloadExample" },
		{ "ModuleRelativePath", "Public/MyStreamLevelManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyStreamLevelManager_TryUnloadSomeLevels_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyStreamLevelManager, nullptr, "TryUnloadSomeLevels", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMyStreamLevelManager_TryUnloadSomeLevels_Statics::MyStreamLevelManager_eventTryUnloadSomeLevels_Parms), Z_Construct_UFunction_UMyStreamLevelManager_TryUnloadSomeLevels_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyStreamLevelManager_TryUnloadSomeLevels_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMyStreamLevelManager_TryUnloadSomeLevels_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyStreamLevelManager_TryUnloadSomeLevels_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMyStreamLevelManager_TryUnloadSomeLevels()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyStreamLevelManager_TryUnloadSomeLevels_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMyStreamLevelManager);
	UClass* Z_Construct_UClass_UMyStreamLevelManager_NoRegister()
	{
		return UMyStreamLevelManager::StaticClass();
	}
	struct Z_Construct_UClass_UMyStreamLevelManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnTrySwitchLevelFinished_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTrySwitchLevelFinished;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LoadFinishNotifyTarget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LoadFinishNotifyTarget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UnLoadFinishNotifyTarget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_UnLoadFinishNotifyTarget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OneFuncNotifyTarget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OneFuncNotifyTarget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SwitchAllStreamLevelFinished_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_SwitchAllStreamLevelFinished;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMyStreamLevelManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWorldSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_StreamLevelManager,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMyStreamLevelManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMyStreamLevelManager_CallBackForOneFunc, "CallBackForOneFunc" }, // 1503971313
		{ &Z_Construct_UFunction_UMyStreamLevelManager_GetCurrentStreamLevels, "GetCurrentStreamLevels" }, // 3464025156
		{ &Z_Construct_UFunction_UMyStreamLevelManager_LoadWithPresetInfo, "LoadWithPresetInfo" }, // 4021824805
		{ &Z_Construct_UFunction_UMyStreamLevelManager_SwitchCallbackInternal, "SwitchCallbackInternal" }, // 1097117737
		{ &Z_Construct_UFunction_UMyStreamLevelManager_SwitchLevelsInOneFunc, "SwitchLevelsInOneFunc" }, // 45311211
		{ &Z_Construct_UFunction_UMyStreamLevelManager_SwitchStreamLevels, "SwitchStreamLevels" }, // 1568983529
		{ &Z_Construct_UFunction_UMyStreamLevelManager_TryLoadCallBackTarget, "TryLoadCallBackTarget" }, // 2512814422
		{ &Z_Construct_UFunction_UMyStreamLevelManager_TryLoadSomeLevels, "TryLoadSomeLevels" }, // 3901787743
		{ &Z_Construct_UFunction_UMyStreamLevelManager_TryUnLoadCallBackTarget, "TryUnLoadCallBackTarget" }, // 3780347127
		{ &Z_Construct_UFunction_UMyStreamLevelManager_TryUnloadSomeLevels, "TryUnloadSomeLevels" }, // 3708402943
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyStreamLevelManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MyStreamLevelManager.h" },
		{ "ModuleRelativePath", "Public/MyStreamLevelManager.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyStreamLevelManager_Statics::NewProp_OnTrySwitchLevelFinished_MetaData[] = {
		{ "Category", "OnFinished" },
		{ "Comment", "//\xe5\x8a\xa0\xe5\x8d\xb8\xe8\xbd\xbd\xe5\xae\x8c\xe6\x88\x90\xe5\xa7\x94\xe6\x89\x98\n" },
		{ "ModuleRelativePath", "Public/MyStreamLevelManager.h" },
		{ "ToolTip", "\xe5\x8a\xa0\xe5\x8d\xb8\xe8\xbd\xbd\xe5\xae\x8c\xe6\x88\x90\xe5\xa7\x94\xe6\x89\x98" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMyStreamLevelManager_Statics::NewProp_OnTrySwitchLevelFinished = { "OnTrySwitchLevelFinished", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMyStreamLevelManager, OnTrySwitchLevelFinished), Z_Construct_UDelegateFunction_StreamLevelManager_OnTrySwitchLevelFinished__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMyStreamLevelManager_Statics::NewProp_OnTrySwitchLevelFinished_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMyStreamLevelManager_Statics::NewProp_OnTrySwitchLevelFinished_MetaData)) }; // 3040998363
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyStreamLevelManager_Statics::NewProp_LoadFinishNotifyTarget_MetaData[] = {
		{ "Comment", "//\xe5\x8a\xa0\xe5\x8d\xb8\xe8\xbd\xbd\xe9\x80\x9a\xe7\x9f\xa5\xe5\xaf\xb9\xe8\xb1\xa1\n" },
		{ "ModuleRelativePath", "Public/MyStreamLevelManager.h" },
		{ "ToolTip", "\xe5\x8a\xa0\xe5\x8d\xb8\xe8\xbd\xbd\xe9\x80\x9a\xe7\x9f\xa5\xe5\xaf\xb9\xe8\xb1\xa1" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMyStreamLevelManager_Statics::NewProp_LoadFinishNotifyTarget = { "LoadFinishNotifyTarget", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMyStreamLevelManager, LoadFinishNotifyTarget), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMyStreamLevelManager_Statics::NewProp_LoadFinishNotifyTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMyStreamLevelManager_Statics::NewProp_LoadFinishNotifyTarget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyStreamLevelManager_Statics::NewProp_UnLoadFinishNotifyTarget_MetaData[] = {
		{ "ModuleRelativePath", "Public/MyStreamLevelManager.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMyStreamLevelManager_Statics::NewProp_UnLoadFinishNotifyTarget = { "UnLoadFinishNotifyTarget", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMyStreamLevelManager, UnLoadFinishNotifyTarget), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMyStreamLevelManager_Statics::NewProp_UnLoadFinishNotifyTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMyStreamLevelManager_Statics::NewProp_UnLoadFinishNotifyTarget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyStreamLevelManager_Statics::NewProp_OneFuncNotifyTarget_MetaData[] = {
		{ "Comment", "//\xe6\x95\xb4\xe5\x90\x88\xe5\x87\xbd\xe6\x95\xb0\xe9\x80\x9a\xe7\x9f\xa5\xe5\xaf\xb9\xe8\xb1\xa1\n" },
		{ "ModuleRelativePath", "Public/MyStreamLevelManager.h" },
		{ "ToolTip", "\xe6\x95\xb4\xe5\x90\x88\xe5\x87\xbd\xe6\x95\xb0\xe9\x80\x9a\xe7\x9f\xa5\xe5\xaf\xb9\xe8\xb1\xa1" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMyStreamLevelManager_Statics::NewProp_OneFuncNotifyTarget = { "OneFuncNotifyTarget", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMyStreamLevelManager, OneFuncNotifyTarget), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMyStreamLevelManager_Statics::NewProp_OneFuncNotifyTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMyStreamLevelManager_Statics::NewProp_OneFuncNotifyTarget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyStreamLevelManager_Statics::NewProp_SwitchAllStreamLevelFinished_MetaData[] = {
		{ "Comment", "//\xe5\x85\xa8\xe9\x83\xa8\xe5\xae\x8c\xe6\x88\x90\xe6\x97\xb6\xe8\xb0\x83\xe7\x94\xa8\xe5\xa7\x94\xe6\x89\x98\n" },
		{ "ModuleRelativePath", "Public/MyStreamLevelManager.h" },
		{ "ToolTip", "\xe5\x85\xa8\xe9\x83\xa8\xe5\xae\x8c\xe6\x88\x90\xe6\x97\xb6\xe8\xb0\x83\xe7\x94\xa8\xe5\xa7\x94\xe6\x89\x98" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMyStreamLevelManager_Statics::NewProp_SwitchAllStreamLevelFinished = { "SwitchAllStreamLevelFinished", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMyStreamLevelManager, SwitchAllStreamLevelFinished), Z_Construct_UDelegateFunction_StreamLevelManager_OnSwitchAllStreamLevelFinished__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMyStreamLevelManager_Statics::NewProp_SwitchAllStreamLevelFinished_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMyStreamLevelManager_Statics::NewProp_SwitchAllStreamLevelFinished_MetaData)) }; // 3815667115
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMyStreamLevelManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyStreamLevelManager_Statics::NewProp_OnTrySwitchLevelFinished,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyStreamLevelManager_Statics::NewProp_LoadFinishNotifyTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyStreamLevelManager_Statics::NewProp_UnLoadFinishNotifyTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyStreamLevelManager_Statics::NewProp_OneFuncNotifyTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyStreamLevelManager_Statics::NewProp_SwitchAllStreamLevelFinished,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMyStreamLevelManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyStreamLevelManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyStreamLevelManager_Statics::ClassParams = {
		&UMyStreamLevelManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMyStreamLevelManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMyStreamLevelManager_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMyStreamLevelManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMyStreamLevelManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMyStreamLevelManager()
	{
		if (!Z_Registration_Info_UClass_UMyStreamLevelManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyStreamLevelManager.OuterSingleton, Z_Construct_UClass_UMyStreamLevelManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMyStreamLevelManager.OuterSingleton;
	}
	template<> STREAMLEVELMANAGER_API UClass* StaticClass<UMyStreamLevelManager>()
	{
		return UMyStreamLevelManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMyStreamLevelManager);
	UMyStreamLevelManager::~UMyStreamLevelManager() {}
	struct Z_CompiledInDeferFile_FID_Test501cpp3_Plugins_StreamLevelManager_Source_StreamLevelManager_Public_MyStreamLevelManager_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Test501cpp3_Plugins_StreamLevelManager_Source_StreamLevelManager_Public_MyStreamLevelManager_h_Statics::ScriptStructInfo[] = {
		{ FSwitchInfo::StaticStruct, Z_Construct_UScriptStruct_FSwitchInfo_Statics::NewStructOps, TEXT("SwitchInfo"), &Z_Registration_Info_UScriptStruct_SwitchInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSwitchInfo), 1965077633U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Test501cpp3_Plugins_StreamLevelManager_Source_StreamLevelManager_Public_MyStreamLevelManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMyStreamLevelManager, UMyStreamLevelManager::StaticClass, TEXT("UMyStreamLevelManager"), &Z_Registration_Info_UClass_UMyStreamLevelManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyStreamLevelManager), 215564218U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Test501cpp3_Plugins_StreamLevelManager_Source_StreamLevelManager_Public_MyStreamLevelManager_h_3115869568(TEXT("/Script/StreamLevelManager"),
		Z_CompiledInDeferFile_FID_Test501cpp3_Plugins_StreamLevelManager_Source_StreamLevelManager_Public_MyStreamLevelManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Test501cpp3_Plugins_StreamLevelManager_Source_StreamLevelManager_Public_MyStreamLevelManager_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Test501cpp3_Plugins_StreamLevelManager_Source_StreamLevelManager_Public_MyStreamLevelManager_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Test501cpp3_Plugins_StreamLevelManager_Source_StreamLevelManager_Public_MyStreamLevelManager_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
