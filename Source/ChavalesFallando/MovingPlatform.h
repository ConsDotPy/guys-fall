// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MovingPlatform.generated.h"

UCLASS()
class CHAVALESFALLANDO_API AMovingPlatform : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMovingPlatform();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere)
	int32 MyInt = 101;

	UPROPERTY(EditAnywhere)
	bool MyBool = true;

	UPROPERTY(EditAnywhere)
	float MyFloat = 1.01;

	UPROPERTY(EditAnywhere)
	int MyLong = 10001;

	UPROPERTY(EditAnywhere)
	int InputA = 750;

	UPROPERTY(EditAnywhere)
	int InputB = 125;

	UPROPERTY(EditAnywhere)
	int APlusB = 0;

	UPROPERTY(EditAnywhere)
	float InputAFloat = 7.5;

	UPROPERTY(EditAnywhere)
	float InputBFloat = 1.25;

	UPROPERTY(EditAnywhere)
	float APlusBFloat = 0.0;
};
