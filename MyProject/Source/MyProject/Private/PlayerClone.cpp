// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerClone.h"
#include "Enemy.h"

bool APlayerClone::spawnEnemy = false;

// Sets default values
APlayerClone::APlayerClone()
{
	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	RootMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Root Mesh"));
	RootMesh->SetSimulatePhysics(true);

	RootBoneName = RootMesh->GetFName();

	Hitbox = CreateDefaultSubobject<UBoxComponent>(TEXT("Hitbox"));
	Hitbox->SetupAttachment(RootMesh);	
}

// Called when the game starts or when spawned
void APlayerClone::BeginPlay()
{
	Super::BeginPlay();

	PhysicsBody = Cast<UPrimitiveComponent>(RootMesh);
	Hitbox->OnComponentBeginOverlap.AddDynamic(this, &APlayerClone::OnTriggerEnter);

	//dashSpeed = 4500;
	//dashDuration = 7;	

	CameraComponent = GetComponentByClass<UCameraComponent>();

	gm = Cast<ABamboozleGameMode>(UGameplayStatics::GetGameMode(this));

	if (gm)
	{
		gm->SetPlayerRef(this);
	}		

	grounded = false;
	hasDJump = false;

	
	isAlive = true;

	for (size_t i = 0; i < 35; i++)
	{
		previousPositions.Add(GetActorLocation());
	}

	spawnPoints.Add(FVector(500, 960, 250));
	spawnPoints.Add(FVector(400, 600, 1250));
	spawnPoints.Add(FVector(400, -1100, 1250));
	spawnPoints.Add(FVector(1100, 700, 2050));
	spawnPoints.Add(FVector(-400, 700, 2050));
	spawnPoints.Add(FVector(-1050, 1050, 450));
	spawnPoints.Add(FVector(-700, -900, 450));
	spawnPoints.Add(FVector(1600, 1500, 1050));

	for (size_t i = 0; i < spawnPoints.Num(); i++)
	{
		spawnPoints[i] = spawnPoints[i] * 0.8;
	}

	abilityCost = 200;
	maxEnergy = 600;
	energy = 600;
}

void APlayerClone::OnTriggerEnter(UPrimitiveComponent* curHitbox, AActor* other, UPrimitiveComponent* otherHitbox, int32 otherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	//if (GEngine)
	//	GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::Yellow, other->GetName());
}

// Called every frame
void APlayerClone::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (spawnEnemy) {
		SpawnEnemy();
		spawnEnemy = false;
	}

	if (slowMoTime > 0) {
		slowMoTime -= DeltaTime;
		if (slowMoTime <= 0) {
			slowMoTime = 0;
			GetWorld()->GetWorldSettings()->SetTimeDilation(1);
		}
	}

	// Sorry didnt have a better place to put this
	if (DamageRecoveryTimer > 0) {
		DamageRecoveryTimer -= DeltaTime;
		if (DamageRecoveryTimer <= 0) {
			RecoveredThisTick = true;
		}
	}

	deltaAccumulator += DeltaTime;


	while (deltaAccumulator >= 0.02f) {
		deltaAccumulator -= 0.02f;
		FixedUpdate();
	}
}

void APlayerClone::FixedUpdate()
{
	HandleDashSlash();
	HandleDoubleJump();
	HandleGroundDetection();
	HandleCloneSpawning();
	HandleTeleport();
	HandlePositionTracking();
	HandleGravity();

	if (movementLocked < 1) {
		HandleMovement();
		HandleRotation();
	}	
}

void APlayerClone::HandlePositionTracking() {
	if (positionUpdateTimer > 0) {
		positionUpdateTimer--;
	}
	else {
		positionUpdateTimer = 10;
		previousPositions.RemoveAt(0);
		previousPositions.Add(GetActorLocation());
	}
}

