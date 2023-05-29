﻿// © 2023 Kaya Adrian.

#pragma once

#include "AtumLayerSigmoidOptions.h"
#include "IAtumLayerBaseActivation.h"
#include "Macros/AtumMacrosGuards.h"
#include "Macros/AtumMacrosLayer.h"

LIBTORCH_INCLUDES_START
#include <torch/nn/modules/activation.h>
LIBTORCH_INCLUDES_END

#include "AtumLayerSigmoid.generated.h"


#define LOCTEXT_NAMESPACE "AtumLayerSigmoid"

UCLASS(Blueprintable, BlueprintType, DisplayName = "ATUM Sigmoid Layer")
class ATUM_API UAtumLayerSigmoid : public UObject, public IAtumLayerBaseActivation
{
	GENERATED_BODY()
	GENERATED_ATUM_LAYER(FAtumLayerSigmoidOptions, torch::nn::Sigmoid)
	
protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess, ShowOnlyInnerProperties))
	FAtumLayerSigmoidOptions Options;
};

#undef LOCTEXT_NAMESPACE
