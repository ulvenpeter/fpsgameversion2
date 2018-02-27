// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "fpsgameGameMode.h"
#include "fpsgameHUD.h"
#include "fpsgameCharacter.h"
#include "UObject/ConstructorHelpers.h"

AfpsgameGameMode::AfpsgameGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AfpsgameHUD::StaticClass();
}
