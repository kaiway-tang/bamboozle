// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Components/BoxComponent.h"
#include "PlayerClone.generated.h"

UCLASS()
class MYPROJECT_API APlayerClone : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	APlayerClone();

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
	float mouseX;
	UPROPERTY(BlueprintReadWrite)
	float mouseY;

	float deltaAccumulator;

	UPROPERTY(EditAnywhere)
	float mouseSensitivity;
	UPROPERTY(EditAnywhere)
	float fwdForce;
	UPROPERTY(EditAnywhere)
	float moveForce;
	UPROPERTY(EditAnywhere)
	float jumpPower;

	void AttemptJump();

	UPROPERTY(EditAnywhere)
	UActorComponent* cameraComponent;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void FixedUpdate();

	void HandleMovement();
	void HandleRotation();


	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UFUNCTION(BlueprintCallable)
	void AddForce(FVector force, bool ignoreMass);

	UFUNCTION(BlueprintCallable)
	void SetPosition(FVector position, bool updatePhysics);

	UFUNCTION(BlueprintCallable)
	void KeySpaceDown();
};
