// Fill out your copyright notice in the Description page of Project Settings.


#include "BamboozleGameMode.h"


ABamboozleGameMode::ABamboozleGameMode()
{
    // pawnList = TDoubleLinkedList<APawn*>();
    curPawn = nullptr;
    // pawnRef = TMap<APawn*, TDoubleLinkedListNode*>();
    world = GetWorld();

    PrimaryActorTick.bCanEverTick = true;
}

void ABamboozleGameMode::RegisterPawn(APawn* pawn)
{
    if (curPawn == nullptr) {
        pawnList.AddTail(pawn);
        curPawn = pawnList.GetHead();
    }
    else {
        pawnList.InsertNode(pawn, curPawn);
    }
    pawnRef[pawn] = curPawn;
}

APawn* ABamboozleGameMode::CyclePawn(bool reverse = false)
{
    TDoubleLinkedList<APawn*>::TDoubleLinkedListNode* newcur;

    // Note: since linked list inserts from the left, traversing right is actually the reverse
    if (reverse) {
        newcur = curPawn->GetNextNode() == nullptr ? pawnList.GetHead() : curPawn->GetNextNode();
    }
    else {
        newcur = curPawn->GetPrevNode() == nullptr ? pawnList.GetTail() : curPawn->GetPrevNode();
    }

    curPawn = newcur;
    return newcur == nullptr ? nullptr : newcur->GetValue();
}

APawn* ABamboozleGameMode::GetCurPawn()
{
    return curPawn == nullptr ? nullptr : curPawn->GetValue();
}

void ABamboozleGameMode::DeregisterPawn(APawn* pawn)
{
    if (pawnRef[pawn] == curPawn) curPawn = pawnList.GetHead();
    pawnList.RemoveNode(pawnRef[pawn]);
    pawnRef.FindAndRemoveChecked(pawn);
}

void ABamboozleGameMode::SetPlayerRef(APlayerClone* plr)
{
    PlayerRef = plr;
}

APlayerClone* ABamboozleGameMode::GetPlayerRef()
{
    return PlayerRef;
}

void ABamboozleGameMode::AddScore(int amt)
{
    Score += amt;
}

void ABamboozleGameMode::RestartMatch()
{
    QueueGameUI = true;

}

void ABamboozleGameMode::ReloadLevel()
{
    UGameplayStatics::OpenLevel(this, "GameScene");
}

void ABamboozleGameMode::Tick(float DeltaTime) {

    
}

