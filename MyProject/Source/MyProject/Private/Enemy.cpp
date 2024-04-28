// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemy.h"
#include "SpawnManager.h"
#include "Kismet/KismetMathLibrary.h"

TArray<AEnemy*> AEnemy::directVisiblity;
TArray<AEnemy*> AEnemy::indirectVisiblity;
FVector AEnemy::lastTargetSpotting;

// Sets default values
AEnemy::AEnemy()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	PrimaryActorTick.bCanEverTick = true;

	RootMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Root Mesh"));
	RootMesh->SetSimulatePhysics(true);

	RootBoneName = RootMesh->GetFName();

	Hitbox = CreateDefaultSubobject<UBoxComponent>(TEXT("Hitbox"));
	Hitbox->SetupAttachment(RootMesh);
}

// Called when the game starts or when spawned
void AEnemy::BeginPlay()
{
	Super::BeginPlay();

	if (RootMesh) {
		PhysicsBody = Cast<UPrimitiveComponent>(RootMesh);
	}
	else {
		print("no root mesh");
	}

	gameManager = Cast<ABamboozleGameMode>(UGameplayStatics::GetGameMode(this));
	gameManager->enemies.Add(this);

	summonCooldown = 100;
	isAlive = true;

	directVisiblity.Empty();
	indirectVisiblity.Empty();

	life = 250;
}

AEnemy* AEnemy::SpawnClone(FVector pos) {
	return gameManager->world->SpawnActor<AEnemy>(cloneActor,
		pos, GetActorRotation());
}

void AEnemy::SpawnClone()
{
	AEnemy* actorRef = SpawnClone(GetActorLocation() + FVector(0, 0, 40) + GetActorForwardVector() * 70);

	if (!actorRef) {
		error("Could not generate actor ref");
		return;
	}

	if (cloneA->IsValidLowLevel())
	{
		if (cloneB->IsValidLowLevel()) {
			cloneB->DeleteSelf();
			error("should not be allowed to spawn more clones");
		}
		cloneB = Cast<AEnemy>(actorRef);
		cloneB->SetVelocity((GetActorForwardVector() + FVector(0, 0, 0.5)) * spawnVelocity);
		cloneB->isClone = true;

		cloneB->parent = this;
		cloneB->parent = this;
		cloneB->isCloneA = false;
	} else
	{
		cloneA = Cast<AEnemy>(actorRef);
		cloneA->SetVelocity((GetActorForwardVector() + FVector(0, 0, 0.5)) * spawnVelocity);
		cloneA->isClone = true;
		cloneA->parent = this;

		cloneA->parent = this;
		cloneA->isCloneA = true;
	}
}

void AEnemy::DoRandomCloneSwap()
{
	if (FMath::RandRange(0, 1) == 0 && cloneB->IsValidLowLevel()) {
		DoTeleport(cloneB->GetActorLocation());
		cloneB->DoTeleport(GetActorLocation());
	}
	else if (cloneA->IsValidLowLevel()) {
		DoTeleport(cloneA->GetActorLocation());
		cloneA->DoTeleport(GetActorLocation());
	}
	else if (cloneB->IsValidLowLevel()) {
		DoTeleport(cloneB->GetActorLocation());
		cloneB->DoTeleport(GetActorLocation());
	}
	else {
		return;
	}
}

void AEnemy::DoTeleport(FVector destination) {
	teleportDestionation = destination;
	initTpPos = GetActorLocation();
	teleportWindow = 15;
}

void AEnemy::HandleTeleporting()
{
	if (teleportWindow > 0) {
		teleportWindow--;
		SetActorLocation(teleportWindow/10 * initTpPos + (10-teleportWindow)/ 10 * teleportDestionation);
	}
}

void AEnemy::HandleAntiCamping()
{
	if (isClone) {
		if (!targetVisible) {
			if (antiCampTmr > 0) {
				antiCampTmr--;
			}
			else {
				antiCampTmr = FMath::RandRange(400,800);
				DoTeleport(playerReference->GetOldestPosition());
			}
		}
		else {
			antiCampTmr = FMath::RandRange(400, 800);
		}
	}

	if (!targetVisible) {
		if (tryFlyCD > 0) {
			tryFlyCD--;
		}
		else {
			targetFlyHeight = GetActorLocation();
			targetFlyHeight.Z = playerReference->GetActorLocation().Z;
			tryFlyCD = FMath::RandRange(200,400);
		}
	}
}

