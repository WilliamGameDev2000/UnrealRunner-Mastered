// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "RunnerCharacter.generated.h"

UCLASS()
class HYPERCASUALRUNNER_API ARunnerCharacter : public ACharacter
{
	GENERATED_BODY()

		UPROPERTY(VisibleAnywhere)
		class UCameraComponent* side_cam;

public:
	// Sets default values for this character's properties
	ARunnerCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;


protected:

		void MoveRight(float value);

public:

	class UCameraComponent* GetSideCamera() const
	{
		return side_cam;
	}


	void RestartLevel();
	

	UFUNCTION()
		void OnOverlapBegin(UPrimitiveComponent* overlapped, AActor* actor,
			UPrimitiveComponent* other_comp, int32 other_index, bool sweep_result, const FHitResult& hit);

private:

	float z_pos;
	FVector temp_pos = FVector();

	bool can_move;
};
