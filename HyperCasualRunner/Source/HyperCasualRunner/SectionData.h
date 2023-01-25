// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "BaseLevel.h"
#include "SectionData.generated.h"

/**
 * 
 */
//class ABaselevel;
UCLASS()
class HYPERCASUALRUNNER_API USectionData : public UDataAsset
{
	GENERATED_BODY()

public:
		UPROPERTY(EditAnywhere)
		TArray<TSubclassOf<ABaseLevel>> level_set;
};
