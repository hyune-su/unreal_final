// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Final_Report/Final_ReportGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFinal_ReportGameMode() {}
// Cross Module References
	FINAL_REPORT_API UClass* Z_Construct_UClass_AFinal_ReportGameMode_NoRegister();
	FINAL_REPORT_API UClass* Z_Construct_UClass_AFinal_ReportGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Final_Report();
// End Cross Module References
	void AFinal_ReportGameMode::StaticRegisterNativesAFinal_ReportGameMode()
	{
	}
	UClass* Z_Construct_UClass_AFinal_ReportGameMode_NoRegister()
	{
		return AFinal_ReportGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AFinal_ReportGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFinal_ReportGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Final_Report,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFinal_ReportGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Final_ReportGameMode.h" },
		{ "ModuleRelativePath", "Final_ReportGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFinal_ReportGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFinal_ReportGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFinal_ReportGameMode_Statics::ClassParams = {
		&AFinal_ReportGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AFinal_ReportGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFinal_ReportGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFinal_ReportGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFinal_ReportGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFinal_ReportGameMode, 4127659760);
	template<> FINAL_REPORT_API UClass* StaticClass<AFinal_ReportGameMode>()
	{
		return AFinal_ReportGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFinal_ReportGameMode(Z_Construct_UClass_AFinal_ReportGameMode, &AFinal_ReportGameMode::StaticClass, TEXT("/Script/Final_Report"), TEXT("AFinal_ReportGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFinal_ReportGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
