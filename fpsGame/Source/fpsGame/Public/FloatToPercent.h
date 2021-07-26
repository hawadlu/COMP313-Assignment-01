// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "FloatToPercent.generated.h"

/**
 * 
 */
UCLASS()
class FPSGAME_API UFloatToPercent : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
    
    UFUNCTION(BlueprintPure, meta = (DisplayName = "Float To Percent", CompactNodeTitle = "FloatToPercentBluePrintNode"), Category = "Math")
    
    static float floatToPercent(float fullHealth, float currentHealth);
	
};
