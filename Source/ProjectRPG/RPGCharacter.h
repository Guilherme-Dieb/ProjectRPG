// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Engine.h"
#include "ControllableCharacter.h"
#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "RPGCharacter.generated.h"

UCLASS()
class PROJECTRPG_API ARPGCharacter : public ACharacter, public IControllableCharacter
{
	GENERATED_BODY()
		ARPGCharacter(const	class FObjectInitializer& ObjectInitializer);

public:
	// Sets default values for this character's properties
	ARPGCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

public:
	virtual	void MoveVertical(float Value);
	virtual	void MoveHorizontal(float Value);

};
