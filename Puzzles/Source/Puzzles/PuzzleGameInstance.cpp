// Fill out your copyright notice in the Description page of Project Settings.


#include "PuzzleGameInstance.h"
#include "Engine/Engine.h"


UPuzzleGameInstance::UPuzzleGameInstance(const FObjectInitializer &ObjectInitializer) 
{
    UE_LOG(LogTemp, Warning, TEXT("Game Instance"));
}

// Sets up custom game instance properties.
void UPuzzleGameInstance::Init() 
{
    UE_LOG(LogTemp, Warning, TEXT("Game Init"));
}

// Creates console command "Host".
void UPuzzleGameInstance::Host() 
{
    UEngine* Engine = GetEngine();
    if(!ensure(Engine != nullptr)) return;

    Engine->AddOnScreenDebugMessage(0, 2, FColor::Green, TEXT("Hosting"));

    UWorld* World = GetWorld();
    if(!ensure(World != nullptr)) return;

    World->ServerTravel("/Game/Maps/Main?listen");      // Switches from lobby to main level.
}

// Creates console command "Join".
void UPuzzleGameInstance::Join(const FString &Address) 
{
    UEngine* Engine = GetEngine();
    if(!ensure(Engine != nullptr)) return;

    Engine->AddOnScreenDebugMessage(0, 5, FColor::Green, FString::Printf(TEXT("Joining %s"), *Address));

    APlayerController* PlayerController = GetFirstLocalPlayerController();
    if(!ensure(PlayerController != nullptr)) return;

    PlayerController->ClientTravel(Address, ETravelType::TRAVEL_Absolute);
}

