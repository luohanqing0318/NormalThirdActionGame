// Copyright Epic Games, Inc. All Rights Reserved.

#include "NormalActionGameGameMode.h"
#include "NormalActionGameCharacter.h"
#include "UObject/ConstructorHelpers.h"

ANormalActionGameGameMode::ANormalActionGameGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
