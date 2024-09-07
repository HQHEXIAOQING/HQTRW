// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "WKIStructurallibrary.generated.h"
/**
 * 
 */
 //物品基本数据
USTRUCT(BlueprintType, DisplayName = "物品基本结构")
struct FItemBaseData
{
	GENERATED_BODY()
	//物品名称
	UPROPERTY(EditAnywhere, BlueprintReadWrite, DisplayName = "物品名称", Category = "FItemData")
	FText ItemName;
};
class WUKONGIMITATION_DEMO_API WKIStructurallibrary
{
public:
	WKIStructurallibrary();

};
