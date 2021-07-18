// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include <boost/typeof/typeof.hpp>
#include "StructArrayParser.generated.h"

/**
 * 
 */

USTRUCT()
struct FMyStruct
{
		USTRUCT(BlueprintCallable, Category = "Custom", meta = (Keywords = "Struct for Array"))
};

UCLASS()
class LIFE_API UStructArrayParser : public UBlueprintFunctionLibrary

{
	GENERATED_BODY()
		UFUNCTION(BlueprintCallable, Category = "Custom", meta = (Keywords = "Struct to Array"))
		static bool StructToArray(TArray<FString>& StringArray, FString FullFilePath);
};
