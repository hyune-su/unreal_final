// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SAMPLE_ABPlayerController_generated_h
#error "ABPlayerController.generated.h already included, missing '#pragma once' in ABPlayerController.h"
#endif
#define SAMPLE_ABPlayerController_generated_h

#define Sample_Source_Sample_ABPlayerController_h_15_SPARSE_DATA
#define Sample_Source_Sample_ABPlayerController_h_15_RPC_WRAPPERS
#define Sample_Source_Sample_ABPlayerController_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define Sample_Source_Sample_ABPlayerController_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAABPlayerController(); \
	friend struct Z_Construct_UClass_AABPlayerController_Statics; \
public: \
	DECLARE_CLASS(AABPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Sample"), NO_API) \
	DECLARE_SERIALIZER(AABPlayerController)


#define Sample_Source_Sample_ABPlayerController_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAABPlayerController(); \
	friend struct Z_Construct_UClass_AABPlayerController_Statics; \
public: \
	DECLARE_CLASS(AABPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Sample"), NO_API) \
	DECLARE_SERIALIZER(AABPlayerController)


#define Sample_Source_Sample_ABPlayerController_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AABPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AABPlayerController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AABPlayerController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AABPlayerController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AABPlayerController(AABPlayerController&&); \
	NO_API AABPlayerController(const AABPlayerController&); \
public:


#define Sample_Source_Sample_ABPlayerController_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AABPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AABPlayerController(AABPlayerController&&); \
	NO_API AABPlayerController(const AABPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AABPlayerController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AABPlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AABPlayerController)


#define Sample_Source_Sample_ABPlayerController_h_15_PRIVATE_PROPERTY_OFFSET
#define Sample_Source_Sample_ABPlayerController_h_12_PROLOG
#define Sample_Source_Sample_ABPlayerController_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Sample_Source_Sample_ABPlayerController_h_15_PRIVATE_PROPERTY_OFFSET \
	Sample_Source_Sample_ABPlayerController_h_15_SPARSE_DATA \
	Sample_Source_Sample_ABPlayerController_h_15_RPC_WRAPPERS \
	Sample_Source_Sample_ABPlayerController_h_15_INCLASS \
	Sample_Source_Sample_ABPlayerController_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Sample_Source_Sample_ABPlayerController_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Sample_Source_Sample_ABPlayerController_h_15_PRIVATE_PROPERTY_OFFSET \
	Sample_Source_Sample_ABPlayerController_h_15_SPARSE_DATA \
	Sample_Source_Sample_ABPlayerController_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Sample_Source_Sample_ABPlayerController_h_15_INCLASS_NO_PURE_DECLS \
	Sample_Source_Sample_ABPlayerController_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SAMPLE_API UClass* StaticClass<class AABPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Sample_Source_Sample_ABPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
