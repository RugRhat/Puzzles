// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "PuzzlesGameModeBase.generated.h"


UCLASS()
class PUZZLES_API APuzzlesGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	
public:
	void ActorDied(AActor* DeadActor);

private:
	UPROPERTY(VisibleAnywhere)
	class APuzzleSolver* Solver;

	class APlayerController* PlayerControllerRef;

protected:
	virtual void BeginPlay() override;

	// virtual void RestartPlayer(AController* NewPlayer, AActor *StartSpot);
};
