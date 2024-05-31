// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NavePrincipal.generated.h"

UCLASS()
class STRATEGY_PATTERN_API ANavePrincipal : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ANavePrincipal();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	//Puntero a la interfaz estrategia
	class IIEstragias* Estrategia;

public:
	void AlterarEstrategia(AActor* _EstrategiaElegida);
	void EmplearEstrategia();

};
