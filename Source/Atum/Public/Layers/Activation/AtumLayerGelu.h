// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "AtumLayerGeluOptions.h"
#include "IAtumLayerBaseActivation.h"
#include "Macros/AtumMacrosLayer.h"

TORCH_INCLUDES_START
#include <torch/nn/modules/activation.h>
TORCH_INCLUDES_END

#include "AtumLayerGelu.generated.h"


#define LOCTEXT_NAMESPACE "AtumLayerGELU"

/**
 * 
 */
UCLASS(Blueprintable, BlueprintType, DisplayName = "ATUM GELU Layer")
class ATUM_API UAtumLayerGELU : public UObject, public IAtumLayerBaseActivation
{
	GENERATED_BODY()
	GENERATED_ATUM_LAYER(FAtumLayerOptionsGelu, torch::nn::GELU)


protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess, ShowOnlyInnerProperties, ExposeOnSpawn))
	FAtumLayerOptionsGelu Options;
	
};

#undef LOCTEXT_NAMESPACE
