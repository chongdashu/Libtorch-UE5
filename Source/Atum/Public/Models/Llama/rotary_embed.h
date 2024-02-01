

#include "GenericPlatform/GenericPlatformCompilerPreSetup.h"
#include "Macros/AtumMacrosGuards.h"

TORCH_INCLUDES_START
#include <torch/torch.h>
TORCH_INCLUDES_END

#ifndef LLAMAROTARYEMBEDDING_H
#define LLAMAROTARYEMBEDDING_H

class LlamaRotaryEmbeddingImpl : public torch::nn::Module {
public:
	LlamaRotaryEmbeddingImpl(int64_t dim, int64_t max_position_embeddings = 2048, double base = 10000);
	std::tuple<torch::Tensor, torch::Tensor> forward(torch::Tensor x, int64_t seq_len );

private:
	int64_t dim_;
	int64_t max_position_embeddings_;
	double base_;
	torch::Tensor inv_freq_;
	int64_t max_seq_len_cached_;
	torch::Tensor cos_cached_;
	torch::Tensor sin_cached_;

	void _set_cos_sin_cache(int64_t seq_len);
};

TORCH_MODULE(LlamaRotaryEmbedding);

#endif // LLAMAROTARYEMBEDDING_H