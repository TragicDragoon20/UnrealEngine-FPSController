// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "FPSController.generated.h"

UCLASS()
class FPSPROJECT_API AFPSController : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AFPSController();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UFUNCTION()
		void MoveForward(float Value);

	UFUNCTION()
		void MoveRight(float Value);

	UFUNCTION()
		void StartJump();

	UFUNCTION()
		void StopJump();

	UPROPERTY(VisibleAnywhere)
		class UCameraComponent* FPSCameraComponent;
};
