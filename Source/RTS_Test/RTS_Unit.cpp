// Fill out your copyright notice in the Description page of Project Settings.

#include "RTS_Unit.h"

// Sets default values
ARTS_Unit::ARTS_Unit()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Setting up the body static mesh comp
	Body = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Body"));
	Body->SetGenerateOverlapEvents(false);
	Body->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	Body->SetupAttachment(RootComponent);

	// removing unnecessary mesh
	GetMesh()->DestroyComponent();

	// Initializing GAS
	AbilitySystem = CreateDefaultSubobject<UAbilitySystemComponent>(TEXT("AbilitySystem"));

	// Initializing health
	Health = CreateDefaultSubobject<UHealthAttributeSet>(TEXT("Health"));

}

// Called when the game starts or when spawned
void ARTS_Unit::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ARTS_Unit::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ARTS_Unit::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

