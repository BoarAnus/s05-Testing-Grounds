// Code By the Boars Anus. all rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "TP_ThirdPerson/TP_ThirdPersonCharacter.h"
#include "PatrollingGuard.generated.h"

/**
 * 
 */
UCLASS()
class TESTINGGROUNDS_API APatrollingGuard : public ATP_ThirdPersonCharacter
{
	GENERATED_BODY()
	

public:
	UPROPERTY(EditAnywhere,Category = "Patrol Route")
	TArray<AActor*> PatrolPointsCPP;
};