void AEnemy::HandleTargetVisibility()
{
	if (targVisUpdateTmr > 0) { targVisUpdateTmr--; }
	else {
		targVisUpdateTmr = 15;
		targetVisible = TargetVisibleRay();

		if (targetVisible) {
			seeking = false;
			lastTargetSpotting = GetActorLocation();
		}
		else if (!seeking) {
			for (size_t i = 0; i < directVisiblity.Num(); i++)
			{
				if (directVisiblity[i]->IsValidLowLevel() && PointVisibleRay(directVisiblity[i]->GetActorLocation())) {
					seeking = true;
					seekDestination = directVisiblity[i]->GetActorLocation();
					break;
				}
			}
			
			if (!seeking) {
				seeking = true;
				seekDestination = lastTargetSpotting;
			}
		}
	}

	if (targetVisibleFlag != targetVisible) {
		targetVisibleFlag = targetVisible;

		if (targetVisible) {
			directVisiblity.Add(this);
		}
		else {
			directVisiblity.Remove(this);
		}
	}
}

void AEnemy::HandleSeeking()
{
	if (seeking) {
		FacePoint(seekDestination);
		MoveForward(1, false);		
		if ((seekDestination - GetActorLocation()).SquaredLength() < 400) { seeking = false; }
	}
}

void AEnemy::HandleAltitude()
{
	if (seeking) {
		if (GetActorLocation().Z < seekDestination.Z) {
			Thrust(liftThrust);
		}
	}
	else if (targetVisible) {
		if (GetActorLocation().Z < playerReference->GetActorLocation().Z) {
			Thrust(liftThrust);
		}
	}
	else {
		Thrust(hoverThrust);
	}
}

void AEnemy::Thrust(float thrust)
{
	tempFVect.X = 0;
	tempFVect.Y = 0;
	tempFVect.Z = thrust;
	AddVelocity(tempFVect);
}

// Called every frame
void AEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);	

	deltaAccumulator += DeltaTime;
	while (deltaAccumulator >= 0.02) {
		FixedUpdate();
		deltaAccumulator -= 0.02;
	}
}

void AEnemy::SpinForPlayerReference() {
	if (Cast<ABamboozleGameMode>(UGameplayStatics::GetGameMode(this))->GetPlayerRef()) {
		playerReference = Cast<ABamboozleGameMode>(UGameplayStatics::GetGameMode(this))->GetPlayerRef();
		hasPlayerReference = true;
	}
}

void AEnemy::FixedUpdate()
{
	if (playerReference) {

		//FacePlayer(false);
		//MoveForward(1, false);
		//ApplyFriction(baseFrictionFactor);

		if (targetUpdateTimer > 0) { targetUpdateTimer--; }
		else {
			UpdateTarget();
			targetUpdateTimer = FMath::RandRange(20,80);
		}		

		HandleSummoning();
		//HandleAntiCamping();
		HandleTargetVisibility();
		HandleAltitude();
		HandleSeeking();
	}
	else {
		SpinForPlayerReference();
	}

	if (isClone) {
		life--;
		if (life < 1) { DeleteSelf(); }
	}
}

void AEnemy::HandleSummoning() {
	if (isClone) { return; }

	if (cloneA->IsValidLowLevel() && cloneB->IsValidLowLevel()) {
		if (summonCooldown > 100) { summonCooldown--; }
	}
	else {
		//print("summonin");
		if (summonCooldown > 0) {
			summonCooldown--;
		}
		else {
			SpawnClone();
			summonCooldown = 150;
		}
	}
}

void AEnemy::MoveForward(float spdFactor, bool moveZ)
{
	tempFVect = GetActorForwardVector() * baseMoveSpeed * spdFactor;
	if (!moveZ) { tempFVect.Z = 0; }
	AddVelocity(tempFVect, 5);
}

void AEnemy::FacePoint(FVector point) {
	SetActorRotation(UKismetMathLibrary::FindLookAtRotation(GetActorLocation(), point));
}

void AEnemy::FaceTarget(bool trackZ)
{
	tempFVect = TargetPosition();
	

	if (!trackZ) {
		tempFVect.Z = GetActorLocation().Z;
	}

	SetActorRotation(UKismetMathLibrary::FindLookAtRotation(GetActorLocation(), tempFVect));
}

void AEnemy::Strafe(float spdFactor)
{
	FaceTarget(false);
	tempFVect = GetActorRightVector() * baseMoveSpeed * spdFactor;
	tempFVect.Z = 0;
	AddVelocity(tempFVect, 5);
}

float AEnemy::DistanceToTarget()
{
	return (TargetPosition() - GetActorLocation()).Size();
}

