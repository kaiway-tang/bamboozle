// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Containers/Map.h"
#include "Containers/List.h"
#include "BamboozleGameMode.generated.h"

/**
 *
 */



UCLASS()
class MYPROJECT_API ABamboozleGameMode : public AGameModeBase
{
    GENERATED_BODY()

protected:

    float dummy;
    TDoubleLinkedList<APawn*> pawnList;
    TDoubleLinkedList<APawn*>::TDoubleLinkedListNode* curPawn;
    TMap<APawn*, TDoubleLinkedList<APawn*>::TDoubleLinkedListNode*> pawnRef;

public:
    ABamboozleGameMode();

    UFUNCTION(BlueprintCallable)
    void RegisterPawn(APawn* pawn);

    UFUNCTION(BlueprintCallable)
    APawn* CyclePawn(bool reverse);

    UFUNCTION(BlueprintCallable)
    void DeregisterPawn(APawn* pawn);
};