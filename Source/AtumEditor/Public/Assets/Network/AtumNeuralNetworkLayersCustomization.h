// © 2024 Chong-U Lim
#pragma once

#include "IDetailCustomization.h"
#include "Input/Reply.h"

class UAtumNeuralNetworkLayers;
class ULlamaUnreal;

#define LOCTEXT_NAMESPACE "LlamaUnrealCustomization"

class FAtumNeuralNetworkLayersCustomization : public IDetailCustomization
{
public:
	static TSharedRef<IDetailCustomization> MakeInstance();

	virtual void CustomizeDetails(IDetailLayoutBuilder& DetailBuilder) override;

private:
	void OnJsonFilePathPicked(const FString& FilePath, ULlamaUnreal* LlamaUnreal);
};

#undef LOCTEXT_NAMESPACE