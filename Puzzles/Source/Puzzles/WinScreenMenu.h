// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MenuWidget.h"
#include "WinScreenMenu.generated.h"

/**
 * 
 */
UCLASS()
class PUZZLES_API UWinScreenMenu : public UMenuWidget
{
	GENERATED_BODY()

private:
	// Manually bind buttons.
	UPROPERTY(meta = (BindWidget))
	class UButton* MenuButton;

	UPROPERTY(meta = (BindWidget))
	class UButton* ReplayButton;

	UFUNCTION()
	void ReplayGame();

	UFUNCTION()
	void ReturnToMain();

	class APlayerController* PlayerController;

protected: 
	virtual bool Initialize();
};
