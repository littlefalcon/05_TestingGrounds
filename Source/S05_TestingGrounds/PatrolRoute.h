// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PatrolRoute.generated.h"

/**
* A "Route Class" to help AI choose their next waypoint คลาสทางเดิน เพื่อช่วยบอทเลือกเส้นทางต่อไป
*/
UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class S05_TESTINGGROUNDS_API UPatrolRoute : public UActorComponent
{
	GENERATED_BODY()

public:	
	TArray<AActor*> GetPatrolPoints() const;

private:	// TODO remove or create Get fx
	UPROPERTY(EditInstanceOnly, Category = "Patrol Route")
		TArray<AActor*> PatrolPoints;

		
	
};
