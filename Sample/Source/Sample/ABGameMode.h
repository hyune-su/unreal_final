// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Sample.h"
#include "GameFramework/GameModeBase.h"
#include "ABGameMode.generated.h"

/**
 *
 */
UCLASS()
class SAMPLE_API AABGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AABGameMode();

	virtual void PostLogin(APlayerController *newPlayer) override;
};
