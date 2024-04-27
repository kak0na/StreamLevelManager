// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StreamLevelManager/Public/TrySwitchLevelAction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTrySwitchLevelAction() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	STREAMLEVELMANAGER_API UClass* Z_Construct_UClass_UTrySwitchLevelAction();
	STREAMLEVELMANAGER_API UClass* Z_Construct_UClass_UTrySwitchLevelAction_NoRegister();
	UPackage* Z_Construct_UPackage__Script_StreamLevelManager();
// End Cross Module References
	struct TrySwitchLevelAction_eventTrySwitchFinished_Parms
	{
		bool bIsLoadCommand;
	};
	void ITrySwitchLevelAction::TrySwitchFinished(bool bIsLoadCommand)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_TrySwitchFinished instead.");
	}
	void UTrySwitchLevelAction::StaticRegisterNativesUTrySwitchLevelAction()
	{
	}
	struct Z_Construct_UFunction_UTrySwitchLevelAction_TrySwitchFinished_Statics
	{
		static void NewProp_bIsLoadCommand_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsLoadCommand;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UTrySwitchLevelAction_TrySwitchFinished_Statics::NewProp_bIsLoadCommand_SetBit(void* Obj)
	{
		((TrySwitchLevelAction_eventTrySwitchFinished_Parms*)Obj)->bIsLoadCommand = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTrySwitchLevelAction_TrySwitchFinished_Statics::NewProp_bIsLoadCommand = { "bIsLoadCommand", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(TrySwitchLevelAction_eventTrySwitchFinished_Parms), &Z_Construct_UFunction_UTrySwitchLevelAction_TrySwitchFinished_Statics::NewProp_bIsLoadCommand_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTrySwitchLevelAction_TrySwitchFinished_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTrySwitchLevelAction_TrySwitchFinished_Statics::NewProp_bIsLoadCommand,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTrySwitchLevelAction_TrySwitchFinished_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TrySwitchLevelAction.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTrySwitchLevelAction_TrySwitchFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTrySwitchLevelAction, nullptr, "TrySwitchFinished", nullptr, nullptr, sizeof(TrySwitchLevelAction_eventTrySwitchFinished_Parms), Z_Construct_UFunction_UTrySwitchLevelAction_TrySwitchFinished_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTrySwitchLevelAction_TrySwitchFinished_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTrySwitchLevelAction_TrySwitchFinished_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTrySwitchLevelAction_TrySwitchFinished_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTrySwitchLevelAction_TrySwitchFinished()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTrySwitchLevelAction_TrySwitchFinished_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTrySwitchLevelAction);
	UClass* Z_Construct_UClass_UTrySwitchLevelAction_NoRegister()
	{
		return UTrySwitchLevelAction::StaticClass();
	}
	struct Z_Construct_UClass_UTrySwitchLevelAction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTrySwitchLevelAction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_StreamLevelManager,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTrySwitchLevelAction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTrySwitchLevelAction_TrySwitchFinished, "TrySwitchFinished" }, // 2618887059
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTrySwitchLevelAction_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TrySwitchLevelAction.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTrySwitchLevelAction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ITrySwitchLevelAction>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTrySwitchLevelAction_Statics::ClassParams = {
		&UTrySwitchLevelAction::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UTrySwitchLevelAction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTrySwitchLevelAction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTrySwitchLevelAction()
	{
		if (!Z_Registration_Info_UClass_UTrySwitchLevelAction.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTrySwitchLevelAction.OuterSingleton, Z_Construct_UClass_UTrySwitchLevelAction_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTrySwitchLevelAction.OuterSingleton;
	}
	template<> STREAMLEVELMANAGER_API UClass* StaticClass<UTrySwitchLevelAction>()
	{
		return UTrySwitchLevelAction::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTrySwitchLevelAction);
	UTrySwitchLevelAction::~UTrySwitchLevelAction() {}
	static FName NAME_UTrySwitchLevelAction_TrySwitchFinished = FName(TEXT("TrySwitchFinished"));
	void ITrySwitchLevelAction::Execute_TrySwitchFinished(UObject* O, bool bIsLoadCommand)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UTrySwitchLevelAction::StaticClass()));
		TrySwitchLevelAction_eventTrySwitchFinished_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UTrySwitchLevelAction_TrySwitchFinished);
		if (Func)
		{
			Parms.bIsLoadCommand=bIsLoadCommand;
			O->ProcessEvent(Func, &Parms);
		}
	}
	struct Z_CompiledInDeferFile_FID_Test501cpp3_Plugins_StreamLevelManager_Source_StreamLevelManager_Public_TrySwitchLevelAction_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Test501cpp3_Plugins_StreamLevelManager_Source_StreamLevelManager_Public_TrySwitchLevelAction_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTrySwitchLevelAction, UTrySwitchLevelAction::StaticClass, TEXT("UTrySwitchLevelAction"), &Z_Registration_Info_UClass_UTrySwitchLevelAction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTrySwitchLevelAction), 1535574762U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Test501cpp3_Plugins_StreamLevelManager_Source_StreamLevelManager_Public_TrySwitchLevelAction_h_3068105544(TEXT("/Script/StreamLevelManager"),
		Z_CompiledInDeferFile_FID_Test501cpp3_Plugins_StreamLevelManager_Source_StreamLevelManager_Public_TrySwitchLevelAction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Test501cpp3_Plugins_StreamLevelManager_Source_StreamLevelManager_Public_TrySwitchLevelAction_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
