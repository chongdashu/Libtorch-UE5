// Fill out your copyright notice in the Description page of Project Settings.


#include "Layers/Dropout/AtumLayerDropout.h"

#include "Macros/AtumMacrosLog.h"
#include "Tensors/IAtumTensor.h"


#define LOCTEXT_NAMESPACE "AtumLayerDropout"


bool UAtumLayerDropout::OnInitializeData_Implementation([[maybe_unused]] const bool bRetry)
{
	if (Options.P < 0.0f || Options.P > 1.0f)
	{
		ATUM_LOG(Error, TEXT("Dropout probability must be in range [0.0, 1.0]!"))
		return false;
	}

	Module = MakeShared<torch::nn::Dropout>(std::make_shared<torch::nn::DropoutImpl>(
		static_cast<torch::nn::DropoutOptions>(Options)
	));
	return true;
}


bool UAtumLayerDropout::OnForward_Implementation(
	const TScriptInterface<IAtumTensor>& Input,
	TScriptInterface<IAtumTensor>& Output
)
{
	TArray<int64> InputSizes;
	Input->GetSizes(InputSizes);

	if (InputSizes.IsEmpty())
	{
		ATUM_LOG(Error, TEXT("Cannot use 0D input tensor!"))
		return false;
	}

	Output = DuplicateObject(Input.GetObject(), nullptr);
	Output->SetData((*Module)(Input->GetDataChecked().to(c10::kFloat)));
	return true;
}

bool UAtumLayerDropout::LoadFromFile_Implementation(const FString& RelativePath)
{
	if (!IAtumLayer::LoadFromFile_Implementation(RelativePath))
		return false;

	Options.SetFrom((*Module)->options);
	return true;
}
	


// #define LOCTEXT_NAMESPACE "AtumEmbed"
//
// bool UAtumEmbed::OnInitializeData_Implementation([[maybe_unused]] const bool bRetry)
// {
// 	if (Options.NumEmbeddings <= 0LL)
// 	{
// 		ATUM_LOG(Error, TEXT("The number of embeddings must be positive!"))
// 		return false;
// 	}
// 	if (Options.EmbeddingDim <= 0LL)
// 	{
// 		ATUM_LOG(Error, TEXT("Embedding dimension must be positive!"))
// 		return false;
// 	}
//
// 	Module = MakeShared<torch::nn::Embedding>(std::make_shared<torch::nn::EmbeddingImpl>(
// 		static_cast<torch::nn::EmbeddingOptions>(Options)
// 	));
// 	return true;
// }
//
//
// bool UAtumEmbed::OnForward_Implementation(
// 	const TScriptInterface<IAtumTensor>& Input,
// 	TScriptInterface<IAtumTensor>& Output
// )
// {
// 	TArray<int64> InputSizes;
// 	Input->GetSizes(InputSizes);
//
// 	if (InputSizes.IsEmpty())
// 	{
// 		ATUM_LOG(Error, TEXT("Cannot use 0D input tensor!"))
// 		return false;
// 	}
//
//
// 	Output = DuplicateObject(Input.GetObject(), nullptr);
// 	Output->SetData((*Module)(Input->GetDataChecked().to(c10::kLong)));  // Embedding typically requires Long type indices
// 	return true;
// }
//
// bool UAtumEmbed::LoadFromFile_Implementation(const FString& RelativePath)
// {
// 	if (!IAtumLayer::LoadFromFile_Implementation(RelativePath))
// 		return false;
//
// 	Options.SetFrom((*Module)->options);
// 	return true;
// }
//
// #undef LOCTEXT_NAMESPACE