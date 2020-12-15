// Fill out your copyright notice in the Description page of Project Settings.


#include "MovingPlatforms.h"


AMovingPlatforms::AMovingPlatforms() 
{
    PrimaryActorTick.bCanEverTick = true;

    SetMobility(EComponentMobility::Movable);   
}

void AMovingPlatforms::BeginPlay() 
{
    Super::BeginPlay();

    if(HasAuthority())      // True if server, false if client --> Allows server to replicate, client cannot.
    {
        SetReplicates(true);
        SetReplicateMovement(true);
    }

    GlobalStartLocation = GetActorLocation();
    GlobalTargetLocation = GetTransform().TransformPosition(TargetLocation);
}

void AMovingPlatforms::Tick(float DeltaTime) 
{
    Super::Tick(DeltaTime);

    if(HasAuthority())       // Server controls platform movement.
    {
        FVector Location = GetActorLocation();
        float JourneyLength = (GlobalTargetLocation - GlobalStartLocation).Size();         
        float JourneyTravelled = (Location - GlobalStartLocation).Size();

        if(JourneyTravelled >= JourneyLength)
        {
            FVector Swap = GlobalStartLocation;         // Temp location holder.
            GlobalStartLocation = GlobalTargetLocation;
            GlobalTargetLocation = Swap;
        }

        FVector Direction = (GlobalTargetLocation - GlobalStartLocation).GetSafeNormal();
        Location += Speed * DeltaTime * Direction;

        SetActorLocation(Location);
    }
}
