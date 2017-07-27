// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Engine.h"
#include "GameCharacter.h"
#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "RPGGameInstance.generated.h"

/**
 * 
 */
UCLASS()
class PROJECTRPG_API URPGGameInstance : public UGameInstance
{
	GENERATED_BODY()
	URPGGameInstance(const class FObjectInitializer& ObjectInitializer);

public:
	TArray<UGameCharacter*>	PartyMembers;

protected:		
	bool isInitialized;

public:		
	void Init();

};
