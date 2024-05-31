// Fill out your copyright notice in the Description page of Project Settings.


#include "EstrategiAgresiva.h"

// Sets default values
AEstrategiAgresiva::AEstrategiAgresiva()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEstrategiAgresiva::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEstrategiAgresiva::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AEstrategiAgresiva::Emplear()
{
	GEngine->AddOnScreenDebugMessage(-1, 20.f, FColor::Green, FString::Printf(TEXT("La nave principal se volvio loca")));
}

