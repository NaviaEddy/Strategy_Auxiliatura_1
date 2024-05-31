// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Strategy_PatternGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class STRATEGY_PATTERN_API AStrategy_PatternGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

public:
	AStrategy_PatternGameModeBase();

	float Reloj;

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float _DeltaTime) override;

private:
	//Spawneamos la nave principal
	class ANavePrincipal* Principal;

	//Spawneamos las diferentes estrategias
	class AEstrategiaFuerza* EFuerza;
	class AEstrategiAgresiva* EAgresiva;
};
