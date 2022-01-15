// Fill out your copyright notice in the Description page of Project Settings.


#include "PuzzleGameInstance.h"
#include "Blueprint/UserWidget.h"
#include "Engine/Engine.h"
#include "MainMenu.h"
#include "MenuWidget.h"
#include "Trigger.h"
#include "UObject/ConstructorHelpers.h"


UPuzzleGameInstance::UPuzzleGameInstance(const FObjectInitializer &ObjectInitializer) 
{
    // Allows for more control of Menu ui from source code rather than blueprints.
    ConstructorHelpers::FClassFinder<UUserWidget>MenuBPClass(TEXT("/Game/UI/WBP_MainMenu"));
    if(!ensure(MenuBPClass.Class != nullptr)) return;

    MenuClass = MenuBPClass.Class;

    // Allows for more control of In-Game Menu ui from source code rather than blueprints.
    ConstructorHelpers::FClassFinder<UUserWidget>InGameMenuBPClass(TEXT("/Game/UI/WBP_InGame"));
    if(!ensure(InGameMenuBPClass.Class != nullptr)) return;

    InGameMenuClass = InGameMenuBPClass.Class;

    // Allows for more control of Win Screen ui from source code rather than blueprints.
    ConstructorHelpers::FClassFinder<UUserWidget>WinScreenMenuBPClass(TEXT("/Game/UI/WBP_WinScreen"));
    if(!ensure(WinScreenMenuBPClass.Class != nullptr)) return;

    WinScreenMenuClass = WinScreenMenuBPClass.Class;
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

    Menu = CreateWidget<UMainMenu>(this, MenuClass);

    Menu->Setup();

    Menu->SetMenuInterface(this);

}

void UPuzzleGameInstance::LoadInGameMenu() 
{
    if(!ensure(InGameMenuClass != nullptr)) return;

    UMenuWidget* InGameMenu = CreateWidget<UMenuWidget>(this, InGameMenuClass);

    InGameMenu->Setup();

    InGameMenu->SetMenuInterface(this);
}

void UPuzzleGameInstance::LoadWinScreen() 
{
    UWorld* World = GetWorld();
    if(!ensure(World != nullptr)) return;

    if(!ensure(WinScreenMenuClass != nullptr)) return;

    UMenuWidget* WinScreen = CreateWidget<UMenuWidget>(this, WinScreenMenuClass);

    WinScreen->Setup();

    WinScreen->SetMenuInterface(this);
}

// Creates console command "Host".
void UPuzzleGameInstance::Host() 
{
    if(Menu != nullptr)
    {
        Menu->RemoveMenu();
    }

    UEngine* Engine = GetEngine();
    if(!ensure(Engine != nullptr)) return;

    Engine->AddOnScreenDebugMessage(0, 2, FColor::Green, TEXT("Hosting"));

    UWorld* World = GetWorld();
    if(!ensure(World != nullptr)) return;

    World->ServerTravel("/Game/Maps/Level_1?listen");      // Switches to main level.
}

// Creates console command "Join".
void UPuzzleGameInstance::Join(const FString &Address) 
{
    if(Menu != nullptr)
    {
        Menu->RemoveMenu();
    }

    UEngine* Engine = GetEngine();
    if(!ensure(Engine != nullptr)) return;

    Engine->AddOnScreenDebugMessage(0, 5, FColor::Green, FString::Printf(TEXT("Joining %s"), *Address));

    APlayerController* PlayerController = GetFirstLocalPlayerController();
    if(!ensure(PlayerController != nullptr)) return;

    PlayerController->ClientTravel(Address, ETravelType::TRAVEL_Absolute);
}

// Loads Main Menu level.
void UPuzzleGameInstance::LoadMainMenu() 
{
    APlayerController* PlayerController = GetFirstLocalPlayerController();
    if(!ensure(PlayerController != nullptr)) return;

    PlayerController->ClientTravel("/Game/Maps/Menu", ETravelType::TRAVEL_Absolute);
}

// Takes players to begining of Main Level to replay.
void UPuzzleGameInstance::Replay() 
{
    UWorld* World = GetWorld();
    if(!ensure(World != nullptr)) return;

    World->ServerTravel("/Game/Maps/Level_1?listen");      // Switches to main level.

}

