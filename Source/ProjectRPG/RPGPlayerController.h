// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Engine.h"
#include "ControllableCharacter.h"
#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "RPGPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class PROJECTRPG_API ARPGPlayerController : public APlayerController
{
	GENERATED_BODY()
	
protected:
	void MoveVertical(float Value);		
	void MoveHorizontal(float Value);
	virtual	void SetupInputComponent() override;

};
