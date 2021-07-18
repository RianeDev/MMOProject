// Copyright Epic Games, Inc. All Rights Reserved.

#include "LifeGameMode.h"
#include "LifeCharacter.h"
#include "UObject/ConstructorHelpers.h"

ALifeGameMode::ALifeGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