void APlayerClone::HandleMovement()
{
	FVector fwdVec = GetActorForwardVector() * baseMoveSpd;
	FVector rightVec = GetActorRightVector() * baseMoveSpd;

	if (grounded) {
	}
	else {
		fwdVec = fwdVec * 0.3;
		rightVec = rightVec * 0.3;
	}

	FVector movementVec;

	if (keyWDown) {
		if (!keySDown) {
			if (keyADown) {
				if (!keyDDown) {
					AddVelocity((fwdVec - rightVec) * .707, moveMaxFactor);
				}
			}
			else if (keyDDown) {
				AddVelocity((fwdVec + rightVec) * .707, moveMaxFactor);
			}
			else {
				AddVelocity(fwdVec, moveMaxFactor);
			}
		}
	}
	else if (keySDown) {
		if (keyADown) {
			if (!keyDDown) {
				AddVelocity((-fwdVec - rightVec) * .707, moveMaxFactor);
			}
		}
		else if (keyDDown) {
			AddVelocity((-fwdVec + rightVec) * .707, moveMaxFactor);
		}
		else {
			AddVelocity(-fwdVec, moveMaxFactor);
		}
	}
	else {
		if (keyADown) {
			if (!keyDDown) {
				AddVelocity(-rightVec, moveMaxFactor);
			}
		}
		else if (keyDDown) {
			AddVelocity(rightVec, moveMaxFactor);
		}
		else {
			
		}
	}
	
	if (grounded) { ApplyFriction(1); }
}

void APlayerClone::HandleRotation()
{
	//FRotator rotation = FRotator(0, mouseX, 0) * mouseSensitivity;
	FRotator rotation = GetActorRotation() + FRotator(0, mouseX, 0) * mouseSensitivity;
	 
	//PhysicsBody->AddRelativeRotation(rotation);
	//AddActorLocalRotation(rotation);
	SetActorRotation(rotation);
		
	if (CameraComponent) {
		rotation = CameraComponent->GetComponentRotation() + FRotator(mouseY, 0, 0) * mouseSensitivity;
		//print(FString::SanitizeFloat(rotation.Pitch));
		if (rotation.Pitch > 89) { rotation.Pitch = 89; }
		if (rotation.Pitch < -89) { rotation.Pitch = -89; }
		CameraComponent->SetWorldRotation(rotation);
	}	
	//cameraComponent->
	//cameraActor->AddActorLocalRotation(rotation);

	//PhysicsBody->AddLocalRotation(rotation);


}

// Called to bind functionality to input
// void APlayerClone::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
// {
// 	//Super::SetupPlayerInputComponent(PlayerInputComponent);

// }

void APlayerClone::AddForce(FVector force, bool ignoreMass = false)
{
	PhysicsBody->AddForce(force, RootBoneName, ignoreMass);
	// PhysicsBody->AddForce(force);
}

void APlayerClone::SetPosition(FVector position, bool updatePhysics = false)
{
	const FTransform* curTrfm = &GetTransform();

	ETeleportType physicsResponse = updatePhysics ? ETeleportType::ResetPhysics : ETeleportType::TeleportPhysics;

	const FTransform newTrfm = FTransform(curTrfm->GetRotation(), position, curTrfm->GetScale3D());
	SetActorTransform(newTrfm, false, nullptr, physicsResponse);

}

void APlayerClone::KeySpaceDown()
{
	AttemptJump();
}

void APlayerClone::AttemptJump()
{
	if (grounded)
	{
		SetVelocity(GetVelocity().X, GetVelocity().Y, jumpPower);
	}
	else if (hasDJump) {
		FVector direction = CameraComponent->GetForwardVector() + FVector(0, 0, 0.33);
		direction.Normalize();
		SetVelocity(direction * dJumpPower);
		dJumpWindow = 0;
		hasDJump = false;
	}
}


void APlayerClone::ApplyFriction(float factor)
{	
	FVector velocity = GetVelocity();
	velocity.Z = 0;	
	FVector counterVelocity = -velocity;
	counterVelocity.Normalize();
	counterVelocity = counterVelocity * factor* baseFrictionFactor;

	if (counterVelocity.SquaredLength() > velocity.SquaredLength()) {
		SetVelocity(FVector(0,0,GetVelocity().Z));
	}
	else {		
		AddVelocity(counterVelocity);
	}
}

void APlayerClone::SetVelocity(FVector vect)
{
	PhysicsBody->SetAllPhysicsLinearVelocity(vect);
}

void APlayerClone::SetVelocity(float x, float y, float z)
{
	PhysicsBody->SetAllPhysicsLinearVelocity(FVector(x,y,z));
}

void APlayerClone::AddVelocity(FVector vect)
{
	PhysicsBody->SetAllPhysicsLinearVelocity(vect + GetVelocity());
}

