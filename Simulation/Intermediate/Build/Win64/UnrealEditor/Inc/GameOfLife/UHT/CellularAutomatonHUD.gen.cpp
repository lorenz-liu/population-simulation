// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameOfLife/Public/CellularAutomatonHUD.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCellularAutomatonHUD() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	GAMEOFLIFE_API UClass* Z_Construct_UClass_ACellularAutomatonHUD();
	GAMEOFLIFE_API UClass* Z_Construct_UClass_ACellularAutomatonHUD_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GameOfLife();
// End Cross Module References
	void ACellularAutomatonHUD::StaticRegisterNativesACellularAutomatonHUD()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACellularAutomatonHUD);
	UClass* Z_Construct_UClass_ACellularAutomatonHUD_NoRegister()
	{
		return ACellularAutomatonHUD::StaticClass();
	}
	struct Z_Construct_UClass_ACellularAutomatonHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACellularAutomatonHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_GameOfLife,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACellularAutomatonHUD_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACellularAutomatonHUD_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Shows the values of the Cellular Automaton in the scene\n */" },
#endif
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "CellularAutomatonHUD.h" },
		{ "ModuleRelativePath", "Public/CellularAutomatonHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Shows the values of the Cellular Automaton in the scene" },
#endif
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACellularAutomatonHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACellularAutomatonHUD>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACellularAutomatonHUD_Statics::ClassParams = {
		&ACellularAutomatonHUD::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACellularAutomatonHUD_Statics::Class_MetaDataParams), Z_Construct_UClass_ACellularAutomatonHUD_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ACellularAutomatonHUD()
	{
		if (!Z_Registration_Info_UClass_ACellularAutomatonHUD.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACellularAutomatonHUD.OuterSingleton, Z_Construct_UClass_ACellularAutomatonHUD_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACellularAutomatonHUD.OuterSingleton;
	}
	template<> GAMEOFLIFE_API UClass* StaticClass<ACellularAutomatonHUD>()
	{
		return ACellularAutomatonHUD::StaticClass();
	}
	ACellularAutomatonHUD::ACellularAutomatonHUD(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACellularAutomatonHUD);
	ACellularAutomatonHUD::~ACellularAutomatonHUD() {}
	struct Z_CompiledInDeferFile_FID_Users_zhaox_Desktop_game_of_life_Source_GameOfLife_Public_CellularAutomatonHUD_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_zhaox_Desktop_game_of_life_Source_GameOfLife_Public_CellularAutomatonHUD_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACellularAutomatonHUD, ACellularAutomatonHUD::StaticClass, TEXT("ACellularAutomatonHUD"), &Z_Registration_Info_UClass_ACellularAutomatonHUD, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACellularAutomatonHUD), 3819302237U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_zhaox_Desktop_game_of_life_Source_GameOfLife_Public_CellularAutomatonHUD_h_2102329484(TEXT("/Script/GameOfLife"),
		Z_CompiledInDeferFile_FID_Users_zhaox_Desktop_game_of_life_Source_GameOfLife_Public_CellularAutomatonHUD_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_zhaox_Desktop_game_of_life_Source_GameOfLife_Public_CellularAutomatonHUD_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
