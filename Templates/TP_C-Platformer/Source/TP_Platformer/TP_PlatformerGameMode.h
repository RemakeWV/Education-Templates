// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "TP_PlatformerGameMode.generated.h"

UCLASS(minimalapi)
class ATP_PlatformerGameMode : public AGameModeBase
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Scoring, meta = (AllowPrivateAccess = "true"))
    float points;

public:
	ATP_PlatformerGameMode();
	
};



