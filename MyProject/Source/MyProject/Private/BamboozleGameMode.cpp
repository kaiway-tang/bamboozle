// Fill out your copyright notice in the Description page of Project Settings.


#include "BamboozleGameMode.h"

ABamboozleGameMode::ABamboozleGameMode()
{
    // pawnList = TDoubleLinkedList<APawn*>();
    curPawn = nullptr;
    // pawnRef = TMap<APawn*, TDoubleLinkedListNode*>();
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

void ABamboozleGameMode::DeregisterPawn(APawn* pawn)
{
    if (pawnRef[pawn] == curPawn) curPawn = pawnList.GetHead();
    pawnList.RemoveNode(pawnRef[pawn]);
    pawnRef.FindAndRemoveChecked(pawn);
}