// Fill out your copyright notice in the Description page of Project Settings.


#include "HealthComponent.h"
#include "Kismet/GameplayStatics.h"
#include "PuzzlesGameModeBase.h"


// Sets default values for this component's properties
UHealthComponent::UHealthComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
}


// Called when the game starts
void UHealthComponent::BeginPlay()
{
	Super::BeginPlay();

	GameModeRef = Cast<APuzzlesGameModeBase>(UGameplayStatics::GetGameMode(GetWorld()));

	Owner = GetOwner();
	if(!ensure(Owner != nullptr)) return;

	Owner->OnTakeAnyDamage.AddDynamic(this, &UHealthComponent::TakeDamage);	
}

// Handles player falling off obstacle course.
void UHealthComponent::TakeDamage(AActor* DamagedActor, float Damage, const class UDamageType* DamageType, class AController* InistigatedBy, AActor* DamageCauser) 
{
	if(!ensure(GameModeRef != nullptr)) return;

	UE_LOG(LogTemp, Warning, TEXT("HEALTH HIT"));
	GameModeRef->ActorDied(Owner);		// Kills player on impact.
}


