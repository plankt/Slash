// Copyright 1998-2014 Epic Games, Inc. All Rights Reserved.

#include "Slash.h"
#include "SlashGameMode.h"
#include "SlashPlayerController.h"
#include "SlashCharacter.h"

ASlashGameMode::ASlashGameMode(const class FPostConstructInitializeProperties& PCIP) : Super(PCIP)
{
	// use our custom PlayerController class
	PlayerControllerClass = ASlashPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/Blueprints/MyCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}