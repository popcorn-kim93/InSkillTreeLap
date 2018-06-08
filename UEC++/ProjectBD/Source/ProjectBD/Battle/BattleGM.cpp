// Fill out your copyright notice in the Description page of Project Settings.

#include "BattleGM.h"
#include "Kismet/GameplayStatics.h"
#include "Battle/ItemPoint.h"
#include "Engine/World.h"
#include "Item/MasterItem.h"

void ABattleGM::BeginPlay()
{
	Super::BeginPlay();

	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AItemPoint::StaticClass(), ItemPoints);

	FStringClassReference MasterItemClassRef(TEXT("Blueprint'/Game/Blueprints/Item/BP_MasterItem.BP_MasterItem_C'"));
	if (UClass* MyClass = MasterItemClassRef.TryLoadClass<AMasterItem>())
	{
		for (auto ItemPoint : ItemPoints)
		{
			GetWorld()->SpawnActor<AMasterItem>(MyClass, ItemPoint->GetActorLocation(), ItemPoint->GetActorRotation());
		}
	}
}