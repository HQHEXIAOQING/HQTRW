// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "WKIEnumLibrary.generated.h"
/**
 * 
 */

UENUM(BlueprintType, DisplayName = "测试枚举")
enum class ETestAt : uint8
{
	EE_Nothing UMETA(DisplayName = "无"),
};

class WUKONGIMITATION_DEMO_API WKIEnumLibrary
{
public:
	WKIEnumLibrary();
};
