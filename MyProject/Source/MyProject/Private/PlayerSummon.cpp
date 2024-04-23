// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerSummon.h"
#include "Enemy.h"
#include "Kismet/KismetMathLibrary.h"

// Sets default values
APlayerSummon::APlayerSummon()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	RootMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Root Mesh"));
	RootMesh->SetSimulatePhysics(true);

	RootBoneName = RootMesh->GetFName();

	Hitbox = CreateDefaultSubobject<UBoxComponent>(TEXT("Hitbox"));
	Hitbox->SetupAttachment(RootMesh);
}

// Called when the game starts or when spawned
void APlayerSummon::BeginPlay()
{
	Super::BeginPlay();

	if (RootMesh) {		
		//PhysicsBody = Cast<UPrimitiveComponent>(GetComponentsByTag(UMeshComponent::StaticClass(), FName("cylinder"))[0]);
		PhysicsBody = Cast<UPrimitiveComponent>(RootMesh);

		//print(spawnDirection.ToString());

		//SetVelocity(FVector(0,0,launchVelocity));
		//SetVelocity(spawnDirection * launchVelocity);
	}

	gameManager = Cast<ABamboozleGameMode>(UGameplayStatics::GetGameMode(this));

	slashCooldown = 50;
	isAlive = true;
}

bool APlayerSummon::VerifyTarget()
{
	if (target->IsValidLowLevel() && target->isAlive) {
		return true;
	}		
	return UpdateTarget();
}

void APlayerSummon::FaceTarget(bool trackZ)
{
	FVector tempVec = FVector();
	if (VerifyTarget()) {
		tempVec = target->GetActorLocation();
	}
	else {
		return;
	}


	if (!trackZ) {
		tempVec.Z = GetActorLocation().Z;
	}

	SetActorRotation(UKismetMathLibrary::FindLookAtRotation(GetActorLocation(), tempVec));
}

float APlayerSummon::DistanceToTarget()
{
	if (VerifyTarget()) {
		return (target->GetActorLocation() - GetActorLocation()).Size();
	}
	return 0;
}

FVector APlayerSummon::ToTargetVector(FVector startPos)
{
	if (!VerifyTarget()) { return FVector(); }

	return (target->GetActorLocation() - startPos).GetSafeNormal();
}

void APlayerSummon::MoveForward(float factor, bool moveZ)
{
	FVector moveVec = GetActorForwardVector() * baseSpd * factor;
	if (!moveZ) { moveVec.Z = 0; }
	AddVelocity(moveVec, 5);
}

void APlayerSummon::Strafe()
{
	FaceTarget(false);
	FVector moveVec = GetActorRightVector() * baseSpd * strafeSpdFactor;
	moveVec.Z = 0;
	AddVelocity(moveVec, 5);
}

bool APlayerSummon::UpdateTarget()
{
	float minDistance = INFINITY;
	FVector pos = GetActorLocation();
	float temp = 0;
	int index = -1;

	for (size_t i = 0; i < gameManager->enemies.Num(); i++)
	{
		if (gameManager->enemies[i]->IsValidLowLevel() && gameManager->enemies[i]->isAlive) {
			temp = (pos - gameManager->enemies[i]->GetActorLocation()).SquaredLength();
			if (temp < minDistance) {
				minDistance = temp;
				index = i;
			}
		}		
	}

	if (index > -1) {
		target = gameManager->enemies[index];
		return true;
	}
	else {
		target = nullptr;
		error("no target");
		return false;
	}
}

// Called every frame
void APlayerSummon::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	deltaAccumulator += DeltaTime;
	while (deltaAccumulator >= 0.02) {
		FixedUpdate();
		deltaAccumulator -= 0.02;
	}
}

