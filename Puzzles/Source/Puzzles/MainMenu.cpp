// Fill out your copyright notice in the Description page of Project Settings.


#include "MainMenu.h"
#include "Components/Button.h"


bool UMainMenu::Initialize() 
{
    bool Success = Super::Initialize();
    if(!Success) return false;

    if(!ensure(Host != nullptr)) return false;
    Host->OnClicked.AddDynamic(this, &UMainMenu::HostServer);

    return true;
}

// Using _MenuInterface instead of MenuInterface 
// fixes "error C4458: declaration of 'MenuInterface' hides class member".
void UMainMenu::SetMenuInterface(IMenuInterface* _MenuInterface) 
{
    this->MenuInterface = _MenuInterface;
}

void UMainMenu::HostServer() 
{
    if(MenuInterface != nullptr)
    {
        MenuInterface->Host();
    }
}

