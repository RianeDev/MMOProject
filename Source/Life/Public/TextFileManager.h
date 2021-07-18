
#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "TextFileManager.generated.h"

/**
 * 
 */

UCLASS()
class LIFE_API UTextFileManager : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	UFUNCTION(BlueprintCallable, Category = "Custom", meta = (Keywords = "Save"))
		static bool SaveArrayText(FString SaveDirectory, FString FileName, TArray<FString> SaveText, bool AllowOverwriting);

	UFUNCTION(BlueprintCallable, Category = "Custom", meta = (Keywords = "Load"))
		static bool LoadArrayText(TArray<FString>& StringArray, FString FullFilePath);
};