void APlayerSummon::FixedUpdate()
{
	if (VerifyTarget()) {

		HandleGroundDetection();

		if (slashWindow > 0) {
		}
		else
		{
			if (slashCooldown < 1) {
				if (DistanceToTarget() < attackRange) {
					slashWindow = 18;
					slashCooldown = 150;
					slashDirection = ToTargetVector(GetActorLocation());
				}
				else {
					FaceTarget(false);
					MoveForward(1, false);
				}
			}
			else {

				if (strafeTimer > 0) { strafeTimer--; }
				else if (grounded) {
					strafeSpdFactor *= -1;
					strafeTimer = FMath::RandRange(20, 50);
				}

				if (grounded) {
					if (DistanceToTarget() > maxStrafeDist) {
						FaceTarget(false);
						MoveForward(1, false);
					}
					else if (DistanceToTarget() < minStrafeDist) {
						FaceTarget(false);
						MoveForward(-1, false);
					}
					else {
						Strafe();
					}
				}				

				if (slashCooldown > 0) { slashCooldown--; }
			}
		}

		if (grounded) { ApplyFriction(baseFrictionFactor); }
	}

	if (slashWindow > 0) {
		if (slashWindow == 13) { dashInitPosition = GetActorLocation(); }
		if (slashWindow < 14) {
			SetVelocity(slashDirection * slashSpeed);
		}
		else {
			SetVelocity(0, 0, 0);
		}
		slashWindow--;

		if (slashWindow < 1)
		{
			SetVelocity(0, 0, 0);

			TArray<AActor*> allHitActors;

			allHitActors.Append(CastAttackRay(FVector(0, 0, 0)));
		//	allHitActors.Append(CastAttackRay(GetActorUpVector() * attackWidth));
		//	allHitActors.Append(CastAttackRay(GetActorUpVector() * -attackWidth));
		//	allHitActors.Append(CastAttackRay(GetActorRightVector() * attackWidth));
		//	allHitActors.Append(CastAttackRay(GetActorRightVector() * -attackWidth));

			TArray<AActor*> uniqueActors;

			for (size_t i = 0; i < allHitActors.Num(); i++)
			{
				uniqueActors.AddUnique(allHitActors[i]);
			}

			for (size_t i = 0; i < uniqueActors.Num(); i++)
			{
				//uniqueActors[i]->cast
				AEnemy* enemyScript = Cast<AEnemy>(uniqueActors[i]);
				if (!enemyScript) { print("ERROR: no enemy script obtianed"); }
				else { enemyScript->Hit(); }
			}
		}
	}
}

TArray<AActor*> APlayerSummon::CastAttackRay(FVector offset)
{
	TArray<FHitResult> attackRay;

	GetWorld()->LineTraceMultiByObjectType(
		attackRay,
		dashInitPosition + slashDirection * slashExtension + FVector(0, 0, 40) + offset,
		GetActorLocation() + FVector(0, 0, 40) + offset,
		ECC_Destructible
	);

	TArray<AActor*> hitActors;

	for (size_t i = 0; i < attackRay.Num(); i++)
	{
		hitActors.Emplace(attackRay[i].GetActor());
	}

	return hitActors;
}

void APlayerSummon::ApplyFriction(float factor)
{
	FVector velocity = GetVelocity();
	velocity.Z = 0;
	FVector counterVelocity = -velocity;
	counterVelocity.Normalize();
	counterVelocity = counterVelocity * factor * baseFrictionFactor;

	if (counterVelocity.SquaredLength() > velocity.SquaredLength()) {
		SetVelocity(FVector(0, 0, GetVelocity().Z));
	}
	else {
		AddVelocity(counterVelocity);
	}
}

void APlayerSummon::SetVelocity(FVector vect)
{
	PhysicsBody->SetAllPhysicsLinearVelocity(vect);
}

void APlayerSummon::SetVelocity(float x, float y, float z)
{
	PhysicsBody->SetAllPhysicsLinearVelocity(FVector(x, y, z));
}

void APlayerSummon::AddVelocity(FVector vect)
{
	PhysicsBody->SetAllPhysicsLinearVelocity(vect + GetPlayerVelocity());  // Renasme
}

