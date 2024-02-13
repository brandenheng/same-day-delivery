// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PROSDD/PROSDDGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePROSDDGameModeBase() {}
// Cross Module References
	PROSDD_API UClass* Z_Construct_UClass_APROSDDGameModeBase_NoRegister();
	PROSDD_API UClass* Z_Construct_UClass_APROSDDGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_PROSDD();
// End Cross Module References
	void APROSDDGameModeBase::StaticRegisterNativesAPROSDDGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APROSDDGameModeBase);
	UClass* Z_Construct_UClass_APROSDDGameModeBase_NoRegister()
	{
		return APROSDDGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_APROSDDGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APROSDDGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_PROSDD,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APROSDDGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "PROSDDGameModeBase.h" },
		{ "ModuleRelativePath", "PROSDDGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APROSDDGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APROSDDGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APROSDDGameModeBase_Statics::ClassParams = {
		&APROSDDGameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_APROSDDGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APROSDDGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APROSDDGameModeBase()
	{
		if (!Z_Registration_Info_UClass_APROSDDGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APROSDDGameModeBase.OuterSingleton, Z_Construct_UClass_APROSDDGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APROSDDGameModeBase.OuterSingleton;
	}
	template<> PROSDD_API UClass* StaticClass<APROSDDGameModeBase>()
	{
		return APROSDDGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APROSDDGameModeBase);
	struct Z_CompiledInDeferFile_FID_PROSDD_Source_PROSDD_PROSDDGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PROSDD_Source_PROSDD_PROSDDGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APROSDDGameModeBase, APROSDDGameModeBase::StaticClass, TEXT("APROSDDGameModeBase"), &Z_Registration_Info_UClass_APROSDDGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APROSDDGameModeBase), 2639069523U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PROSDD_Source_PROSDD_PROSDDGameModeBase_h_2912795353(TEXT("/Script/PROSDD"),
		Z_CompiledInDeferFile_FID_PROSDD_Source_PROSDD_PROSDDGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PROSDD_Source_PROSDD_PROSDDGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
