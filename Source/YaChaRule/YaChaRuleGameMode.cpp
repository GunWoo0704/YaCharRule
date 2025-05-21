// Copyright Epic Games, Inc. All Rights Reserved.

#include "YaChaRuleGameMode.h"
#include "YaChaRuleCharacter.h"
#include "UObject/ConstructorHelpers.h"

AYaChaRuleGameMode::AYaChaRuleGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
