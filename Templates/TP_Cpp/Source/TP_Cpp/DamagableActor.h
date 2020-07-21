// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DamagableActor.generated.h"

UCLASS()
class TP_CPP_API ADamagableActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADamagableActor();

	UFUNCTION(BlueprintImplementableEvent, Category = "Attack")
	void OnTakeAttack();

	UPROPERTY(EditAnywhere, Category = "Attack")
	bool isAttackable = true;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//health reduction currentHealth -= damage
	void TakeDamage();
};
