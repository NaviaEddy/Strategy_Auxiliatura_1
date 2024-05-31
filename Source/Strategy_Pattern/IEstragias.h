// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "IEstragias.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UIEstragias : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class STRATEGY_PATTERN_API IIEstragias
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	virtual void Emplear() = 0;
};
