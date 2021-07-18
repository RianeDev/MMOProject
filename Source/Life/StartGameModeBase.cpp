// Fill out your copyright notice in the Description page of Project Settings.


#include "StartGameModeBase.h"
#include "LifeCharacter.h"
#include "UObject/ConstructorHelpers.h"

AStartGameModeBase::AStartGameModeBase()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
