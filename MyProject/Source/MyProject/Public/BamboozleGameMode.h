// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Containers/Map.h"
#include "Containers/List.h"
#include "Kismet/GameplayStatics.h"
#include "BamboozleGameMode.generated.h"

/**
 *
 */

class APlayerClone;
class APlayerSummon;
class AEnemy;

UCLASS()
class MYPROJECT_API ABamboozleGameMode : public AGameModeBase
{
    GENERATED_BODY()

protected:

    float dummy;
    TDoubleLinkedList<APawn*> pawnList;
    TDoubleLinkedList<APawn*>::TDoubleLinkedListNode* curPawn;
    TMap<APawn*, TDoubleLinkedList<APawn*>::TDoubleLinkedListNode*> pawnRef;

    APlayerClone* PlayerRef;

    UPROPERTY(BlueprintReadWrite)
    bool QueueGameUI;

    UPROPERTY(BlueprintReadOnly)
    int Score; 

public:

    ABamboozleGameMode();

    virtual void Tick(float DeltaTime) override;

    UFUNCTION(BlueprintCallable)
    void RegisterPawn(APawn* pawn);

    UFUNCTION(BlueprintCallable)
    APawn* CyclePawn(bool reverse);

    UFUNCTION(BlueprintCallable)
    APawn* GetCurPawn();

    UFUNCTION(BlueprintCallable)
    void DeregisterPawn(APawn* pawn);

    UFUNCTION(BlueprintCallable)
    void SetPlayerRef(APlayerClone* plr);

    UFUNCTION(BlueprintCallable)
    APlayerClone* GetPlayerRef();

    UFUNCTION(BlueprintCallable)
    void AddScore(int amt);

    UFUNCTION(BlueprintCallable)
    void RestartMatch();

    UFUNCTION(BlueprintCallable)
    void ReloadLevel();

    APlayerSummon* playerCloneQ;
    APlayerSummon* playerCloneE;

    UWorld* world;

    TArray<AEnemy*> enemies;    
};