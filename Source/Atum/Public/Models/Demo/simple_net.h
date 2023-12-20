#pragma once
#include "GenericPlatform/GenericPlatformCompilerPreSetup.h"
#include "Macros/AtumMacrosGuards.h"
TORCH_INCLUDES_START
#include <torch/torch.h>
TORCH_INCLUDES_END

#ifndef SIMPLE_NET_H
#define SIMPLE_NET_H


class SimpleNetImpl : public torch::nn::Module {
public:
    SimpleNetImpl(int64_t input_size, int64_t hidden_size, int64_t output_size);

    torch::Tensor forward(torch::Tensor x);

private:
    torch::nn::Linear linear1;
    torch::nn::Linear linear2;
    torch::nn::Linear linear3;

};

TORCH_MODULE(SimpleNet);

#endif