// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameOfLife_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_GameOfLife;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_GameOfLife()
	{
		if (!Z_Registration_Info_UPackage__Script_GameOfLife.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/GameOfLife",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0xE80F6634,
				0xD5885DF5,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_GameOfLife.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_GameOfLife.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_GameOfLife(Z_Construct_UPackage__Script_GameOfLife, TEXT("/Script/GameOfLife"), Z_Registration_Info_UPackage__Script_GameOfLife, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xE80F6634, 0xD5885DF5));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
