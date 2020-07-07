// Copyright Epic Games, Inc. All Rights Reserved.

#include "TP_PlatformerGameMode.h"
#include "TP_PlatformerCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATP_PlatformerGameMode::ATP_PlatformerGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/SideScrollerCPP/Blueprints/SideScrollerCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}

	points = 0;
	
}
