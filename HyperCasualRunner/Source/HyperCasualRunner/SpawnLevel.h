// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SpawnLevel.generated.h"

class ABaseLevel;

UCLASS()
class HYPERCASUALRUNNER_API ASpawnLevel : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASpawnLevel();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	UFUNCTION()
		void SpawnLevel(bool is_first);

	UFUNCTION()
		void OnOverlapBegin(UPrimitiveComponent* overlapped, AActor* actor,
			UPrimitiveComponent* other_comp, int32 other_index, bool sweep_result, const FHitResult& hit);

protected:
	APawn* player;
	/*UPROPERTY(EditAnywhere)
	class USectionData* level;*/

	UPROPERTY(EditAnywhere)
		TArray<TSubclassOf<ABaseLevel>> level_set;

	TArray<ABaseLevel*> level_list;

public:
	int random_level;

	FVector spawn_location = FVector();
	FRotator spawn_rotation = FRotator();
	FActorSpawnParameters spawn_info = FActorSpawnParameters();

};
