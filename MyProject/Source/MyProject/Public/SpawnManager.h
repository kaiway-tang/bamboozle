// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include <BamboozleGameMode.h>
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Enemy.h"
#include "Assassin.h"
#include "SpawnManager.generated.h"

UCLASS()
class MYPROJECT_API ASpawnManager : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASpawnManager();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;



	UPROPERTY(EditDefaultsOnly, Category = "ActorSpawning")
	TSubclassOf<AEnemy> cloneActor;

	ABamboozleGameMode* gameManager;


	void print(FString x);
	void SpawnEnemy();

	static void EnemySlain();
	static ASpawnManager* self;

	int maxSpawn;
	static int spawnCount;
	float spawnTimer;
	float spawnRate;
	float time;
};
