// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StreamLevelManager/Public/StreamLevelAction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStreamLevelAction() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	STREAMLEVELMANAGER_API UClass* Z_Construct_UClass_UStreamLevelAction();
	STREAMLEVELMANAGER_API UClass* Z_Construct_UClass_UStreamLevelAction_NoRegister();
	UPackage* Z_Construct_UPackage__Script_StreamLevelManager();
// End Cross Module References
	DEFINE_FUNCTION(IStreamLevelAction::execLevelSwitchFinished)
	{
		P_GET_UBOOL(Z_Param_bFinishAll);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LevelSwitchFinished_Implementation(Z_Param_bFinishAll);
		P_NATIVE_END;
	}
	struct StreamLevelAction_eventLevelSwitchFinished_Parms
	{
		bool bFinishAll;
	};
	void IStreamLevelAction::LevelSwitchFinished(bool bFinishAll)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_LevelSwitchFinished instead.");
	}
	void UStreamLevelAction::StaticRegisterNativesUStreamLevelAction()
	{
		UClass* Class = UStreamLevelAction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "LevelSwitchFinished", &IStreamLevelAction::execLevelSwitchFinished },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UStreamLevelAction_LevelSwitchFinished_Statics
	{
		static void NewProp_bFinishAll_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFinishAll;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UStreamLevelAction_LevelSwitchFinished_Statics::NewProp_bFinishAll_SetBit(void* Obj)
	{
		((StreamLevelAction_eventLevelSwitchFinished_Parms*)Obj)->bFinishAll = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStreamLevelAction_LevelSwitchFinished_Statics::NewProp_bFinishAll = { "bFinishAll", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(StreamLevelAction_eventLevelSwitchFinished_Parms), &Z_Construct_UFunction_UStreamLevelAction_LevelSwitchFinished_Statics::NewProp_bFinishAll_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStreamLevelAction_LevelSwitchFinished_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStreamLevelAction_LevelSwitchFinished_Statics::NewProp_bFinishAll,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStreamLevelAction_LevelSwitchFinished_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StreamLevelAction.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStreamLevelAction_LevelSwitchFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStreamLevelAction, nullptr, "LevelSwitchFinished", nullptr, nullptr, sizeof(StreamLevelAction_eventLevelSwitchFinished_Parms), Z_Construct_UFunction_UStreamLevelAction_LevelSwitchFinished_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStreamLevelAction_LevelSwitchFinished_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStreamLevelAction_LevelSwitchFinished_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStreamLevelAction_LevelSwitchFinished_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStreamLevelAction_LevelSwitchFinished()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStreamLevelAction_LevelSwitchFinished_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStreamLevelAction);
	UClass* Z_Construct_UClass_UStreamLevelAction_NoRegister()
	{
		return UStreamLevelAction::StaticClass();
	}
	struct Z_Construct_UClass_UStreamLevelAction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStreamLevelAction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_StreamLevelManager,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UStreamLevelAction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UStreamLevelAction_LevelSwitchFinished, "LevelSwitchFinished" }, // 661065405
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStreamLevelAction_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StreamLevelAction.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStreamLevelAction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IStreamLevelAction>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UStreamLevelAction_Statics::ClassParams = {
		&UStreamLevelAction::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UStreamLevelAction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStreamLevelAction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStreamLevelAction()
	{
		if (!Z_Registration_Info_UClass_UStreamLevelAction.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStreamLevelAction.OuterSingleton, Z_Construct_UClass_UStreamLevelAction_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UStreamLevelAction.OuterSingleton;
	}
	template<> STREAMLEVELMANAGER_API UClass* StaticClass<UStreamLevelAction>()
	{
		return UStreamLevelAction::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStreamLevelAction);
	UStreamLevelAction::~UStreamLevelAction() {}
	static FName NAME_UStreamLevelAction_LevelSwitchFinished = FName(TEXT("LevelSwitchFinished"));
	void IStreamLevelAction::Execute_LevelSwitchFinished(UObject* O, bool bFinishAll)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UStreamLevelAction::StaticClass()));
		StreamLevelAction_eventLevelSwitchFinished_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UStreamLevelAction_LevelSwitchFinished);
		if (Func)
		{
			Parms.bFinishAll=bFinishAll;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IStreamLevelAction*)(O->GetNativeInterfaceAddress(UStreamLevelAction::StaticClass())))
		{
			I->LevelSwitchFinished_Implementation(bFinishAll);
		}
	}
	struct Z_CompiledInDeferFile_FID_Test501cpp3_Plugins_StreamLevelManager_Source_StreamLevelManager_Public_StreamLevelAction_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Test501cpp3_Plugins_StreamLevelManager_Source_StreamLevelManager_Public_StreamLevelAction_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UStreamLevelAction, UStreamLevelAction::StaticClass, TEXT("UStreamLevelAction"), &Z_Registration_Info_UClass_UStreamLevelAction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStreamLevelAction), 1733988688U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Test501cpp3_Plugins_StreamLevelManager_Source_StreamLevelManager_Public_StreamLevelAction_h_2610409529(TEXT("/Script/StreamLevelManager"),
		Z_CompiledInDeferFile_FID_Test501cpp3_Plugins_StreamLevelManager_Source_StreamLevelManager_Public_StreamLevelAction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Test501cpp3_Plugins_StreamLevelManager_Source_StreamLevelManager_Public_StreamLevelAction_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
