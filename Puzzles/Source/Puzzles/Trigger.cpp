// Fill out your copyright notice in the Description page of Project Settings.


#include "Trigger.h"
#include "Components/BoxComponent.h"
#include "MovingPlatforms.h"


// Sets default values
ATrigger::ATrigger()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	TriggerPad = CreateDefaultSubobject<UBoxComponent>(TEXT("Trigger Pad"));
	if(!ensure(TriggerPad != nullptr)) return;							// Ensures object isn't a null pointer.
	RootComponent = TriggerPad;
	
	TriggerPad->OnComponentBeginOverlap.AddDynamic(this, &ATrigger::OnOverlapBegin);
	TriggerPad->OnComponentEndOverlap.AddDynamic(this, &ATrigger::OnOverlapEnd);
}

// Called when the game starts or when spawned
void ATrigger::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void ATrigger::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ATrigger::OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) 
{
	for(AMovingPlatforms* Platform : TriggeredPlatforms)
	{
		Platform->AddActiveTrigger();
	}
}

void ATrigger::OnOverlapEnd(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) 
{
	for(AMovingPlatforms* Platform : TriggeredPlatforms)
	{
		Platform->RemoveActiveTrigger();
	}
}
