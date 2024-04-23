// Fill out your copyright notice in the Description page of Project Settings.


#include "Overwatch.h"
#include "Spear.h"

// Sets default values
AOverwatch::AOverwatch()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AOverwatch::BeginPlay()
{
	Super::BeginPlay();
	
	FixedUpdate();
}

float AOverwatch::TargetZDiff()
{
	return GetActorLocation().Z - TargetPosition().Z;
}
// Called every frame
void AOverwatch::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AOverwatch::FixedUpdate()
{
	AEnemy::FixedUpdate();

	if (TargetZDiff() > maxZDiff) {
		AddVelocity(FVector(0,0, -baseMoveSpeed), 50);
	}
	else if (TargetZDiff() < minZDiff) {
		AddVelocity(FVector(0, 0, baseMoveSpeed), 50);
	}
	else {
		float temp = DistanceToTarget();

		if (temp > maxDist) {
			AddVelocity(ToTargetVector() * baseMoveSpeed);
		}
		else if (temp < minDist) {
			AddVelocity(ToTargetVector() * -baseMoveSpeed);
		}
		else {
			Strafe(1);
		}		
	}
	ApplyFriction(friction);
	SetVelocity(GetVelocity().X, GetVelocity().Y, GetVelocity().Z * 0.9);

	if (shootCooldown > 0) {
		shootCooldown--;
	}
	else {
		ASpear* actorRef = GetWorld()->SpawnActor<ASpear>(spear,
			GetActorLocation() + FVector(0, 0, 40) + ToTargetVector() * 70, ToTargetRotation());

		if (actorRef->IsValidLowLevel()) { actorRef->targetID = targetID; }

		shootCooldown = FMath::RandRange(80,160);
	}
}

