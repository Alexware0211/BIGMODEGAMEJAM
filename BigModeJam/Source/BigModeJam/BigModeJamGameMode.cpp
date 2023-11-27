// Copyright Epic Games, Inc. All Rights Reserved.

#include "BigModeJamGameMode.h"
#include "BigModeJamCharacter.h"
#include "UObject/ConstructorHelpers.h"

ABigModeJamGameMode::ABigModeJamGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
