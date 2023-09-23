// Copyright Epic Games, Inc. All Rights Reserved.

#include "Portfolio_HyojaeGameMode.h"
#include "Portfolio_HyojaeCharacter.h"
#include "UObject/ConstructorHelpers.h"

APortfolio_HyojaeGameMode::APortfolio_HyojaeGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
