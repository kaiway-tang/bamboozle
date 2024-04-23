// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Enemy.h"
#include "Assassin.generated.h"

UCLASS()
class MYPROJECT_API AAssassin : public AEnemy
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AAssassin();

protected:

	UPROPERTY(EditAnywhere)
	float attackRange;	
	UPROPERTY(EditAnywhere)
	float slashSpeed;
	UPROPERTY(EditAnywhere)
	float minStrafeDist;
	UPROPERTY(EditAnywhere)
	float maxStrafeDist;

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	virtual void FixedUpdate() override;

	FVector slashInitPos;
	FVector slashDirection;
	int slashWindow;
	int slashCooldown;

	UPROPERTY(EditAnywhere)
	float strafeSpd;
	int strafeTimer;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
