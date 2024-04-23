// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Enemy.h"

#include "Overwatch.generated.h"

UCLASS()
class MYPROJECT_API AOverwatch : public AEnemy
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AOverwatch();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	float TargetZDiff();
	float TargetXYDiff();

	UPROPERTY(EditAnywhere)
	float maxZDiff;
	UPROPERTY(EditAnywhere)
	float minZDiff;
	UPROPERTY(EditAnywhere)
	float maxDist;
	UPROPERTY(EditAnywhere)
	float minDist;
	UPROPERTY(EditAnywhere)
	float friction;

	int shootCooldown;

	UPROPERTY(EditDefaultsOnly, Category = "ActorSpawning")
	TSubclassOf<AEnemy> spear;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual void FixedUpdate() override;

};
