// Fill out your copyright notice in the Description page of Project Settings.


#include "Layers/Activation/AtumLayerGelu.h"
#include "Tensors/IAtumTensor.h"

#define LOCTEXT_NAMESPACE "AtumLayerGELU"

bool UAtumLayerGELU::OnInitializeData_Implementation([[maybe_unused]] const bool bRetry)
{
	Module = MakeShared<torch::nn::GELU>(std::make_shared<torch::nn::GELUImpl>(
		static_cast<torch::nn::GELUOptions>(Options)
	));
	return true;
}

bool UAtumLayerGELU::OnForward_Implementation(
	const TScriptInterface<IAtumTensor>& Input,
	TScriptInterface<IAtumTensor>& Output
)
{
	Output = DuplicateObject(Input.GetObject(), nullptr);
	Output->SetData((*Module)(Input->GetDataChecked()));
	return true;
}

bool UAtumLayerGELU::LoadFromFile_Implementation(const FString& RelativePath)
{
	if (!IAtumLayer::LoadFromFile_Implementation(RelativePath))
		return false;
	
	Options.SetFrom((*Module)->options);
	return true;
}

#undef LOCTEXT_NAMESPACE