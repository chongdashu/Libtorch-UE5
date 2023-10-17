#include "layers/Dropout/AtumLayerDropoutOptions.h"

#define LOCTEXT_NAMESPACE "AtumLayerDropoutOptions"

FAtumLayerDropoutOptions::FAtumLayerDropoutOptions() noexcept : P(0.5f), bInplace(false)
{
}

void FAtumLayerDropoutOptions::SetFrom(const torch::nn::DropoutOptions& Options) noexcept
{
	P = Options.p();
	bInplace = Options.inplace();
}

#undef LOCTEXT_NAMESPACE
