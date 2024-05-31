// Fill out your copyright notice in the Description page of Project Settings.

#include "NavePrincipal.h"
#include "IEstragias.h"

// Sets default values
ANavePrincipal::ANavePrincipal()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ANavePrincipal::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ANavePrincipal::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ANavePrincipal::AlterarEstrategia(AActor* _EstrategiaElegida)
{
	Estrategia = Cast<IIEstragias>(_EstrategiaElegida);
}

void ANavePrincipal::EmplearEstrategia()
{
	//Operadores ternarios
	//(Estrategia) ? Estrategia->Emplear() : UE_LOG(LogTemp, Warning, TEXT("No se ha asignado una estrategia"));

	if (Estrategia)
	{
		Estrategia->Emplear();
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("No se ha asignado una estrategia"));
	}
}

