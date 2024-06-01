// Copyright Epic Games, Inc. All Rights Reserved.

#include "Strategy_PatternGameModeBase.h"
#include "NavePrincipal.h"
#include "EstrategiaFuerza.h"
#include "EstrategiAgresiva.h"
#include "Engine/World.h"
#include "Engine/Engine.h"

AStrategy_PatternGameModeBase::AStrategy_PatternGameModeBase()
{
	PrimaryActorTick.bCanEverTick = true;
	UE_LOG(LogTemp, Warning, TEXT("GameMode Constructor called"));
	Reloj = 0.0f;
}

void AStrategy_PatternGameModeBase::BeginPlay()
{
	Super::BeginPlay();
	UE_LOG(LogTemp, Warning, TEXT("Begin called"));
	//GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, FString::Printf(TEXT("BeginPlay called")));

	Principal = GetWorld()->SpawnActor<ANavePrincipal>(ANavePrincipal::StaticClass());

	//Instanciamos las diferentes estrategias
	EFuerza = GetWorld()->SpawnActor<AEstrategiaFuerza>(AEstrategiaFuerza::StaticClass());
	EAgresiva = GetWorld()->SpawnActor<AEstrategiAgresiva>(AEstrategiAgresiva::StaticClass());
}

void AStrategy_PatternGameModeBase::Tick(float _DeltaTime)
{
	
	Super::Tick(_DeltaTime);
	UE_LOG(LogTemp, Warning, TEXT("Tick called"));

	Reloj += _DeltaTime;
	
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, FString::Printf(TEXT("Hora del dia: %f"), Reloj));
	}

	if (Reloj >= 5.0f) {
		Principal->AlterarEstrategia(EFuerza);
		Principal->EmplearEstrategia();
	}
	if (Reloj >= 10.0f)
	{
		Principal->AlterarEstrategia(EAgresiva);
		Principal->EmplearEstrategia();
	}
	if (Reloj >= 15.0f)
	{
		Reloj = 0.0f;
	}
}
