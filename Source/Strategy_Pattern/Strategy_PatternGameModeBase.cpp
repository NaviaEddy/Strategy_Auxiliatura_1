// Copyright Epic Games, Inc. All Rights Reserved.

#include "Strategy_PatternGameModeBase.h"
#include "NavePrincipal.h"
#include "EstrategiaFuerza.h"
#include "EstrategiAgresiva.h"

AStrategy_PatternGameModeBase::AStrategy_PatternGameModeBase()
{
	//PrimaryActorTick.bCanEverTick = true;
	PrimaryActorTick.bCanEverTick = true;
	Reloj = 0.0f;
}

void AStrategy_PatternGameModeBase::BeginPlay()
{
	Super::BeginPlay();

	Principal = GetWorld()->SpawnActor<ANavePrincipal>(ANavePrincipal::StaticClass());

	//Instanciamos las diferentes estrategias
	EFuerza = GetWorld()->SpawnActor<AEstrategiaFuerza>(AEstrategiaFuerza::StaticClass());
	EAgresiva = GetWorld()->SpawnActor<AEstrategiAgresiva>(AEstrategiAgresiva::StaticClass());


}

void AStrategy_PatternGameModeBase::Tick(float _DeltaTime)
{
	Super::Tick(_DeltaTime);

	Reloj += _DeltaTime;
	//GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Red, FString::Printf(TEXT("%f"), Reloj));
	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, FString::Printf(TEXT("Hora del dia: %f"), Reloj));
	if (Reloj >= 5.0f) {
		Principal->AlterarEstrategia(EFuerza);
		Principal->EmplearEstrategia();
	}
	if (Reloj >= 10.0f)
	{
		Principal->AlterarEstrategia(EAgresiva);
		Principal->EmplearEstrategia();
		Reloj = 0.0f;
	}
	
}
