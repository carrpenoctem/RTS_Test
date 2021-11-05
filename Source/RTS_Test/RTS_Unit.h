// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "RTS_Unit.generated.h"


UCLASS()
class RTS_TEST_API ARTS_Unit : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ARTS_Unit();

protected:

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	// Basic static meshes will be used as units bodies
	UPROPERTY(BlueprintReadWrite, Category = "Components")
	UStaticMeshComponent* Body;

	// Attack range
	UPROPERTY(EditAnywhere, Category = "Stats")
	float AttackRange;

};
