﻿// Fill out your copyright notice in the Description page of Project Settings.

#include "AtumNeuralNetworkActions.h"

#include "AtumEditor.h"
#include "AtumNeuralNetwork.h"
#include "AtumNeuralNetworkEditorToolkit.h"


#define LOCTEXT_NAMESPACE "AtumNeuralNetworkActions"

UClass* FAtumNeuralNetworkAssetTypeActions::GetSupportedClass() const
{
	return UAtumNeuralNetwork::StaticClass();
}

FText FAtumNeuralNetworkAssetTypeActions::GetName() const
{
	return LOCTEXT("AssetTypeActionsName", "ATUM Neural Network");
}

FColor FAtumNeuralNetworkAssetTypeActions::GetTypeColor() const
{
	return FColor::Orange;
}

uint32 FAtumNeuralNetworkAssetTypeActions::GetCategories()
{
	return FAtumEditorModule::GetModule().GetAtumAssetCategoryBit();
}

void FAtumNeuralNetworkAssetTypeActions::OpenAssetEditor(
	const TArray<UObject*>& InObjects,
	const TSharedPtr<IToolkitHost> EditWithinLevelEditor
)
{
	const EToolkitMode::Type Mode = EditWithinLevelEditor.IsValid() ?
		EToolkitMode::WorldCentric : EToolkitMode::Standalone;

	for (TArray<UObject*>::TConstIterator Iterator = InObjects.CreateConstIterator(); Iterator; ++Iterator)
	{
		if (auto* const AtumNeuralNetwork = Cast<UAtumNeuralNetwork>(*Iterator); AtumNeuralNetwork)
		{
			MakeShared<FAtumNeuralNetworkEditorToolkit>()->InitEditor(Mode, EditWithinLevelEditor, AtumNeuralNetwork);
		}
	}
}

#undef LOCTEXT_NAMESPACE