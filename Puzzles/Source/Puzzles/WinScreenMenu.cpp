// Fill out your copyright notice in the Description page of Project Settings.


#include "WinScreenMenu.h"
#include "Components/Button.h"


bool UWinScreenMenu::Initialize() 
{
    bool Success = Super::Initialize();
    if(!Success) return false;

    if(!ensure(ReplayButton != nullptr)) return false;
    ReplayButton->OnClicked.AddDynamic(this, &UWinScreenMenu::ReplayGame);

    if(!ensure(MenuButton != nullptr)) return false;
    MenuButton->OnClicked.AddDynamic(this, &UWinScreenMenu::ReturnToMain);

    return true;
}

void UWinScreenMenu::ReplayGame() 
{
    if(MenuInterface != nullptr)
    {
        RemoveMenu();
        MenuInterface->Replay();
    }
}

void UWinScreenMenu::ReturnToMain() 
{
    if(MenuInterface != nullptr)
    {
        RemoveMenu();
        MenuInterface->LoadMainMenu();
    }
}
