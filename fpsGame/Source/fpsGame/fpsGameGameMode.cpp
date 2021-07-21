// Copyright Epic Games, Inc. All Rights Reserved.

#include "fpsGameGameMode.h"
#include "fpsGameHUD.h"
#include "fpsGameCharacter.h"
#include "UObject/ConstructorHelpers.h"

AfpsGameGameMode::AfpsGameGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AfpsGameHUD::StaticClass();
}
