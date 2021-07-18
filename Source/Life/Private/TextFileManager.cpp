// Fill out your copyright notice in the Description page of Project Settings.


#include "TextFileManager.h"
#include "Misc/FileHelper.h"
#include "HAL/PlatformFilemanager.h"


bool UTextFileManager::SaveArrayText(FString SaveDirectory, FString FileName, TArray<FString> SaveText, bool AllowOverwriting = false)
{
    // set complete file path.
    SaveDirectory += "\\";
    SaveDirectory += FileName;

    if (!AllowOverwriting)
    {
        if (FPlatformFileManager::Get().GetPlatformFile().FileExists(*SaveDirectory))
        {
            return false;
        }
    }

    FString FinalString = "";
    for (FString& Each : SaveText)
    {
        FinalString += Each;
        FinalString += LINE_TERMINATOR;
    }

    return FFileHelper::SaveStringToFile(FinalString, *SaveDirectory);
};



bool UTextFileManager::LoadArrayText(TArray<FString>& StringArray, FString FullFilePath = "")
{
    if (FullFilePath == "" || FullFilePath == " ") return false;


    StringArray.Empty();

    TArray<FString> FileArray;

    if (!FFileHelper::LoadANSITextFileToStrings(*FullFilePath, NULL, FileArray))
    {
        return false;
    }


    StringArray.Append(FileArray);


    return true;
}

bool UTextFileManager::PlayerArrayToStruct(FString PlayerStruct, TArray<FString>& ArrayToParse)
{
    TArray<FString> NewArray;

    if (ArrayToParse.Num() <= 0)
    {
        return false; 
    }

    // for each (FString StringItem in ArrayToParse)
    // {
    //    
   //  }

    // S_PlayerSave TestPlayer {1, "Riane", "God", "Admin", "Moderator"}
}

