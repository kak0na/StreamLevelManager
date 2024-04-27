// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "StreamLevelAction.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STREAMLEVELMANAGER_StreamLevelAction_generated_h
#error "StreamLevelAction.generated.h already included, missing '#pragma once' in StreamLevelAction.h"
#endif
#define STREAMLEVELMANAGER_StreamLevelAction_generated_h

#define FID_Test501cpp3_Plugins_StreamLevelManager_Source_StreamLevelManager_Public_StreamLevelAction_h_13_SPARSE_DATA
#define FID_Test501cpp3_Plugins_StreamLevelManager_Source_StreamLevelManager_Public_StreamLevelAction_h_13_RPC_WRAPPERS \
	virtual void LevelSwitchFinished_Implementation(bool bFinishAll) {}; \
 \
	DECLARE_FUNCTION(execLevelSwitchFinished);


#define FID_Test501cpp3_Plugins_StreamLevelManager_Source_StreamLevelManager_Public_StreamLevelAction_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void LevelSwitchFinished_Implementation(bool bFinishAll) {}; \
 \
	DECLARE_FUNCTION(execLevelSwitchFinished);


#define FID_Test501cpp3_Plugins_StreamLevelManager_Source_StreamLevelManager_Public_StreamLevelAction_h_13_ACCESSORS
#define FID_Test501cpp3_Plugins_StreamLevelManager_Source_StreamLevelManager_Public_StreamLevelAction_h_13_CALLBACK_WRAPPERS
#define FID_Test501cpp3_Plugins_StreamLevelManager_Source_StreamLevelManager_Public_StreamLevelAction_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStreamLevelAction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStreamLevelAction) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStreamLevelAction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStreamLevelAction); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStreamLevelAction(UStreamLevelAction&&); \
	NO_API UStreamLevelAction(const UStreamLevelAction&); \
public: \
	NO_API virtual ~UStreamLevelAction();


#define FID_Test501cpp3_Plugins_StreamLevelManager_Source_StreamLevelManager_Public_StreamLevelAction_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStreamLevelAction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStreamLevelAction(UStreamLevelAction&&); \
	NO_API UStreamLevelAction(const UStreamLevelAction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStreamLevelAction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStreamLevelAction); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStreamLevelAction) \
	NO_API virtual ~UStreamLevelAction();


#define FID_Test501cpp3_Plugins_StreamLevelManager_Source_StreamLevelManager_Public_StreamLevelAction_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUStreamLevelAction(); \
	friend struct Z_Construct_UClass_UStreamLevelAction_Statics; \
public: \
	DECLARE_CLASS(UStreamLevelAction, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/StreamLevelManager"), NO_API) \
	DECLARE_SERIALIZER(UStreamLevelAction)


#define FID_Test501cpp3_Plugins_StreamLevelManager_Source_StreamLevelManager_Public_StreamLevelAction_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Test501cpp3_Plugins_StreamLevelManager_Source_StreamLevelManager_Public_StreamLevelAction_h_13_GENERATED_UINTERFACE_BODY() \
	FID_Test501cpp3_Plugins_StreamLevelManager_Source_StreamLevelManager_Public_StreamLevelAction_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Test501cpp3_Plugins_StreamLevelManager_Source_StreamLevelManager_Public_StreamLevelAction_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Test501cpp3_Plugins_StreamLevelManager_Source_StreamLevelManager_Public_StreamLevelAction_h_13_GENERATED_UINTERFACE_BODY() \
	FID_Test501cpp3_Plugins_StreamLevelManager_Source_StreamLevelManager_Public_StreamLevelAction_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Test501cpp3_Plugins_StreamLevelManager_Source_StreamLevelManager_Public_StreamLevelAction_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IStreamLevelAction() {} \
public: \
	typedef UStreamLevelAction UClassType; \
	typedef IStreamLevelAction ThisClass; \
	static void Execute_LevelSwitchFinished(UObject* O, bool bFinishAll); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Test501cpp3_Plugins_StreamLevelManager_Source_StreamLevelManager_Public_StreamLevelAction_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IStreamLevelAction() {} \
public: \
	typedef UStreamLevelAction UClassType; \
	typedef IStreamLevelAction ThisClass; \
	static void Execute_LevelSwitchFinished(UObject* O, bool bFinishAll); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Test501cpp3_Plugins_StreamLevelManager_Source_StreamLevelManager_Public_StreamLevelAction_h_10_PROLOG
#define FID_Test501cpp3_Plugins_StreamLevelManager_Source_StreamLevelManager_Public_StreamLevelAction_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Test501cpp3_Plugins_StreamLevelManager_Source_StreamLevelManager_Public_StreamLevelAction_h_13_SPARSE_DATA \
	FID_Test501cpp3_Plugins_StreamLevelManager_Source_StreamLevelManager_Public_StreamLevelAction_h_13_RPC_WRAPPERS \
	FID_Test501cpp3_Plugins_StreamLevelManager_Source_StreamLevelManager_Public_StreamLevelAction_h_13_ACCESSORS \
	FID_Test501cpp3_Plugins_StreamLevelManager_Source_StreamLevelManager_Public_StreamLevelAction_h_13_CALLBACK_WRAPPERS \
	FID_Test501cpp3_Plugins_StreamLevelManager_Source_StreamLevelManager_Public_StreamLevelAction_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Test501cpp3_Plugins_StreamLevelManager_Source_StreamLevelManager_Public_StreamLevelAction_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Test501cpp3_Plugins_StreamLevelManager_Source_StreamLevelManager_Public_StreamLevelAction_h_13_SPARSE_DATA \
	FID_Test501cpp3_Plugins_StreamLevelManager_Source_StreamLevelManager_Public_StreamLevelAction_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Test501cpp3_Plugins_StreamLevelManager_Source_StreamLevelManager_Public_StreamLevelAction_h_13_ACCESSORS \
	FID_Test501cpp3_Plugins_StreamLevelManager_Source_StreamLevelManager_Public_StreamLevelAction_h_13_CALLBACK_WRAPPERS \
	FID_Test501cpp3_Plugins_StreamLevelManager_Source_StreamLevelManager_Public_StreamLevelAction_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STREAMLEVELMANAGER_API UClass* StaticClass<class UStreamLevelAction>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Test501cpp3_Plugins_StreamLevelManager_Source_StreamLevelManager_Public_StreamLevelAction_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
