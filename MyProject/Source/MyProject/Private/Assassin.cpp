// Fill out your copyright notice in the Description page of Project Settings.


#include "Assassin.h"

// Sets default values
AAssassin::AAssassin()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	slashCooldown = FMath::RandRange(100, 200);
}

// Called when the game starts or when spawned
void AAssassin::BeginPlay()
{
	Super::BeginPlay();
	
}

void AAssassin::FixedUpdate()
{
	AEnemy::FixedUpdate();

	if (playerReference && targetVisible) {

		if (slashWindow > 0) {
		}
		else
		{
			if (slashCooldown < 1) {
				if (DistanceToTarget() < attackRange) {
					slashWindow = 22;
					slashCooldown = FMath::RandRange(80, 160);
					slashDirection = ToTargetVector();
				}
				else {
					FaceTarget(false);
					MoveForward(1, false);
				}
			}
			else {

				if (strafeTimer > 0) { strafeTimer--; }
				else {
					strafeSpd *= -1;
					strafeTimer = FMath::RandRange(20, 50);
				}

				if (DistanceToTarget() > maxStrafeDist) {
					FaceTarget(false);
					MoveForward(1, false);
				}
				else if (DistanceToTarget() < minStrafeDist) {
					FaceTarget(false);
					MoveForward(-1, false);
				}
				else {
					Strafe(strafeSpd);
				}

				if (slashCooldown > 0) { slashCooldown--; }
			}
		}
	}

	if (slashWindow > 0) {		
		if (slashWindow < 14) {

			if (slashWindow == 13) { slashInitPos = GetActorLocation(); }
			SetVelocity(slashDirection * slashSpeed);

		}
		else {
			SetVelocity(0,0,0);
		}
		slashWindow--;

		if (slashWindow < 1)
		{
			SetVelocity(0, 0, 0);

			CastAttackRay(slashInitPos + FVector(0, 0, 40), GetActorLocation() + FVector(0,0,40));
		}
	}
}

// Called every frame
void AAssassin::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

