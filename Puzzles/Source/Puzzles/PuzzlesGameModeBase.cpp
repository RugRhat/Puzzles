// Copyright Epic Games, Inc. All Rights Reserved.


#include "PuzzlesGameModeBase.h"
#include "Kismet/GameplayStatics.h"
//#include "PlayerController.h"
#include "PuzzleSolver.h"


void APuzzlesGameModeBase::BeginPlay() 
{
    Super::BeginPlay();

    Solver = Cast<APuzzleSolver>(UGameplayStatics::GetPlayerPawn(this, 0));
    PlayerControllerRef = Cast<APlayerController>(UGameplayStatics::GetPlayerController(this, 0));
}

// void APuzzlesGameModeBase::RestartPlayer(AController* NewPlayer) 
// {
//     Super::RestartPlayer(NewPlayer);
// }

void APuzzlesGameModeBase::ActorDied(AActor* DeadActor) 
{
    UE_LOG(LogTemp, Warning, TEXT("ACTOR DIED"));
    RestartPlayer(PlayerControllerRef);     // TODO: Figure out respawn.
}
