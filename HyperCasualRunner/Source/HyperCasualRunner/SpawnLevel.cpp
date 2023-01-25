// Fill out your copyright notice in the Description page of Project Settings.


#include "SpawnLevel.h"

#include "BaseLevel.h"
#include "Engine.h"
#include "Components/BoxComponent.h"
#include "SectionData.h"

// Sets default values
ASpawnLevel::ASpawnLevel()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASpawnLevel::BeginPlay()
{
	Super::BeginPlay();
	
	SpawnLevel(true);
	SpawnLevel(false);
	SpawnLevel(false);
	SpawnLevel(false);
}

// Called every frame
void ASpawnLevel::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ASpawnLevel::SpawnLevel(bool is_first)
{
	spawn_location = FVector(0.0f, 1300.0f, 0.0f);
	spawn_rotation = FRotator(0.0f, 90.0f, 0.0f);

	if (!is_first)
	{
		ABaseLevel* last_level = level_list.Last();
		spawn_location = last_level->GetSpawnLocation()->GetComponentTransform().GetTranslation();
	}

	random_level = FMath::RandRange(0, level_set.Num() - 1);
	ABaseLevel* new_level = nullptr;

	//can't seem to get the data asset holding the levels to work, oh well
	new_level = GetWorld()->SpawnActor<ABaseLevel>(level_set[random_level], spawn_location, spawn_rotation, spawn_info);

	if (new_level)
	{
		if (new_level->GetTrigger())
		{
			new_level->GetTrigger()->OnComponentBeginOverlap.AddDynamic(this, &ASpawnLevel::OnOverlapBegin);
		}
	}

	level_list.Add(new_level);
	if (level_list.Num() > 5)
	{
		level_list.RemoveAt(0);
	}
}

void ASpawnLevel::OnOverlapBegin(UPrimitiveComponent* overlapped, AActor* actor, UPrimitiveComponent* other_comp, int32 other_index, bool sweep_result, const FHitResult& hit)
{
	SpawnLevel(false);
}