void AEnemy::UpdateTarget() {
	targetID = 0;

	if (!ValidateTarget(0)) { /*error("No player ref");*/ return; }

	float distance = (playerReference->GetActorLocation() - GetActorLocation()).SquaredLength();
	float temp = 0;

	if (ValidateTarget(1)) {
		temp = (gameManager->playerCloneQ->GetActorLocation() - GetActorLocation()).SquaredLength();

		if (temp < distance) { distance = temp; targetID = 1; }
	}

	if (ValidateTarget(2)) {
		temp = (gameManager->playerCloneE->GetActorLocation() - GetActorLocation()).SquaredLength();

		if (temp < distance) { targetID = 2; }
	}
}

bool AEnemy::ValidateTarget(int id)
{
	if (id == 0) {
		return playerReference->IsValidLowLevel() && playerReference->isAlive;
	}
	if (id == 1) {
		return gameManager->IsValidLowLevel() && gameManager->playerCloneQ->IsValidLowLevel() && gameManager->playerCloneQ->isAlive;
	}
	if (id == 2) {
		return gameManager->IsValidLowLevel() && gameManager->playerCloneE->IsValidLowLevel() && gameManager->playerCloneE->isAlive;
	}
	error("invalid id");
	return false;
}

bool AEnemy::ValidateTarget()
{
	if (ValidateTarget(targetID)) {
		return true;
	}
	else {
		UpdateTarget();
		return ValidateTarget(targetID);
	}
}


FVector AEnemy::TargetPosition()
{
	if (!ValidateTarget()) { return FVector(); }
	if (targetID == 1)
	{
		return gameManager->playerCloneQ->GetActorLocation();
	}
	else if (targetID == 2)
	{
		return gameManager->playerCloneE->GetActorLocation();
	}
	else {
		return playerReference->GetActorLocation();
	}
}

bool AEnemy::TargetVisibleRay()
{
	FHitResult ray(ForceInit);

	GetWorld()->LineTraceSingleByObjectType(
		ray,
		GetActorLocation() + FVector(0, 0, 40),
		TargetPosition() + FVector(0, 0, 40),
		ECC_WorldStatic
	);

	return !ray.bBlockingHit;
}

bool AEnemy::PointVisibleRay(FVector point) {
	FHitResult ray(ForceInit);

	GetWorld()->LineTraceSingleByObjectType(
		ray,
		GetActorLocation() + FVector(0, 0, 40),
		point,
		ECC_WorldStatic
	);

	return !ray.bBlockingHit;
}


FRotator AEnemy::ToTargetRotation(FVector startPos)
{
	if (!playerReference) { error("No player ref"); return FRotator(); }

	return UKismetMathLibrary::FindLookAtRotation(startPos, TargetPosition());
}

FRotator AEnemy::ToTargetRotation()
{
	if (!playerReference) { error("No player ref"); return FRotator(); }

	return ToTargetRotation(GetActorLocation());
}

FVector AEnemy::ToTargetVector(FVector startPos)
{
	if (!playerReference) { error("No player ref"); return FVector(); }

	return (TargetPosition() - startPos).GetSafeNormal();
}

FVector AEnemy::ToTargetVector()
{
	return ToTargetVector(GetActorLocation());
}

FVector AEnemy::TargetPredictedPos(float time)
{
	if (!ValidateTarget()) {
		return FVector();
	}

	if (targetID == 1)
	{
		if (gameManager->playerCloneQ) {
			return gameManager->playerCloneQ->GetActorLocation() + gameManager->playerCloneQ->GetVelocity() * time;
		}
		else { error("No clone Q"); return FVector(); }
	}
	else if (targetID == 2)
	{
		if (gameManager->playerCloneE) {
			return gameManager->playerCloneE->GetActorLocation() + gameManager->playerCloneE->GetVelocity() * time;
		}
		else { error("No clone E"); return FVector(); }
	}
	else if (playerReference) { return playerReference->GetActorLocation() + playerReference->GetVelocity() * time; }
	else {
		error("No player ref");
		return FVector();
	}
}

TArray<AActor*> AEnemy::CastAttackRay(FVector start, FVector end)
{
	TArray<FHitResult> attackRay;

	GetWorld()->LineTraceMultiByObjectType(
		attackRay,
		start,
		end,
		ECC_Vehicle
	);

	TArray<AActor*> hitActors;

	for (size_t i = 0; i < attackRay.Num(); i++)
	{
		hitActors.Emplace(attackRay[i].GetActor());

		APlayerClone* playerScr = Cast<APlayerClone>(attackRay[i].GetActor());
		if (playerScr->IsValidLowLevel()) { error("i got u!"); playerScr->Hit(); }
		APlayerSummon* summonScr = Cast<APlayerSummon>(attackRay[i].GetActor());
		if (summonScr->IsValidLowLevel()) { summonScr->Hit(); }
	}

	return hitActors;
}

