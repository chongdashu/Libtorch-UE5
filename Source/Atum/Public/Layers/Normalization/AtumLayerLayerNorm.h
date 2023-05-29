﻿// © 2023 Kaya Adrian.

#pragma once

#include "AtumLayerLayerNormOptions.h"
#include "IAtumLayerBaseNormalization.h"
#include "Macros/AtumMacrosLayer.h"

LIBTORCH_INCLUDES_START
#include <torch/nn/modules/normalization.h>
LIBTORCH_INCLUDES_END

#include "AtumLayerLayerNorm.generated.h"


#define LOCTEXT_NAMESPACE "AtumLayerLayerNorm"

UCLASS(Blueprintable, BlueprintType, DisplayName = "ATUM Layer Norm Layer")
class ATUM_API UAtumLayerLayerNorm : public UObject, public IAtumLayerBaseNormalization
{
	GENERATED_BODY()
	GENERATED_ATUM_LAYER(FAtumLayerLayerNormOptions, torch::nn::LayerNorm)
	
protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess, ShowOnlyInnerProperties))
	FAtumLayerLayerNormOptions Options;
};

#undef LOCTEXT_NAMESPACE
