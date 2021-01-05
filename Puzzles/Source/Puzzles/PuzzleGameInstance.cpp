// Fill out your copyright notice in the Description page of Project Settings.


#include "PuzzleGameInstance.h"
#include "Blueprint/UserWidget.h"
#include "Engine/Engine.h"
#include "MainMenu.h"
#include "Trigger.h"
#include "UObject/ConstructorHelpers.h"


UPuzzleGameInstance::UPuzzleGameInstance(const FObjectInitializer &ObjectInitializer) 
{
    // Allows for more control of menu ui from source code rather than blueprints.
    ConstructorHelpers::FClassFinder<UUserWidget>MenuBPClass(TEXT("/Game/Blueprints/UI/WBP_MainMenu"));
    if(!ensure(MenuBPClass.Class != nullptr)) return;

    MenuClass = MenuBPClass.Class;
}

// Sets up custom game instance properties.
void UPuzzleGameInstance::Init() 
{
    UE_LOG(LogTemp, Warning, TEXT("Found class: %s"), *MenuClass->GetName());
}

// Adds menu to screen.
void UPuzzleGameInstance::LoadMenu() 
{
    if(!ensure(MenuClass != nullptr)) return;

    UMainMenu* Menu = CreateWidget<UMainMenu>(this, MenuClass);

    Menu->AddToViewport();

    APlayerController* PlayerController = GetFirstLocalPlayerController();
    if(!ensure(PlayerController != nullptr)) return;

    // Allows player to click.
    FInputModeUIOnly InputModeData;
    InputModeData.SetWidgetToFocus(Menu->TakeWidget());

    // Allows cursor to move around screen.
    InputModeData.SetLockMouseToViewportBehavior(EMouseLockMode::DoNotLock);        

    PlayerController->SetInputMode(InputModeData);

    // Makes mouse visible.
    PlayerController->bShowMouseCursor = true;

    Menu->SetMenuInterface(this);

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

