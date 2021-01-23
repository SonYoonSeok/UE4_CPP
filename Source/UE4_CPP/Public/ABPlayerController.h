// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "UE4_CPP/UE4_CPP.h"
#include "GameFramework/PlayerController.h"
#include "ABPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class UE4_CPP_API AABPlayerController : public APlayerController
{
	GENERATED_BODY()
	
public:
	virtual void PostInitializeComponents() override;
	virtual void OnPossess(APawn* aPawn) override;

protected:
	virtual void BeginPlay() override;
};
