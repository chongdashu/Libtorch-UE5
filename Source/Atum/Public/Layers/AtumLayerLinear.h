﻿// © 2023 Kaya Adrian.

#pragma once

#include "IAtumLayer.h"

#include "AtumLayerLinear.generated.h"


UCLASS(Blueprintable, BlueprintType, DisplayName = "ATUM Linear Layer")
class ATUM_API UAtumLayerLinear : public UObject, public IAtumLayer
{
	GENERATED_BODY()

	TUniquePtr<torch::nn::LinearImpl> Module;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ATUM|Options", meta = (AllowPrivateAccess))
	int64 InFeatures;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ATUM|Options", meta = (AllowPrivateAccess))
	int64 OutFeatures;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ATUM|Options", meta = (AllowPrivateAccess))
	bool bLearnBias;

public:
	UE_NODISCARD_CTOR
	UAtumLayerLinear() noexcept;
	
protected:
	virtual bool InitializeData_Implementation() noexcept override;
	
	virtual bool Forward_Implementation(
		const TScriptInterface<IAtumTensor>& Input,
		TScriptInterface<IAtumTensor>& Output
	) noexcept override;

public:
	UE_NODISCARD
	FORCEINLINE const torch::nn::LinearImpl* GetModule() const noexcept { return Module.Get(); }
	
	UE_NODISCARD
	FORCEINLINE torch::nn::LinearImpl* GetModule() noexcept { return Module.Get(); }

	UE_NODISCARD
	FORCEINLINE const torch::nn::LinearImpl& GetModuleChecked() const { return *GetModule(); }

	UE_NODISCARD
	FORCEINLINE torch::nn::LinearImpl& GetModuleChecked() { return *GetModule(); }
};
