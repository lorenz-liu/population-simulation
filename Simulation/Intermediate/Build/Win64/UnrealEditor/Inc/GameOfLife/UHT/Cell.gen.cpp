// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameOfLife/Public/Cell.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCell() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	GAMEOFLIFE_API UClass* Z_Construct_UClass_ACell();
	GAMEOFLIFE_API UClass* Z_Construct_UClass_ACell_NoRegister();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperSpriteComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GameOfLife();
// End Cross Module References
	void ACell::StaticRegisterNativesACell()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACell);
	UClass* Z_Construct_UClass_ACell_NoRegister()
	{
		return ACell::StaticClass();
	}
	struct Z_Construct_UClass_ACell_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PaperSpriteComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PaperSpriteComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACell_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GameOfLife,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACell_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACell_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Cellular Automaton Cell\n */" },
#endif
		{ "IncludePath", "Cell.h" },
		{ "ModuleRelativePath", "Public/Cell.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Cellular Automaton Cell" },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACell_Statics::NewProp_PaperSpriteComponent_MetaData[] = {
		{ "Category", "Sprite Component" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief Visual representation\n\x09 */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Cell.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Visual representation" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACell_Statics::NewProp_PaperSpriteComponent = { "PaperSpriteComponent", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACell, PaperSpriteComponent), Z_Construct_UClass_UPaperSpriteComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACell_Statics::NewProp_PaperSpriteComponent_MetaData), Z_Construct_UClass_ACell_Statics::NewProp_PaperSpriteComponent_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACell_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACell_Statics::NewProp_PaperSpriteComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACell_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACell>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACell_Statics::ClassParams = {
		&ACell::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACell_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ACell_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACell_Statics::Class_MetaDataParams), Z_Construct_UClass_ACell_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACell_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ACell()
	{
		if (!Z_Registration_Info_UClass_ACell.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACell.OuterSingleton, Z_Construct_UClass_ACell_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACell.OuterSingleton;
	}
	template<> GAMEOFLIFE_API UClass* StaticClass<ACell>()
	{
		return ACell::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACell);
	ACell::~ACell() {}
	struct Z_CompiledInDeferFile_FID_Users_zhaox_Desktop_game_of_life_Source_GameOfLife_Public_Cell_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_zhaox_Desktop_game_of_life_Source_GameOfLife_Public_Cell_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACell, ACell::StaticClass, TEXT("ACell"), &Z_Registration_Info_UClass_ACell, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACell), 1850901660U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_zhaox_Desktop_game_of_life_Source_GameOfLife_Public_Cell_h_3056171043(TEXT("/Script/GameOfLife"),
		Z_CompiledInDeferFile_FID_Users_zhaox_Desktop_game_of_life_Source_GameOfLife_Public_Cell_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_zhaox_Desktop_game_of_life_Source_GameOfLife_Public_Cell_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
