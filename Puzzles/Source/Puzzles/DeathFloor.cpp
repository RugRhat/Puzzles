// Fill out your copyright notice in the Description page of Project Settings.


#include "DeathFloor.h"
#include "Kismet/GameplayStatics.h"


// Sets default values
ADeathFloor::ADeathFloor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	FloorMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Floor Mesh"));
	FloorMesh->OnComponentHit.AddDynamic(this, &ADeathFloor::OnHit);
	RootComponent = FloorMesh;
}

// Called when the game starts or when spawned
void ADeathFloor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADeathFloor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ADeathFloor::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) 
{
	AActor* MyOwner = this;
	if(!ensure(MyOwner != nullptr)) return;

	if(OtherActor != nullptr && OtherActor != this && OtherActor != MyOwner)
	{
		UE_LOG(LogTemp, Warning, TEXT("FLOOR HIT"));
		UGameplayStatics::ApplyDamage(OtherActor, Damage, MyOwner->GetInstigatorController(), this, DamageType);
	}
}

