// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/Ttm_BaseCharacter.h"


// Sets default values
ATtm_BaseCharacter::ATtm_BaseCharacter()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void ATtm_BaseCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATtm_BaseCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// Called to bind functionality to input
void ATtm_BaseCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

