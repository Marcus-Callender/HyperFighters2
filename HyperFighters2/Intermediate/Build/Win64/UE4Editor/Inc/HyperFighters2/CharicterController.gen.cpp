// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "CharicterController.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharicterController() {}
// Cross Module References
	HYPERFIGHTERS2_API UClass* Z_Construct_UClass_ACharicterController_NoRegister();
	HYPERFIGHTERS2_API UClass* Z_Construct_UClass_ACharicterController();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_HyperFighters2();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	PAPER2D_API UClass* Z_Construct_UClass_APaperCharacter_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	void ACharicterController::StaticRegisterNativesACharicterController()
	{
	}
	UClass* Z_Construct_UClass_ACharicterController_NoRegister()
	{
		return ACharicterController::StaticClass();
	}
	UClass* Z_Construct_UClass_ACharicterController()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_APawn();
			Z_Construct_UPackage__Script_HyperFighters2();
			OuterClass = ACharicterController::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20900080u;


				UProperty* NewProp_CameraBoom = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CameraBoom"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(CameraBoom, ACharicterController), 0x00400000000a001d, Z_Construct_UClass_USpringArmComponent_NoRegister());
				UProperty* NewProp_SideViewCameraComponent = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("SideViewCameraComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(SideViewCameraComponent, ACharicterController), 0x00400000000a001d, Z_Construct_UClass_UCameraComponent_NoRegister());
				UProperty* NewProp_m_charicter2 = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("m_charicter2"), RF_Public|RF_Transient|RF_MarkAsNative) UClassProperty(CPP_PROPERTY_BASE(m_charicter2, ACharicterController), 0x0044000000000001, Z_Construct_UClass_APaperCharacter_NoRegister(), Z_Construct_UClass_UClass());
				UProperty* NewProp_m_charicter1 = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("m_charicter1"), RF_Public|RF_Transient|RF_MarkAsNative) UClassProperty(CPP_PROPERTY_BASE(m_charicter1, ACharicterController), 0x0044000000000001, Z_Construct_UClass_APaperCharacter_NoRegister(), Z_Construct_UClass_UClass());
				static TCppClassTypeInfo<TCppClassTypeTraits<ACharicterController> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Navigation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("CharicterController.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("CharicterController.h"));
				MetaData->SetValue(NewProp_CameraBoom, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_CameraBoom, TEXT("Category"), TEXT("Camera"));
				MetaData->SetValue(NewProp_CameraBoom, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_CameraBoom, TEXT("ModuleRelativePath"), TEXT("CharicterController.h"));
				MetaData->SetValue(NewProp_CameraBoom, TEXT("ToolTip"), TEXT("Camera boom positioning the camera beside the character"));
				MetaData->SetValue(NewProp_SideViewCameraComponent, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_SideViewCameraComponent, TEXT("Category"), TEXT("Camera"));
				MetaData->SetValue(NewProp_SideViewCameraComponent, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_SideViewCameraComponent, TEXT("ModuleRelativePath"), TEXT("CharicterController.h"));
				MetaData->SetValue(NewProp_SideViewCameraComponent, TEXT("ToolTip"), TEXT("Side view camera"));
				MetaData->SetValue(NewProp_m_charicter2, TEXT("Category"), TEXT("Spawning"));
				MetaData->SetValue(NewProp_m_charicter2, TEXT("ModuleRelativePath"), TEXT("CharicterController.h"));
				MetaData->SetValue(NewProp_m_charicter1, TEXT("Category"), TEXT("Spawning"));
				MetaData->SetValue(NewProp_m_charicter1, TEXT("ModuleRelativePath"), TEXT("CharicterController.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACharicterController, 3783961446);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACharicterController(Z_Construct_UClass_ACharicterController, &ACharicterController::StaticClass, TEXT("/Script/HyperFighters2"), TEXT("ACharicterController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACharicterController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
