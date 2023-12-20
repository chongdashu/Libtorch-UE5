#pragma once

#include "GenericPlatform/GenericPlatformCompilerPreSetup.h"
#include "Macros/AtumMacrosGuards.h"

TORCH_INCLUDES_START
#include <torch/torch.h>
TORCH_INCLUDES_END


#ifndef LLAMA_RMS_H
#define LLAMA_RMS_H

class LlamaRMSNormImpl : public torch::nn::Module {
public:
    LlamaRMSNormImpl(int hidden_size, double eps = 1e-5);

    torch::Tensor forward(torch::Tensor& x);

private:
    double variance_epsilon;

    // weight (aka parameter)
    torch::Tensor weight;
};

TORCH_MODULE(LlamaRMSNorm);

#endif // LLAMA_RMS_H
