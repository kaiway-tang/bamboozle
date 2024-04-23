// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include <BamboozleGameMode.h>
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/BoxComponent.h"
#include "Camera/CameraComponent.h"
#include "Kismet/GameplayStatics.h"
#include "string.h"
#include "PlayerSummon.generated.h"

UCLASS()
class MYPROJECT_API APlayerSummon : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APlayerSummon();

	void ApplyFriction(float factor);
	void SetVelocity(FVector vect);
	void SetVelocity(float x, float y, float z);
	void AddVelocity(FVector vect);
	void AddVelocity(FVector vect, float maxFactor);
	FVector GetPlayerVelocity();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere)
	float baseFrictionFactor;
	UPROPERTY(EditAnywhere)
	float baseSpd;
	UPROPERTY(EditAnywhere)
	float strafeSpdFactor;

	void MoveForward(float factor, bool moveZ);
	void Strafe();

	bool VerifyTarget();
	void FaceTarget(bool trackZ);	

	float DistanceToTarget();
	FVector ToTargetVector(FVector startPos);

	//----------------------------------------------------------------------

	FVector slashDirection;
	int slashWindow;
	int slashCooldown;

	TArray<AActor*> CastAttackRay(FVector offset);
	FVector dashInitPosition;
	UPROPERTY(EditAnywhere)
	float slashExtension;
	UPROPERTY(EditAnywhere)
	float attackWidth;

	UPROPERTY(EditAnywhere)
	int strafeTimer;

	UPROPERTY(EditAnywhere)
	float attackRange;
	UPROPERTY(EditAnywhere)
	float slashSpeed;
	UPROPERTY(EditAnywhere)
	float minStrafeDist;
	UPROPERTY(EditAnywhere)
	float maxStrafeDist;

	ABamboozleGameMode* gameManager;
	AEnemy* target;
	bool UpdateTarget();


public:	
	bool isAlive;
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	void FixedUpdate();
	float deltaAccumulator;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	UStaticMeshComponent* RootMesh;

	UPROPERTY(VisibleAnywhere)
	UPrimitiveComponent* PhysicsBody;
	FName RootBoneName;
	UPROPERTY(VisibleAnywhere)
	UBoxComponent* Hitbox;

	void print(FString x);
	void log(FString x);
	void error(FString x);

	UPROPERTY(EditAnywhere)
	FVector spawnDirection;

	UPROPERTY(EditAnywhere)
	float launchVelocity;

	void Hit();
	void HandleGroundDetection();
	bool grounded;
};
