// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "spikes.h"
#include "Wall.generated.h"

/**
 * 
 */
UCLASS()
class HYPERCASUALRUNNER_API AWall : public Aspikes
{
	GENERATED_BODY()
	
public:
	
	AWall();
	
protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;
};