void AEnemy::Hit()
{
	print("rekt");
	DeleteSelf();
}

void AEnemy::DeleteSelf()
{
	gameManager->enemies.Remove(this);
	if (!isClone) {
		if (cloneA->IsValidLowLevel()) { cloneA->DeleteSelf(); }
		if (cloneB->IsValidLowLevel()) { cloneB->DeleteSelf(); }
		print("kill sum");

		//ASpawnManager::spawnCount--;
		ASpawnManager::EnemySlain();

		gameManager->AddScore(1);
	}
	else {
		if (isCloneA) {
			parent->cloneA = nullptr;
		}
		else {
			parent->cloneB = nullptr;
		}
	}
	isAlive = false;
	Destroy();
}


//movement
#if 1

void AEnemy::SetVelocity(FVector vect)
{
	PhysicsBody->SetAllPhysicsLinearVelocity(vect);
}

void AEnemy::SetVelocity(float x, float y, float z)
{
	tempFVect.X = x;
	tempFVect.Y = y;
	tempFVect.Z = x;
	PhysicsBody->SetAllPhysicsLinearVelocity(tempFVect);
}

void AEnemy::AddVelocity(FVector vect)
{
	PhysicsBody->SetAllPhysicsLinearVelocity(vect + GetVelocity());	
}

void AEnemy::AddVelocity(FVector vect, float maxFactor)
{
	FVector velocity = GetVelocity();
	tempFVect = FVector(0, 0, 0);

	if ((vect.X > 0 && velocity.X > vect.X * maxFactor) || (vect.X < 0 && velocity.X < vect.X * maxFactor)) {
		tempFVect.X = velocity.X;
	}
	else if ((vect.X > 0 && vect.X + velocity.X > vect.X * maxFactor) || (vect.X < 0 && vect.X + velocity.X < vect.X * maxFactor)) {
		tempFVect.X = vect.X * maxFactor;
	}
	else {
		tempFVect.X = vect.X + velocity.X;
	}

	if ((vect.Y > 0 && velocity.Y > vect.Y * maxFactor) || (vect.Y < 0 && velocity.Y < vect.Y * maxFactor)) {
		tempFVect.Y = velocity.Y;
	}
	else if ((vect.Y > 0 && vect.Y + velocity.Y > vect.Y * maxFactor) || (vect.Y < 0 && vect.Y + velocity.Y < vect.Y * maxFactor)) {
		tempFVect.Y = vect.Y * maxFactor;
	}
	else {
		tempFVect.Y = vect.Y + velocity.Y;
	}

	if ((vect.Z > 0 && velocity.Z > vect.Z * maxFactor) || (vect.Z < 0 && velocity.Z < vect.Z * maxFactor)) {
		tempFVect.Z = velocity.Z;
	}
	else if ((vect.Z > 0 && vect.Z + velocity.Z > vect.Z * maxFactor) || (vect.Z < 0 && vect.Z + velocity.Z < vect.Z * maxFactor)) {
		tempFVect.Z = vect.Z * maxFactor;
	}
	else {
		tempFVect.Z = vect.Z + velocity.Z;
	}

	PhysicsBody->SetAllPhysicsLinearVelocity(tempFVect);
}


FVector AEnemy::GetVelocity()
{
	if (PhysicsBody) {
		return PhysicsBody->GetComponentVelocity();
	}
	else {
		print("no phys body");
		return FVector(0, 0, 0);
	}
	//if (GetRootComponent() && GetRootComponent()->IsSimulatingPhysics())
	//{
	//	return GetRootComponent()->GetComponentVelocity();
	//}

	//const UPawnMovementComponent* MovementComponent = GetMovementComponent();
	//return MovementComponent ? MovementComponent->Velocity : FVector::ZeroVector;	
}

void AEnemy::print(FString x)
{
	if (GEngine) {
		GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::Yellow, x);
	}
}
void AEnemy::log(FString x)
{
	if (GEngine) {
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, x);
	}
}
void AEnemy::error(FString x)
{
	if (GEngine) {
		GEngine->AddOnScreenDebugMessage(-1, 10.0f, FColor::Red, x);
	}
}

void AEnemy::ApplyFriction(float factor)
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

#endif