// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include <list>
#include <unordered_map>
#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "BamboozleGameMode.generated.h"

/**
 * 
 */



UCLASS()
class MYPROJECT_API ABamboozleGameMode : public AGameModeBase
{
	GENERATED_BODY()
	
private:
	/*
	std::list<APawn*> pawnList;
	std::list<APawn*>::iterator curPawn;
	std::unordered_map<APawn*, std::list<APawn*>::iterator> pawnRef;
	*/
public:
	ABamboozleGameMode();

	UFUNCTION(BlueprintCallable)
	void RegisterPawn(APawn* pawn);

	UFUNCTION(BlueprintCallable)
	APawn* CyclePawn(bool left);

	UFUNCTION(BlueprintCallable)
	void DeregisterPawn(APawn* pawn);
};