void APlayerSummon::AddVelocity(FVector vect, float maxFactor)
{
	FVector velocity = GetPlayerVelocity();  // rename
	FVector finalVect = FVector(0, 0, 0);

	if ((vect.X > 0 && velocity.X > vect.X * maxFactor) || (vect.X < 0 && velocity.X < vect.X * maxFactor)) {
		finalVect.X = velocity.X;
	}
	else if ((vect.X > 0 && vect.X + velocity.X > vect.X * maxFactor) || (vect.X < 0 && vect.X + velocity.X < vect.X * maxFactor)) {
		finalVect.X = vect.X * maxFactor;
	}
	else {
		finalVect.X = vect.X + velocity.X;
	}

	if ((vect.Y > 0 && velocity.Y > vect.Y * maxFactor) || (vect.Y < 0 && velocity.Y < vect.Y * maxFactor)) {
		finalVect.Y = velocity.Y;
	}
	else if ((vect.Y > 0 && vect.Y + velocity.Y > vect.Y * maxFactor) || (vect.Y < 0 && vect.Y + velocity.Y < vect.Y * maxFactor)) {
		finalVect.Y = vect.Y * maxFactor;
	}
	else {
		finalVect.Y = vect.Y + velocity.Y;
	}

	if ((vect.Z > 0 && velocity.Z > vect.Z * maxFactor) || (vect.Z < 0 && velocity.Z < vect.Z * maxFactor)) {
		finalVect.Z = velocity.Z;
	}
	else if ((vect.Z > 0 && vect.Z + velocity.Z > vect.Z * maxFactor) || (vect.Z < 0 && vect.Z + velocity.Z < vect.Z * maxFactor)) {
		finalVect.Z = vect.Z * maxFactor;
	}
	else {
		finalVect.Z = vect.Z + velocity.Z;
	}

	PhysicsBody->SetAllPhysicsLinearVelocity(finalVect);	
}

FVector APlayerSummon::GetPlayerVelocity()
{
	// return FVector(0, 0, 0);
	
	if (PhysicsBody) {
		return PhysicsBody->GetComponentVelocity();
	}
	else {
		return FVector(0, 0, 0);
	}

	//if (GetRootComponent() && GetRootComponent()->IsSimulatingPhysics())
	//{
	//	return GetRootComponent()->GetComponentVelocity();
	//}

	//const UPawnMovementComponent* MovementComponent = GetMovementComponent();
	//return MovementComponent ? MovementComponent->Velocity : FVector::ZeroVector;	
}

void APlayerSummon::print(FString x)
{
	if (GEngine) {
		//FString	print = FString::Printf(TEXT("now summon!"));
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, x);
		//GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, print);
	}	
}
void APlayerSummon::log(FString x)
{
	if (GEngine) {
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, x);
	}
}
void APlayerSummon::error(FString x)
{
	if (GEngine) {
		GEngine->AddOnScreenDebugMessage(-1, 10.0f, FColor::Red, x);
	}
}

void APlayerSummon::Hit()
{
	isAlive = false;
	Destroy();
}

void APlayerSummon::HandleGroundDetection()
{
	FHitResult groundRayStatic(ForceInit);

	GetWorld()->LineTraceSingleByObjectType(
		groundRayStatic,
		GetActorLocation() + FVector(0, 0, 10),
		GetActorLocation() + FVector(0, 0, -10),
		ECC_WorldStatic
	);

	FHitResult groundRayPhysBody(ForceInit);

	GetWorld()->LineTraceSingleByObjectType(
		groundRayPhysBody,
		GetActorLocation() + FVector(0, 0, 10),
		GetActorLocation() + FVector(0, 0, -10),
		ECC_PhysicsBody
	);

	if (grounded != (groundRayStatic.bBlockingHit || groundRayPhysBody.bBlockingHit))
	{
		grounded = groundRayStatic.bBlockingHit || groundRayPhysBody.bBlockingHit;
	}
}