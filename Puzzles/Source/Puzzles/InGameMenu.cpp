// Fill out your copyright notice in the Description page of Project Settings.


#include "InGameMenu.h"
#include "Components/Button.h"


bool UInGameMenu::Initialize() 
{
    bool Success = Super::Initialize();
    if(!Success) return false;

    if(!ensure(BackButton != nullptr)) return false;
    BackButton->OnClicked.AddDynamic(this, &UInGameMenu::ReturnToGame);

    if(!ensure(MenuButton != nullptr)) return false;
    MenuButton->OnClicked.AddDynamic(this, &UInGameMenu::ReturnToMain);

    return true;
}

// Removes menu from viewport.
void UInGameMenu::ReturnToGame() 
{
    RemoveMenu();
}

// Returns player to Main Menu level.
void UInGameMenu::ReturnToMain() 
{
    if(MenuInterface != nullptr)
    {
        RemoveMenu();
        MenuInterface->LoadMainMenu();
    }
}

