// Copyright Epic Games, Inc. All Rights Reserved.

#include "UnrealNvPGameMode.h"
#include "UnrealNvPCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUnrealNvPGameMode::AUnrealNvPGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
