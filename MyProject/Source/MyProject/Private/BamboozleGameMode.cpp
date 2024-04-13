// Fill out your copyright notice in the Description page of Project Settings.


#include "BamboozleGameMode.h"

ABamboozleGameMode::ABamboozleGameMode()
{
	curPawn = pawnList.begin();
}

void ABamboozleGameMode::RegisterPawn(APawn* pawn)
{
	pawnList.insert(curPawn, pawn);
	curPawn--;
	pawnRef[pawn] = curPawn;
}

APawn* ABamboozleGameMode::CyclePawn(bool left)
{
	return nullptr;
}

void ABamboozleGameMode::DeregisterPawn(APawn* pawn)
{
}
