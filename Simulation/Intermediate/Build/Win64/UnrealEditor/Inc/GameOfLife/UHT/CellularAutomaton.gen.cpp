// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameOfLife/Public/CellularAutomaton.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCellularAutomaton() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_ACameraActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	GAMEOFLIFE_API UClass* Z_Construct_UClass_ACell_NoRegister();
	GAMEOFLIFE_API UClass* Z_Construct_UClass_ACellularAutomaton();
	GAMEOFLIFE_API UClass* Z_Construct_UClass_ACellularAutomaton_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GameOfLife();
// End Cross Module References
	void ACellularAutomaton::StaticRegisterNativesACellularAutomaton()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACellularAutomaton);
	UClass* Z_Construct_UClass_ACellularAutomaton_NoRegister()
	{
		return ACellularAutomaton::StaticClass();
	}
	struct Z_Construct_UClass_ACellularAutomaton_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Width_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Width;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Height;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeadCell_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DeadCell;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LiveCell_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LiveCell;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AutomataContext_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_AutomataContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Generate_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Generate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Clear_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Clear;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Click_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Click;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CellList_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CellList_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CellList;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Controller_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Controller;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACellularAutomaton_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GameOfLife,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACellularAutomaton_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACellularAutomaton_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Board that manages the states of the cells\n */" },
