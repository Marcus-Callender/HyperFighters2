// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "HyperFighters2GameMode.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHyperFighters2GameMode() {}
// Cross Module References
	HYPERFIGHTERS2_API UClass* Z_Construct_UClass_AHyperFighters2GameMode_NoRegister();
	HYPERFIGHTERS2_API UClass* Z_Construct_UClass_AHyperFighters2GameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_HyperFighters2();
// End Cross Module References
	void AHyperFighters2GameMode::StaticRegisterNativesAHyperFighters2GameMode()
	{
	}
	UClass* Z_Construct_UClass_AHyperFighters2GameMode_NoRegister()
	{
		return AHyperFighters2GameMode::StaticClass();
	}
	UClass* Z_Construct_UClass_AHyperFighters2GameMode()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AGameModeBase();
			Z_Construct_UPackage__Script_HyperFighters2();
			OuterClass = AHyperFighters2GameMode::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20880288u;


				static TCppClassTypeInfo<TCppClassTypeTraits<AHyperFighters2GameMode> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("HyperFighters2GameMode.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("HyperFighters2GameMode.h"));
				MetaData->SetValue(OuterClass, TEXT("ShowCategories"), TEXT("Input|MouseInput Input|TouchInput"));
				MetaData->SetValue(OuterClass, TEXT("ToolTip"), TEXT("The GameMode defines the game being played. It governs the game rules, scoring, what actors\nare allowed to exist in this game type, and who may enter the game.\n\nThis game mode just sets the default pawn to be the MyCharacter asset, which is a subclass of HyperFighters2Character"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AHyperFighters2GameMode, 3774069842);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHyperFighters2GameMode(Z_Construct_UClass_AHyperFighters2GameMode, &AHyperFighters2GameMode::StaticClass, TEXT("/Script/HyperFighters2"), TEXT("AHyperFighters2GameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHyperFighters2GameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
