// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include <BamboozleGameMode.h>
#include "Kismet/GameplayStatics.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/BoxComponent.h"
#include "PlayerClone.h"
#include "Enemy.generated.h"

UCLASS()

class MYPROJECT_API AEnemy : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEnemy();

	void SetVelocity(FVector vect);
	void SetVelocity(float x, float y, float z);
	void AddVelocity(FVector vect);
	void AddVelocity(FVector vect, float maxFactor);
	void ApplyFriction(float factor);
	FVector GetVelocity();

private:
	void SpinForPlayerReference();
	FVector tempFVect;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	AEnemy* SpawnClone(FVector pos);

	float deltaAccumulator;
	virtual void FixedUpdate();

	int HP;
	APlayerClone* playerReference;

	UPROPERTY(EditAnywhere)
	float baseFrictionFactor;

	UPROPERTY(EditAnywhere)
	float baseMoveSpeed;

	UPROPERTY(EditAnywhere)
	float liftThrust;
	UPROPERTY(EditAnywhere)
	float hoverThrust;

	bool hasPlayerReference;

	//------------------------------------------------------------------------

	void MoveForward(float spdFactor, bool moveZ);
	void FacePoint(FVector point);
	void FaceTarget(bool trackZ);

	virtual void Strafe(float spdFactor);

	float DistanceToTarget();

	void UpdateTarget();
	bool ValidateTarget(int id);
	bool ValidateTarget();
	int targetUpdateTimer;
	int targetID; //0: player, 1: cloneQ, 2: cloneE
	FVector TargetPosition();

	bool TargetVisibleRay();
	bool PointVisibleRay(FVector point);

	FRotator ToTargetRotation(FVector startPos);
	FRotator ToTargetRotation();
	FVector ToTargetVector(FVector startPos);
	FVector ToTargetVector();
	FVector TargetPredictedPos(float time);

	ABamboozleGameMode* gameManager;
	int arrayID;

	int life;

	//------------------------------------------------------------------
	
	bool isCloneA;	
	int summonCooldown;
	AEnemy* cloneA;
	AEnemy* cloneB;
	AEnemy* parent;
	FVector teleportDestionation;
	FVector initTpPos;
	float teleportWindow;

	void HandleSummoning();
	void SpawnClone();
	void DoRandomCloneSwap();
	void DoTeleport(FVector destination);
	void HandleTeleporting();	
	void HandleAntiCamping();
	void HandleTargetVisibility();
	bool targetVisible; bool targetVisibleFlag;
	int targVisUpdateTmr;

	void HandleSeeking();
	void HandleAltitude();

	int antiCampTmr;


	UPROPERTY(EditAnywhere)
	float spawnVelocity;
	UPROPERTY(EditDefaultsOnly, Category = "ActorSpawning")
	TSubclassOf<AEnemy> cloneActor;	

	void Thrust(float thrust);
	int tryFlyCD;
	FVector targetFlyHeight;

	FVector seekDestination;
	static FVector lastTargetSpotting;
	bool seeking;

	static TArray<AEnemy*> directVisiblity;
	static TArray<AEnemy*> indirectVisiblity;

public:	

	UPROPERTY(EditAnywhere)
	bool isClone;
	bool isAlive;
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void Hit();
	TArray<AActor*> CastAttackRay(FVector start,  FVector end);
	void DeleteSelf();

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	UStaticMeshComponent* RootMesh;

	UPrimitiveComponent* PhysicsBody;
	FName RootBoneName;
	UPROPERTY(VisibleAnywhere)
	UBoxComponent* Hitbox;

	void print(FString x);
	void log(FString x);
	void error(FString x);
};
