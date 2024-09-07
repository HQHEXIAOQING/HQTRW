// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "WKIBlueprintFunctionLibrary.generated.h"

/**
 * 
 */
UCLASS()
class WUKONGIMITATION_DEMO_API UWKIBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	// 测试用函数
	UFUNCTION(BlueprintCallable, DisplayName = "测试用函数", meta = (WorldContext = "WorldContext"), category = "HQ")
	static void TestFunction(const UObject* WorldContext);
};