#endif
		{ "IncludePath", "CellularAutomaton.h" },
		{ "ModuleRelativePath", "Public/CellularAutomaton.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Board that manages the states of the cells" },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACellularAutomaton_Statics::NewProp_CameraActor_MetaData[] = {
		{ "Category", "Board" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief View of our controller\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/CellularAutomaton.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief View of our controller" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACellularAutomaton_Statics::NewProp_CameraActor = { "CameraActor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACellularAutomaton, CameraActor), Z_Construct_UClass_ACameraActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACellularAutomaton_Statics::NewProp_CameraActor_MetaData), Z_Construct_UClass_ACellularAutomaton_Statics::NewProp_CameraActor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACellularAutomaton_Statics::NewProp_Width_MetaData[] = {
		{ "Category", "Board" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief Automaton board width\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/CellularAutomaton.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Automaton board width" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ACellularAutomaton_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACellularAutomaton, Width), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACellularAutomaton_Statics::NewProp_Width_MetaData), Z_Construct_UClass_ACellularAutomaton_Statics::NewProp_Width_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACellularAutomaton_Statics::NewProp_Height_MetaData[] = {
		{ "Category", "Board" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief Automaton board height\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/CellularAutomaton.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Automaton board height" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ACellularAutomaton_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACellularAutomaton, Height), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACellularAutomaton_Statics::NewProp_Height_MetaData), Z_Construct_UClass_ACellularAutomaton_Statics::NewProp_Height_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACellularAutomaton_Statics::NewProp_InRate_MetaData[] = {
		{ "Category", "Board" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief Time between iterations\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/CellularAutomaton.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Time between iterations" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACellularAutomaton_Statics::NewProp_InRate = { "InRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACellularAutomaton, InRate), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACellularAutomaton_Statics::NewProp_InRate_MetaData), Z_Construct_UClass_ACellularAutomaton_Statics::NewProp_InRate_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACellularAutomaton_Statics::NewProp_DeadCell_MetaData[] = {
		{ "Category", "Board" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief Color of a dead cell\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/CellularAutomaton.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Color of a dead cell" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACellularAutomaton_Statics::NewProp_DeadCell = { "DeadCell", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACellularAutomaton, DeadCell), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACellularAutomaton_Statics::NewProp_DeadCell_MetaData), Z_Construct_UClass_ACellularAutomaton_Statics::NewProp_DeadCell_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACellularAutomaton_Statics::NewProp_LiveCell_MetaData[] = {
		{ "Category", "Board" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief Color of a live cell\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/CellularAutomaton.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Color of a live cell" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACellularAutomaton_Statics::NewProp_LiveCell = { "LiveCell", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACellularAutomaton, LiveCell), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACellularAutomaton_Statics::NewProp_LiveCell_MetaData), Z_Construct_UClass_ACellularAutomaton_Statics::NewProp_LiveCell_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACellularAutomaton_Statics::NewProp_AutomataContext_MetaData[] = {
		{ "Category", "Enhanced Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief Custom MappingContext\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/CellularAutomaton.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Custom MappingContext" },
#endif
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_ACellularAutomaton_Statics::NewProp_AutomataContext = { "AutomataContext", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACellularAutomaton, AutomataContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACellularAutomaton_Statics::NewProp_AutomataContext_MetaData), Z_Construct_UClass_ACellularAutomaton_Statics::NewProp_AutomataContext_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACellularAutomaton_Statics::NewProp_Generate_MetaData[] = {
		{ "Category", "Enhanced Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief InputAction that generates and pauses evolutions\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/CellularAutomaton.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief InputAction that generates and pauses evolutions" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACellularAutomaton_Statics::NewProp_Generate = { "Generate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACellularAutomaton, Generate), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACellularAutomaton_Statics::NewProp_Generate_MetaData), Z_Construct_UClass_ACellularAutomaton_Statics::NewProp_Generate_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACellularAutomaton_Statics::NewProp_Clear_MetaData[] = {
		{ "Category", "Enhanced Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief InputAction that sets to 0 all the values (Evolutions, Population, CellList)\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/CellularAutomaton.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief InputAction that sets to 0 all the values (Evolutions, Population, CellList)" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACellularAutomaton_Statics::NewProp_Clear = { "Clear", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACellularAutomaton, Clear), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACellularAutomaton_Statics::NewProp_Clear_MetaData), Z_Construct_UClass_ACellularAutomaton_Statics::NewProp_Clear_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACellularAutomaton_Statics::NewProp_Click_MetaData[] = {
		{ "Category", "Enhanced Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief Creates new live or dead cells\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/CellularAutomaton.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Creates new live or dead cells" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACellularAutomaton_Statics::NewProp_Click = { "Click", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACellularAutomaton, Click), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACellularAutomaton_Statics::NewProp_Click_MetaData), Z_Construct_UClass_ACellularAutomaton_Statics::NewProp_Click_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACellularAutomaton_Statics::NewProp_CellList_Inner = { "CellList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ACell_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACellularAutomaton_Statics::NewProp_CellList_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief List of cells that contains all the cells on the board\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/CellularAutomaton.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief List of cells that contains all the cells on the board" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACellularAutomaton_Statics::NewProp_CellList = { "CellList", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACellularAutomaton, CellList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACellularAutomaton_Statics::NewProp_CellList_MetaData), Z_Construct_UClass_ACellularAutomaton_Statics::NewProp_CellList_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACellularAutomaton_Statics::NewProp_Controller_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief Reference to PlayerController\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/CellularAutomaton.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Reference to PlayerController" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACellularAutomaton_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACellularAutomaton, Controller), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACellularAutomaton_Statics::NewProp_Controller_MetaData), Z_Construct_UClass_ACellularAutomaton_Statics::NewProp_Controller_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACellularAutomaton_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACellularAutomaton_Statics::NewProp_CameraActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACellularAutomaton_Statics::NewProp_Width,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACellularAutomaton_Statics::NewProp_Height,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACellularAutomaton_Statics::NewProp_InRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACellularAutomaton_Statics::NewProp_DeadCell,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACellularAutomaton_Statics::NewProp_LiveCell,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACellularAutomaton_Statics::NewProp_AutomataContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACellularAutomaton_Statics::NewProp_Generate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACellularAutomaton_Statics::NewProp_Clear,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACellularAutomaton_Statics::NewProp_Click,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACellularAutomaton_Statics::NewProp_CellList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACellularAutomaton_Statics::NewProp_CellList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACellularAutomaton_Statics::NewProp_Controller,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACellularAutomaton_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACellularAutomaton>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACellularAutomaton_Statics::ClassParams = {
		&ACellularAutomaton::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACellularAutomaton_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ACellularAutomaton_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACellularAutomaton_Statics::Class_MetaDataParams), Z_Construct_UClass_ACellularAutomaton_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACellularAutomaton_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ACellularAutomaton()
	{
		if (!Z_Registration_Info_UClass_ACellularAutomaton.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACellularAutomaton.OuterSingleton, Z_Construct_UClass_ACellularAutomaton_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACellularAutomaton.OuterSingleton;
	}
	template<> GAMEOFLIFE_API UClass* StaticClass<ACellularAutomaton>()
	{
		return ACellularAutomaton::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACellularAutomaton);
	ACellularAutomaton::~ACellularAutomaton() {}
	struct Z_CompiledInDeferFile_FID_Users_zhaox_Desktop_game_of_life_Source_GameOfLife_Public_CellularAutomaton_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_zhaox_Desktop_game_of_life_Source_GameOfLife_Public_CellularAutomaton_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACellularAutomaton, ACellularAutomaton::StaticClass, TEXT("ACellularAutomaton"), &Z_Registration_Info_UClass_ACellularAutomaton, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACellularAutomaton), 2734367897U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_zhaox_Desktop_game_of_life_Source_GameOfLife_Public_CellularAutomaton_h_3610867199(TEXT("/Script/GameOfLife"),
		Z_CompiledInDeferFile_FID_Users_zhaox_Desktop_game_of_life_Source_GameOfLife_Public_CellularAutomaton_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_zhaox_Desktop_game_of_life_Source_GameOfLife_Public_CellularAutomaton_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
