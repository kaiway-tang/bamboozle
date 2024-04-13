// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerClone.h"

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
}

void APlayerClone::OnTriggerEnter(UPrimitiveComponent* curHitbox, AActor* other, UPrimitiveComponent* otherHitbox, int32 otherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (GEngine)
		GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::Yellow, other->GetName());
}

// Called every frame
void APlayerClone::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APlayerClone::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

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

