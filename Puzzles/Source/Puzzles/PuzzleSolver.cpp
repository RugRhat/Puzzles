// Fill out your copyright notice in the Description page of Project Settings.


#include "PuzzleSolver.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/Controller.h"
#include "GameFramework/SpringArmComponent.h"


// Sets default values
APuzzleSolver::APuzzleSolver()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Controller rotation only affects camera
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	// Character movement
	GetCharacterMovement()->bOrientRotationToMovement = true;			// Moves in direction of input	
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 540.0f, 0.0f); // Rotation rate for change in direction
	GetCharacterMovement()->JumpZVelocity = 600.f;
	GetCharacterMovement()->AirControl = 0.2f;

	// Create SpringArm
	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("Spring Arm"));
	if(!ensure(SpringArm != nullptr)) return;							// Ensures object isn't a null pointer.
	SpringArm->SetupAttachment(RootComponent);
	SpringArm->TargetArmLength = 250.f;
	SpringArm->bUsePawnControlRotation = true;							// Camera rotation control

	// Create Camera
	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	if(!ensure(Camera != nullptr)) return;								// Ensures object isn't a null pointer.
	Camera->SetupAttachment(SpringArm);
	Camera->bUsePawnControlRotation = false;							// SpringArm controls camera movement
}

// Called when the game starts or when spawned
void APuzzleSolver::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void APuzzleSolver::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// Called to bind functionality to input
void APuzzleSolver::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	if(!ensure(PlayerInputComponent != nullptr)) return;				// Ensures object isn't a null pointer.
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis("Forward", this, &APuzzleSolver::MoveForward);
	PlayerInputComponent->BindAxis("Right", this, &APuzzleSolver::MoveRight);
	PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("Look Up", this, &APawn::AddControllerPitchInput);

	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);
}

void APuzzleSolver::MoveForward(float Value) 
{
	if ((Controller != NULL) && (Value != 0.0f))						// Check for input
	{
		FRotator Rotation = Controller->GetControlRotation();
		FRotator YawRotation(0, Rotation.Yaw, 0);

		// Get forward vector
		FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);	

		AddMovementInput(Direction, Value);
	}
}

void APuzzleSolver::MoveRight(float Value) 
{
	if ( (Controller != NULL) && (Value != 0.0f))						// Check for input
	{
		FRotator Rotation = Controller->GetControlRotation();
		FRotator YawRotation(0, Rotation.Yaw, 0);

		// Get right vector
		FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);

		AddMovementInput(Direction, Value);
	}
}
