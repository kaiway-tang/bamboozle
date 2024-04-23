// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/BoxComponent.h"
#include "BamboozleGameMode.h"
#include "Spear.generated.h"

UCLASS()
class MYPROJECT_API ASpear : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ASpear();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	void SetVelocity(FVector vect);

	UPROPERTY(EditAnywhere)
	float speed;

	FVector TargetPosition();
	FVector ToTargetVector();

	bool ValidateTarget(int targetID);
	bool ValidateTarget();

	void print(FString x);

	int timer;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	void FixedUpdate();
	float deltaAccumulator;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	UStaticMeshComponent* RootMesh;

	UPrimitiveComponent* PhysicsBody;
	FName RootBoneName;
	UPROPERTY(VisibleAnywhere)
	UBoxComponent* Hitbox;

	ABamboozleGameMode* gameManager;

	int targetID;

	UFUNCTION()
	void OnTriggerEnter(UPrimitiveComponent* curHitbox, AActor* other, UPrimitiveComponent* otherHitbox, int32 otherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
};
