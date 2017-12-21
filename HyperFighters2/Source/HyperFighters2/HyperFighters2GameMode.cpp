// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "HyperFighters2GameMode.h"
#include "HyperFighters2Character.h"

AHyperFighters2GameMode::AHyperFighters2GameMode()
{
	// Set default pawn class to our character
	DefaultPawnClass = AHyperFighters2Character::StaticClass();	
}
