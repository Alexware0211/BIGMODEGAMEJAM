// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BigModeJam/BigModeJamGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBigModeJamGameMode() {}
// Cross Module References
	BIGMODEJAM_API UClass* Z_Construct_UClass_ABigModeJamGameMode();
	BIGMODEJAM_API UClass* Z_Construct_UClass_ABigModeJamGameMode_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_BigModeJam();
// End Cross Module References
	void ABigModeJamGameMode::StaticRegisterNativesABigModeJamGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABigModeJamGameMode);
	UClass* Z_Construct_UClass_ABigModeJamGameMode_NoRegister()
	{
		return ABigModeJamGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ABigModeJamGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABigModeJamGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_BigModeJam,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABigModeJamGameMode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABigModeJamGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "BigModeJamGameMode.h" },
		{ "ModuleRelativePath", "BigModeJamGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABigModeJamGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABigModeJamGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABigModeJamGameMode_Statics::ClassParams = {
		&ABigModeJamGameMode::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABigModeJamGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ABigModeJamGameMode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ABigModeJamGameMode()
	{
		if (!Z_Registration_Info_UClass_ABigModeJamGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABigModeJamGameMode.OuterSingleton, Z_Construct_UClass_ABigModeJamGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABigModeJamGameMode.OuterSingleton;
	}
	template<> BIGMODEJAM_API UClass* StaticClass<ABigModeJamGameMode>()
	{
		return ABigModeJamGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABigModeJamGameMode);
	ABigModeJamGameMode::~ABigModeJamGameMode() {}
	struct Z_CompiledInDeferFile_FID_Users_alexander_wahrensted_OneDrive___Change_Maker_Education_Dokument_Unreal_Projects_bmgj_BIGMODEGAMEJAM_BigModeJam_Source_BigModeJam_BigModeJamGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_alexander_wahrensted_OneDrive___Change_Maker_Education_Dokument_Unreal_Projects_bmgj_BIGMODEGAMEJAM_BigModeJam_Source_BigModeJam_BigModeJamGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABigModeJamGameMode, ABigModeJamGameMode::StaticClass, TEXT("ABigModeJamGameMode"), &Z_Registration_Info_UClass_ABigModeJamGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABigModeJamGameMode), 3704928834U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_alexander_wahrensted_OneDrive___Change_Maker_Education_Dokument_Unreal_Projects_bmgj_BIGMODEGAMEJAM_BigModeJam_Source_BigModeJam_BigModeJamGameMode_h_4012693625(TEXT("/Script/BigModeJam"),
		Z_CompiledInDeferFile_FID_Users_alexander_wahrensted_OneDrive___Change_Maker_Education_Dokument_Unreal_Projects_bmgj_BIGMODEGAMEJAM_BigModeJam_Source_BigModeJam_BigModeJamGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_alexander_wahrensted_OneDrive___Change_Maker_Education_Dokument_Unreal_Projects_bmgj_BIGMODEGAMEJAM_BigModeJam_Source_BigModeJam_BigModeJamGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
