// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "Final_ReportGameMode.h"
#include "Final_ReportCharacter.h"
#include "UObject/ConstructorHelpers.h"

AFinal_ReportGameMode::AFinal_ReportGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
