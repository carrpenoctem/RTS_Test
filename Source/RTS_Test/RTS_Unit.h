// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "AbilitySystemInterface.h"
#include "AbilitySystemComponent.h"
#include "HealthAttributeSet.h"
#include "RTS_Unit.generated.h"

UCLASS()
class RTS_TEST_API ARTS_Unit : public ACharacter, public IAbilitySystemInterface
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ARTS_Unit();

protected:

	// GAS getter
	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override {
		return AbilitySystem;
	}

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	// Basic static meshes will be used as units bodies
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components")
	UStaticMeshComponent* Body;

	// Attack range
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stats")
	float AttackRange;

	// GAS setup
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Abilities")
	class UAbilitySystemComponent* AbilitySystem;

	// Health setup
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stats")
	class UHealthAttributeSet* Health;

};
