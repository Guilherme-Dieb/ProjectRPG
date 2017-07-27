// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Engine.h"
#include "ControllableCharacter.h"
#include "RPGPlayerController.h"
#include "RPGCharacter.h"
#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "RPGGameMode.generated.h"

/**
 * 
 */
UCLASS()
class PROJECTRPG_API ARPGGameMode : public AGameModeBase
{
	GENERATED_BODY()

	ARPGGameMode(const	class	FObjectInitializer&	ObjectInitializer);
};
