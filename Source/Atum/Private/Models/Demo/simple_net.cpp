#include "Models/Demo/simple_net.h"


SimpleNetImpl::SimpleNetImpl(int64_t input_size, int64_t hidden_size, int64_t output_size)
    : linear1(torch::nn::LinearOptions(input_size, hidden_size).bias(false)),
      linear2(torch::nn::LinearOptions(hidden_size, hidden_size).bias(false)),
      linear3(torch::nn::LinearOptions(hidden_size, output_size).bias(false))
{
    register_module("linear1", linear1);
    register_module("linear2", linear2);
    register_module("linear3", linear3);
}

torch::Tensor SimpleNetImpl::forward(torch::Tensor x) {
    x = torch::relu(linear1->forward(x));
    x = torch::relu(linear2->forward(x));
    x = linear3->forward(x);
    return x;
}

