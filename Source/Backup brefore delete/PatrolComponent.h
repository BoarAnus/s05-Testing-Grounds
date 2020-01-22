// Code By the Boars Anus. all rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PatrolComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class TESTINGGROUNDS_API UPatrolComponent : public UActorComponent
{
	GENERATED_BODY()

public:	

	TArray<AActor*> GetPatrolPoints() const { return PatrolPoints; };


private:

	UPROPERTY(EditAnywhere, Category = "Patrol Route")
	TArray<AActor*> PatrolPoints;
	
};
