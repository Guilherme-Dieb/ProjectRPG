// Fill out your copyright notice in the Description page of Project Settings.

#include "RPGGameMode.h"

ARPGGameMode::ARPGGameMode(const	class	FObjectInitializer&	ObjectInitializer) : Super(ObjectInitializer) 
{ 
	PlayerControllerClass = ARPGPlayerController::StaticClass();		
	DefaultPawnClass = ARPGCharacter::StaticClass(); 
}