void APlayerClone::AddVelocity(FVector vect, float maxFactor)
{
	FVector velocity = GetVelocity();
	FVector finalVect = FVector(0,0,0);

	if ((vect.X > 0 && velocity.X > vect.X * maxFactor) || (vect.X < 0 && velocity.X < vect.X * maxFactor)) {
		finalVect.X = velocity.X;
	}
	else if ((vect.X > 0 && vect.X + velocity.X > vect.X * maxFactor) || (vect.X < 0 && vect.X + velocity.X < vect.X * maxFactor)) {						
		finalVect.X = vect.X * maxFactor;
	}
	else {
		finalVect.X = vect.X  + velocity.X;
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

void APlayerClone::HandleDoubleJump()
{
	if (dJumpWindow > 0) {
		dJumpWindow--;
	}
}

TArray<AActor*> APlayerClone::CastAttackRay(FVector offset)
{
	TArray<FHitResult> attackRay;

	GetWorld()->LineTraceMultiByObjectType(
		attackRay,
		dashInitPosition + dashDirection * slashExtension + FVector(0, 0, 40) + offset,
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

void APlayerClone::SpawnEnemy() {
	AEnemy* actorRef = GetWorld()->SpawnActor<AEnemy>(AsssassinSummoner,
		GetEnemySpawnLocation(), GetActorRotation());
}

void APlayerClone::HandleCloneSpawning()
{
	if (mouseRightFlag != mouseRightDown) {
		mouseRightFlag = mouseRightDown;
		if (mouseRightDown && energy >= abilityCost) {

			APlayerSummon* actorRef = GetWorld()->SpawnActor<APlayerSummon>(PlayerSummonBP,
				GetActorLocation() + FVector(0,0,40) + CameraComponent->GetForwardVector() * 70, GetActorRotation());

			ABamboozleGameMode* gameManager = Cast<ABamboozleGameMode>(UGameplayStatics::GetGameMode(this));

			if (cloneE->IsValidLowLevel() && cloneE->isAlive) { cloneE->Destroy(); }
			if (cloneQ->IsValidLowLevel() && cloneQ->isAlive)
			{
				cloneE = cloneQ;
				gameManager->playerCloneE = cloneE;
			}

			cloneQ = Cast<APlayerSummon>(actorRef);
			cloneQ->spawnDirection = CameraComponent->GetForwardVector();
			cloneQ->SetVelocity(cloneQ->spawnDirection * cloneQ->launchVelocity);

			gameManager->playerCloneQ = cloneQ;

			energy -= abilityCost;
		}
	}	
}

FVector APlayerClone::GetEnemySpawnLocation()
{
	TArray<FVector> OOSPoints;
	for (size_t i = 0; i < spawnPoints.Num(); i++)
	{
		if (!PointVisible(spawnPoints[i])) {
			OOSPoints.Add(spawnPoints[i]);
		}
	}

	return OOSPoints[FMath::RandRange(0, OOSPoints.Num() - 1)];

	int minDistInd = 0;
	float minDist = (OOSPoints[0] - GetActorLocation()).SquaredLength();
	float temp;

	for (size_t i = 1; i < OOSPoints.Num(); i++)
	{
		//get min dist
		temp = (OOSPoints[i] - GetActorLocation()).SquaredLength();
		if (temp < minDist) {
			minDist = temp;
			minDistInd = i;
		}
	}

	return OOSPoints[minDistInd];
}

bool APlayerClone::PointVisible(FVector pos)
{
	FHitResult ray(ForceInit);

	GetWorld()->LineTraceSingleByObjectType(
		ray,
		GetActorLocation() + FVector(0, 0, 40),
		pos,
		ECC_WorldStatic
	);

	return !ray.bBlockingHit;
}

void APlayerClone::KeyQDown()
{
	if (cloneQ->IsValidLowLevel() && cloneQ->isAlive && teleportWindow < 1) {
		tpDestination = cloneQ->GetActorLocation();
		cloneQ->SetActorLocation(GetActorLocation());
		DoTeleport();
	}	
}

void APlayerClone::KeyEDown()
{
	if (cloneE->IsValidLowLevel() && cloneE->isAlive && teleportWindow < 1) {
		tpDestination = cloneE->GetActorLocation();
		cloneE->SetActorLocation(GetActorLocation());
		DoTeleport();
	}	
}

void APlayerClone::DoTeleport()
{
	tpInitPos = GetActorLocation();
	teleportDuration = (tpInitPos - tpDestination).Size() / teleportDurationFactor;
	if (teleportDuration < 1) { teleportDuration = 5; }
	teleportWindow = teleportDuration;
}

void APlayerClone::HandleTeleport()
{
	if (teleportWindow > 0.01) {		
		teleportWindow--;
		SetActorLocation(tpInitPos * teleportWindow / teleportDuration + tpDestination * (teleportDuration - teleportWindow) / teleportDuration);
		if (teleportWindow < 0.99) {
			SetActorLocation(tpDestination);
		}
	}
}

void APlayerClone::SetFillPercent()
{
	if (energy >= maxEnergy) { targetFillPercent = 1; }
	else if (energy >= abilityCost * 2) { targetFillPercent = .66; }
	else if (energy >= abilityCost) { targetFillPercent = .33; }
	else { targetFillPercent = 0; }

	energyBarFillPercent = 0.9 * energyBarFillPercent + 0.1 * targetFillPercent;
}

void APlayerClone::HandleDashSlash()
{
	if (dashingWindow > 0) {
		SetVelocity(dashDirection * dashSpeed);

		//IN DASH

		dashingWindow--;
		if (dashingWindow < 1) {

			//END OF DASH

			SetVelocity(dashDirection * dashSpeed * 0.1);
			movementLocked--;

			TArray<AActor*> allHitActors;		

			allHitActors.Append(CastAttackRay(FVector(0, 0, 0)));
			allHitActors.Append(CastAttackRay(GetActorUpVector() * attackWidth));
			allHitActors.Append(CastAttackRay(GetActorUpVector() * -attackWidth));
			allHitActors.Append(CastAttackRay(GetActorRightVector() * attackWidth));
			allHitActors.Append(CastAttackRay(GetActorRightVector() * -attackWidth));

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
				else
				{
					enemyScript->Hit();
					if (!enemyScript->isClone) {
						GetWorld()->GetWorldSettings()->SetTimeDilation(0.4);
						slowMoTime = 0.3;
					}					
				}
			}			
		}
	}	

	if (energy < maxEnergy) {
		energy++;		
	}
	SetFillPercent();

	slashOffCD = energy >= abilityCost;
	
	if (mouseLeftFlag != mouseLeftDown) {
		mouseLeftFlag = mouseLeftDown;

		if (mouseLeftDown && energy >= abilityCost) {
			dashInitPosition = GetActorLocation();
			dashDirection = CameraComponent->GetForwardVector();
			dashingWindow = dashDuration;
			movementLocked++;

			energy -= abilityCost;
			SetFillPercent();
			//START OF DASH
		}	
	}
}



void APlayerClone::HandleGroundDetection()
{
	FHitResult groundRayStatic(ForceInit);

	GetWorld()->LineTraceSingleByObjectType(
		groundRayStatic,
		GetActorLocation() + FVector(0, 0, startOffset),
		GetActorLocation() + FVector(0, 0, endOffset),
		ECC_WorldStatic
	);

	FHitResult groundRayPhysBody(ForceInit);

	GetWorld()->LineTraceSingleByObjectType(
		groundRayPhysBody,
		GetActorLocation() + FVector(0, 0, startOffset),
		GetActorLocation() + FVector(0, 0, endOffset),
		ECC_PhysicsBody
	);


	FString	print = FString::Printf(TEXT("---"));

	if (grounded != (groundRayStatic.bBlockingHit || groundRayPhysBody.bBlockingHit)) {
		grounded = groundRayStatic.bBlockingHit || groundRayPhysBody.bBlockingHit;

		if (grounded) { hasDJump = true; }
		else { print = FString::Printf(TEXT("airborne!")); }		

		//if (GEngine)
		//	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, print);
	}	
}

void APlayerClone::HandleGravity()
{
	AddVelocity(FVector(0,0,-gravity));
}

void APlayerClone::print(FString x)
{
	if (GEngine) {
		//FString	print = FString::Printf(TEXT("now summon!"));
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, x);
		//GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, print);
	}
}

void APlayerClone::Hit()
{
	if (DamageRecoveryTimer > 0) {

		isAlive = false;
		print("kicked the bucket");

		if (gm) {
			gm->RestartMatch();
		}

		Destroy();
	}
	else {
		DamagedThisTick = true;  // The rest of calculations handled in blueprint 
	}
}

FVector APlayerClone::GetOldestPosition()
{
	return previousPositions[0];
}
