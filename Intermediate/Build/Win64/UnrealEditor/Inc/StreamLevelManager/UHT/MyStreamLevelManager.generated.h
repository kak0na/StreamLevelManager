// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MyStreamLevelManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
#ifdef STREAMLEVELMANAGER_MyStreamLevelManager_generated_h
#error "MyStreamLevelManager.generated.h already included, missing '#pragma once' in MyStreamLevelManager.h"
#endif
#define STREAMLEVELMANAGER_MyStreamLevelManager_generated_h

#define FID_Test501cpp3_Plugins_StreamLevelManager_Source_StreamLevelManager_Public_MyStreamLevelManager_h_9_DELEGATE \
static inline void FOnSwitchAllStreamLevelFinished_DelegateWrapper(const FMulticastScriptDelegate& OnSwitchAllStreamLevelFinished) \
{ \
	OnSwitchAllStreamLevelFinished.ProcessMulticastDelegate<UObject>(NULL); \
}


#define FID_Test501cpp3_Plugins_StreamLevelManager_Source_StreamLevelManager_Public_MyStreamLevelManager_h_11_DELEGATE \
struct _Script_StreamLevelManager_eventOnTrySwitchLevelFinished_Parms \
{ \
	bool bIsLoadCommand; \
}; \
static inline void FOnTrySwitchLevelFinished_DelegateWrapper(const FMulticastScriptDelegate& OnTrySwitchLevelFinished, bool bIsLoadCommand) \
{ \
	_Script_StreamLevelManager_eventOnTrySwitchLevelFinished_Parms Parms; \
	Parms.bIsLoadCommand=bIsLoadCommand ? true : false; \
	OnTrySwitchLevelFinished.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Test501cpp3_Plugins_StreamLevelManager_Source_StreamLevelManager_Public_MyStreamLevelManager_h_16_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSwitchInfo_Statics; \
	STREAMLEVELMANAGER_API static class UScriptStruct* StaticStruct();


template<> STREAMLEVELMANAGER_API UScriptStruct* StaticStruct<struct FSwitchInfo>();

#define FID_Test501cpp3_Plugins_StreamLevelManager_Source_StreamLevelManager_Public_MyStreamLevelManager_h_27_SPARSE_DATA
#define FID_Test501cpp3_Plugins_StreamLevelManager_Source_StreamLevelManager_Public_MyStreamLevelManager_h_27_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSwitchStreamLevels); \
	DECLARE_FUNCTION(execSwitchCallbackInternal); \
	DECLARE_FUNCTION(execLoadWithPresetInfo); \
	DECLARE_FUNCTION(execGetCurrentStreamLevels); \
	DECLARE_FUNCTION(execSwitchLevelsInOneFunc); \
	DECLARE_FUNCTION(execCallBackForOneFunc); \
	DECLARE_FUNCTION(execTryUnLoadCallBackTarget); \
	DECLARE_FUNCTION(execTryLoadCallBackTarget); \
	DECLARE_FUNCTION(execTryUnloadSomeLevels); \
	DECLARE_FUNCTION(execTryLoadSomeLevels);


#define FID_Test501cpp3_Plugins_StreamLevelManager_Source_StreamLevelManager_Public_MyStreamLevelManager_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSwitchStreamLevels); \
	DECLARE_FUNCTION(execSwitchCallbackInternal); \
	DECLARE_FUNCTION(execLoadWithPresetInfo); \
	DECLARE_FUNCTION(execGetCurrentStreamLevels); \
	DECLARE_FUNCTION(execSwitchLevelsInOneFunc); \
	DECLARE_FUNCTION(execCallBackForOneFunc); \
	DECLARE_FUNCTION(execTryUnLoadCallBackTarget); \
	DECLARE_FUNCTION(execTryLoadCallBackTarget); \
	DECLARE_FUNCTION(execTryUnloadSomeLevels); \
	DECLARE_FUNCTION(execTryLoadSomeLevels);


#define FID_Test501cpp3_Plugins_StreamLevelManager_Source_StreamLevelManager_Public_MyStreamLevelManager_h_27_ACCESSORS
#define FID_Test501cpp3_Plugins_StreamLevelManager_Source_StreamLevelManager_Public_MyStreamLevelManager_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMyStreamLevelManager(); \
	friend struct Z_Construct_UClass_UMyStreamLevelManager_Statics; \
public: \
	DECLARE_CLASS(UMyStreamLevelManager, UWorldSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/StreamLevelManager"), NO_API) \
	DECLARE_SERIALIZER(UMyStreamLevelManager)


#define FID_Test501cpp3_Plugins_StreamLevelManager_Source_StreamLevelManager_Public_MyStreamLevelManager_h_27_INCLASS \
private: \
	static void StaticRegisterNativesUMyStreamLevelManager(); \
	friend struct Z_Construct_UClass_UMyStreamLevelManager_Statics; \
public: \
	DECLARE_CLASS(UMyStreamLevelManager, UWorldSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/StreamLevelManager"), NO_API) \
	DECLARE_SERIALIZER(UMyStreamLevelManager)


#define FID_Test501cpp3_Plugins_StreamLevelManager_Source_StreamLevelManager_Public_MyStreamLevelManager_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMyStreamLevelManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMyStreamLevelManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyStreamLevelManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyStreamLevelManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMyStreamLevelManager(UMyStreamLevelManager&&); \
	NO_API UMyStreamLevelManager(const UMyStreamLevelManager&); \
public: \
	NO_API virtual ~UMyStreamLevelManager();


#define FID_Test501cpp3_Plugins_StreamLevelManager_Source_StreamLevelManager_Public_MyStreamLevelManager_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMyStreamLevelManager() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMyStreamLevelManager(UMyStreamLevelManager&&); \
	NO_API UMyStreamLevelManager(const UMyStreamLevelManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyStreamLevelManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyStreamLevelManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMyStreamLevelManager) \
	NO_API virtual ~UMyStreamLevelManager();


#define FID_Test501cpp3_Plugins_StreamLevelManager_Source_StreamLevelManager_Public_MyStreamLevelManager_h_24_PROLOG
#define FID_Test501cpp3_Plugins_StreamLevelManager_Source_StreamLevelManager_Public_MyStreamLevelManager_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Test501cpp3_Plugins_StreamLevelManager_Source_StreamLevelManager_Public_MyStreamLevelManager_h_27_SPARSE_DATA \
	FID_Test501cpp3_Plugins_StreamLevelManager_Source_StreamLevelManager_Public_MyStreamLevelManager_h_27_RPC_WRAPPERS \
	FID_Test501cpp3_Plugins_StreamLevelManager_Source_StreamLevelManager_Public_MyStreamLevelManager_h_27_ACCESSORS \
	FID_Test501cpp3_Plugins_StreamLevelManager_Source_StreamLevelManager_Public_MyStreamLevelManager_h_27_INCLASS \
	FID_Test501cpp3_Plugins_StreamLevelManager_Source_StreamLevelManager_Public_MyStreamLevelManager_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Test501cpp3_Plugins_StreamLevelManager_Source_StreamLevelManager_Public_MyStreamLevelManager_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Test501cpp3_Plugins_StreamLevelManager_Source_StreamLevelManager_Public_MyStreamLevelManager_h_27_SPARSE_DATA \
	FID_Test501cpp3_Plugins_StreamLevelManager_Source_StreamLevelManager_Public_MyStreamLevelManager_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Test501cpp3_Plugins_StreamLevelManager_Source_StreamLevelManager_Public_MyStreamLevelManager_h_27_ACCESSORS \
	FID_Test501cpp3_Plugins_StreamLevelManager_Source_StreamLevelManager_Public_MyStreamLevelManager_h_27_INCLASS_NO_PURE_DECLS \
	FID_Test501cpp3_Plugins_StreamLevelManager_Source_StreamLevelManager_Public_MyStreamLevelManager_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STREAMLEVELMANAGER_API UClass* StaticClass<class UMyStreamLevelManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Test501cpp3_Plugins_StreamLevelManager_Source_StreamLevelManager_Public_MyStreamLevelManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
