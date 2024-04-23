// Fill out your copyright notice in the Description page of Project Settings.


#include "Spear.h"
#include "PlayerClone.h"
#include "PlayerSummon.h"
#include "Kismet/KismetMathLibrary.h"

// Sets default values
ASpear::ASpear()
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
void ASpear::BeginPlay()
{
	Super::BeginPlay();
	
	if (RootMesh) {
		PhysicsBody = Cast<UPrimitiveComponent>(RootMesh);
	}
	
	gameManager = Cast<ABamboozleGameMode>(UGameplayStatics::GetGameMode(this));	

	Hitbox->OnComponentBeginOverlap.AddDynamic(this, &ASpear::OnTriggerEnter);
}

FVector ASpear::TargetPosition()
{
	if (!ValidateTarget()) { return FVector(); }

	if (targetID == 0) {
		return gameManager->GetPlayerRef()->GetActorLocation();
	}
	if (targetID == 1) {
		return gameManager->playerCloneQ->GetActorLocation() - GetActorLocation();
	}
	if (targetID == 2) {
		return gameManager->playerCloneE->GetActorLocation() - GetActorLocation();
	}
	return FVector();
}

FVector ASpear::ToTargetVector()
{
	if (!ValidateTarget()) { return FVector(); }
	
	return (TargetPosition() - GetActorLocation()).GetSafeNormal();
}

// Called every frame
void ASpear::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	deltaAccumulator += DeltaTime;
	while (deltaAccumulator >= 0.02) {
		FixedUpdate();
		deltaAccumulator -= 0.02;
	}	
}

void ASpear::FixedUpdate() {
	timer++;

	if (timer == 2) {
		SetVelocity(ToTargetVector() * speed);
		SetActorRotation(UKismetMathLibrary::FindLookAtRotation(GetActorLocation(), TargetPosition()));
	}
	//SetVelocity(ToTargetVector() * speed);
	//SetActorRotation(UKismetMathLibrary::FindLookAtRotation(GetActorLocation(), TargetPosition()));
}


void ASpear::SetVelocity(FVector vect)
{
	PhysicsBody->SetAllPhysicsLinearVelocity(vect);		
}



bool ASpear::ValidateTarget(int id)
{
	if (id == 0) {
		return gameManager->GetPlayerRef()->IsValidLowLevel() && gameManager->GetPlayerRef()->isAlive;
	}
	if (id == 1) {
		return gameManager->IsValidLowLevel() && gameManager->playerCloneQ->IsValidLowLevel() && gameManager->playerCloneQ->isAlive;
	}
	if (id == 2) {
		return gameManager->IsValidLowLevel() && gameManager->playerCloneE->IsValidLowLevel() && gameManager->playerCloneE->isAlive;
	}
	return false;
}

bool ASpear::ValidateTarget()
{
	if (ValidateTarget(targetID)) {
		return true;
	}
	else {
		return false;
	}
}

void ASpear::print(FString x)
{
	if (GEngine) {
		GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::Yellow, x);
	}
}

void ASpear::OnTriggerEnter(UPrimitiveComponent* curHitbox, AActor* other, UPrimitiveComponent* otherHitbox, int32 otherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	SetVelocity(FVector(0,0,0));

	print(other->GetName());

	APlayerClone* playerScr = Cast<APlayerClone>(other);
	if (playerScr->IsValidLowLevel()) { print("SHOT!"); playerScr->Hit(); }

	APlayerSummon* summonScr = Cast<APlayerSummon>(other);
	if (summonScr->IsValidLowLevel()) { summonScr->Hit(); }
}