// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/StaticMeshActor.h"
#include "MovingPlatforms.generated.h"


UCLASS()
class PUZZLES_API AMovingPlatforms : public AStaticMeshActor
{
	GENERATED_BODY()
	
public:
	AMovingPlatforms();

	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere)
	float Speed = 50.f;

	UPROPERTY(EditAnywhere, Meta = (MakeEditWidget = true))			// Makes Target Location visible in editor.
	FVector TargetLocation;

	void AddActiveTrigger();
	void RemoveActiveTrigger();

private:
	FVector GlobalTargetLocation;
	FVector GlobalStartLocation;

	UPROPERTY(EditAnywhere)
	int ActiveTriggers = 1;				// Allows platform to move without an assigned trigger by default.

protected:
	virtual void Tick(float DeltaTime) override;
};

