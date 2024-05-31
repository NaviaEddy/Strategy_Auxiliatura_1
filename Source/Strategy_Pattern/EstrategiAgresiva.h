// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "IEstragias.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EstrategiAgresiva.generated.h"

UCLASS()
class STRATEGY_PATTERN_API AEstrategiAgresiva : public AActor, public IIEstragias
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEstrategiAgresiva();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	void Emplear() override;

};
