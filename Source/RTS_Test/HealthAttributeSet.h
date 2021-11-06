// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "HealthAttributeSet.generated.h"

/**
 * 
 */
UCLASS()
class RTS_TEST_API UHealthAttributeSet : public UAttributeSet
{
	GENERATED_BODY()
	
public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stats")
	FGameplayAttributeData MaxHealth = 100;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stats")
	FGameplayAttributeData CurrentHealth = 80;

};
