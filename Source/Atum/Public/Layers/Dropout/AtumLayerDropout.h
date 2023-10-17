// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"

#include "AtumLayerDropoutOptions.h"  // Ensure this file defines FAtumLayerEmbeddingOptions
#include "Layers/IAtumLayer.h"
#include "Macros/AtumMacrosLayer.h"

TORCH_INCLUDES_START
#include <torch/nn/modules/dropout.h>
TORCH_INCLUDES_END

#include "AtumLayerDropout.generated.h"
#define LOCTEXT_NAMESPACE "AtumLayerDropout"

/**
 * 
 */
UCLASS(Blueprintable, BlueprintType, DisplayName = "ATUM Dropout Layer")
class ATUM_API UAtumLayerDropout : public UObject, public IAtumLayer
{
	GENERATED_BODY()
	GENERATED_ATUM_LAYER(FAtumLayerDropoutOptions, torch::nn::Dropout)


protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess, ShowOnlyInnerProperties, ExposeOnSpawn))
	FAtumLayerDropoutOptions Options;
	
};
#undef LOCTEXT_NAMESPACE



