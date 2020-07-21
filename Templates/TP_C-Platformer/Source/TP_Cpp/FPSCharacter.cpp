// Fill out your copyright notice in the Description page of Project Settings.


#include "FPSCharacter.h"

#include "DamagableActor.h"

// Sets default values
AFPSCharacter::AFPSCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AFPSCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFPSCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AFPSCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AFPSCharacter::FireWeapon()
{
	FHitResult hit = InstantShot();
	ADamagableActor* hitActor = Cast<ADamagableActor>(hit.Actor);

	if(hitActor && hitActor->isAttackable)
	{
		hitActor->TakeDamage();
	}
}

FHitResult AFPSCharacter::InstantShot()
{
	FVector camLocation;
	FRotator camRotation;
	FVector endTrace = FVector::ZeroVector;

	APlayerController* const playerController = GetWorld()->GetFirstPlayerController();

	if (playerController)
	{
		playerController->GetPlayerViewPoint(camLocation, camRotation);
		endTrace = camLocation + (camRotation.Vector() * range);
	}

	FCollisionQueryParams traceParams(SCENE_QUERY_STAT(InstantShot), true, 0);
	FHitResult hit(ForceInit);
	GetWorld()->LineTraceSingleByChannel(hit, camLocation, endTrace, ECC_Visibility, traceParams);

	return hit;
}

