// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AtumLayerEmbedOptions.h"  // Ensure this file defines FAtumLayerEmbeddingOptions
#include "Layers/IAtumLayer.h"
#include "Macros/AtumMacrosLayer.h"

TORCH_INCLUDES_START
#include <torch/nn/modules/embedding.h>
TORCH_INCLUDES_END


#include "AtumLayerEmbed.generated.h"
#define LOCTEXT_NAMESPACE "AtumLayerEmbed"
/**
 * 
 */
UCLASS(Blueprintable, BlueprintType, DisplayName = "ATUM Embedding Layer")
class ATUM_API UAtumEmbed : public UObject, public IAtumLayer
{

	GENERATED_BODY()
	GENERATED_ATUM_LAYER(FAtumLayerEmbedOptions, torch::nn::Embedding)
    
protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess, ShowOnlyInnerProperties, ExposeOnSpawn))
	FAtumLayerEmbedOptions Options;
};

#undef LOCTEXT_NAMESPACE
