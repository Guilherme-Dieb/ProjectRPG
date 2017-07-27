// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Engine.h"
#include "ProjectRPG.h"
#include "Object.h"
//#include "MyActor.h"
#include "CoreMinimal.h"
#include "ControllableCharacter.generated.h"

/**
 * 
 */
 //UCLASS()

UINTERFACE() 
class PROJECTRPG_API UControllableCharacter : public UInterface
{ 
	GENERATED_UINTERFACE_BODY() 
};

class PROJECTRPG_API IControllableCharacter
{
	GENERATED_IINTERFACE_BODY()

	virtual	void MoveVertical(float Value);
	virtual	void MoveHorizontal(float Value);
};

/*
class PROJECTRPG_API AControllableCharacter //: public AMyActor
{
	GENERATED_BODY()

};*/

