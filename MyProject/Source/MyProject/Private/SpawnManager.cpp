// Fill out your copyright notice in the Description page of Project Settings.


#include "SpawnManager.h"
#include "PlayerClone.h"

int ASpawnManager::spawnCount = 1;
ASpawnManager* ASpawnManager::self = nullptr;

// Sets default values
ASpawnManager::ASpawnManager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

    self = this;
}

// Called when the game starts or when spawned
void ASpawnManager::BeginPlay()
{
	Super::BeginPlay();

    gameManager = Cast<ABamboozleGameMode>(UGameplayStatics::GetGameMode(this));

    spawnCount = 1;
    maxSpawn = 1;    	
    spawnRate = 20;
    spawnTimer = spawnRate;
}

// Called every frame
void ASpawnManager::Tick(float DeltaTime)
{ 
	Super::Tick(DeltaTime);

    if (spawnTimer <= 0 || spawnCount < 1) {
        spawnTimer = spawnRate;
        SpawnEnemy();
    }

    if (time > 20) {
        spawnRate = spawnRate * 0.8;
        time = 0;
        FString print = FString::Printf(TEXT("new spawn rate: %f"), spawnRate);
        if (GEngine)
            GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, print);
    }

    time += DeltaTime;
    spawnTimer -= DeltaTime;
}

void ASpawnManager::SpawnEnemy() {
    
    APlayerClone::spawnEnemy = true;

    spawnCount++; 
}

void ASpawnManager::EnemySlain()
{  
    spawnCount--;
}

void ASpawnManager::print(FString x)
{
    if (GEngine) {
        //FString	print = FString::Printf(TEXT("now summon!"));
        GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, x);
        //GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, print);
    }
}