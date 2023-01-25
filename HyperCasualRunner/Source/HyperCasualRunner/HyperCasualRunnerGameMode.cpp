// Copyright Epic Games, Inc. All Rights Reserved.

#include "HyperCasualRunnerGameMode.h"
#include "HyperCasualRunnerCharacter.h"
#include "UObject/ConstructorHelpers.h"

AHyperCasualRunnerGameMode::AHyperCasualRunnerGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
