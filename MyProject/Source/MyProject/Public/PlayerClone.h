// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Components/BoxComponent.h"
#include "Camera/CameraComponent.h"
#include "Kismet/GameplayStatics.h"
#include <BamboozleGameMode.h>
#include <PlayerSummon.h>
#include "PlayerClone.generated.h"

UCLASS()
class MYPROJECT_API APlayerClone : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	APlayerClone();

	UPROPERTY(EditAnywhere)
	UCameraComponent* CameraComponent;

	static bool spawnEnemy;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* RootMesh;

	UPROPERTY(VisibleAnywhere)
	UBoxComponent* Hitbox;

	UPROPERTY(BlueprintReadOnly)
	UPrimitiveComponent* PhysicsBody;
	FName RootBoneName;

	ABamboozleGameMode* gm;

	UFUNCTION()
	void OnTriggerEnter(UPrimitiveComponent* curHitbox, AActor* other, UPrimitiveComponent* otherHitbox, int32 otherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UPROPERTY(BlueprintReadWrite)
	bool keyWDown;
	UPROPERTY(BlueprintReadWrite)
	bool keySDown;
	UPROPERTY(BlueprintReadWrite)
	bool keyADown;
	UPROPERTY(BlueprintReadWrite)
	bool keyDDown;
	UPROPERTY(BlueprintReadWrite)
	bool keySpaceDown;

	UPROPERTY(BlueprintReadWrite)
	bool mouseLeftDown;
	bool mouseLeftFlag;
	UPROPERTY(BlueprintReadWrite)
	bool mouseRightDown;
	bool mouseRightFlag;
	UPROPERTY(BlueprintReadWrite)
	float mouseX;
	UPROPERTY(BlueprintReadWrite)
	float mouseY;

	float deltaAccumulator;

	UPROPERTY(EditAnywhere)
	float mouseSensitivity;
	UPROPERTY(EditAnywhere)
	float fwdForce;
	UPROPERTY(EditAnywhere)
	float baseMoveSpd;
	UPROPERTY(EditAnywhere)
	float moveMaxFactor;
	UPROPERTY(EditAnywhere)
	float jumpPower;
	UPROPERTY(EditAnywhere)
	float baseFrictionFactor;
	UPROPERTY(EditAnywhere)
	float gravity;

	UPROPERTY(EditAnywhere)
	float startOffset;
	UPROPERTY(EditAnywhere)
	float endOffset;

	void AttemptJump();

	UPROPERTY(EditDefaultsOnly, Category = "ActorSpawning")
	TSubclassOf<APlayerSummon> PlayerSummonBP;
	UPROPERTY(EditDefaultsOnly, Category = "ActorSpawning")
	TSubclassOf<AEnemy> AsssassinSummoner;

	void HandlePositionTracking();
	TArray<FVector> previousPositions;
	int positionUpdateTimer;

	//----------------------------------------------------------------------------------------------

	int dJumpWindow;
	bool hasDJump;

	int movementLocked;
	bool grounded;	

	int dashingWindow;
	int energy;
	UPROPERTY(EditAnywhere)
	int abilityCost;
	UPROPERTY(EditAnywhere)
	int maxEnergy;

	FVector dashDirection;
	FVector dashInitPosition;

	UPROPERTY(EditAnywhere)
	float dashSpeed;
	UPROPERTY(EditAnywhere)
	float dashDuration;

	UPROPERTY(EditAnywhere)
	float dJumpPower;

	UPROPERTY(EditAnywhere)
	float slashExtension;

	UPROPERTY(BlueprintReadOnly)
	bool slashOffCD;

	//----------------------------------------------------------------------------------------------

	UPROPERTY(EditAnywhere)
	float attackWidth;
	TArray<AActor*> CastAttackRay(FVector offset);

	void SpawnEnemy();
	TArray<FVector> spawnPoints;

	void HandleCloneSpawning();	
	FVector GetEnemySpawnLocation();
	bool PointVisible(FVector pos);

	UFUNCTION(BlueprintCallable)
	void KeyQDown();
	UFUNCTION(BlueprintCallable)
	void KeyEDown();
	void DoTeleport();

	UPROPERTY(EditAnywhere)
	float teleportDurationFactor;

	float teleportWindow;
	float teleportDuration;
	FVector tpDestination;
	FVector tpInitPos;
	void HandleTeleport();

	UPROPERTY(BlueprintReadOnly)
	float energyBarFillPercent;
	float targetFillPercent;
	void SetFillPercent();

	UPROPERTY(BlueprintReadWrite)
	bool DamagedThisTick;

	UPROPERTY(BlueprintReadWrite)
	bool RecoveredThisTick;

	UPROPERTY(BlueprintReadWrite)
	float DamageRecoveryTimer;

	float slowMoTime;
public:
	bool isAlive;
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void FixedUpdate();

	void HandleMovement();
	void HandleRotation();


	// Called to bind functionality to input
	//virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UFUNCTION(BlueprintCallable)
	void AddForce(FVector force, bool ignoreMass);

	UFUNCTION(BlueprintCallable)
	void SetPosition(FVector position, bool updatePhysics);

	UFUNCTION(BlueprintCallable)
	void KeySpaceDown();

	void ApplyFriction(float factor);

	void SetVelocity(FVector vect);
	void SetVelocity(float x, float y, float z);
	void AddVelocity(FVector vect);
	void AddVelocity(FVector vect, float maxFactor);

	void HandleDoubleJump();
	void HandleDashSlash();

	void HandleGroundDetection();
	void HandleGravity();

	void print(FString x);

	APlayerSummon* cloneQ;
	APlayerSummon* cloneE;

	void Hit();
	FVector GetOldestPosition();
};
