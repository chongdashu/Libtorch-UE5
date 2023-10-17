#include "layers/Sparse/AtumLayerEmbedOptions.h"
#define LOCTEXT_NAMESPACE "AtumLayerEmbedOptions"

FAtumLayerEmbedOptions::FAtumLayerEmbedOptions() noexcept : NumEmbeddings(0LL), EmbeddingDim(0LL)
{
}

void FAtumLayerEmbedOptions::SetFrom(const torch::nn::EmbeddingOptions& Options) noexcept
{
	NumEmbeddings = Options.num_embeddings();
	EmbeddingDim = Options.embedding_dim();
}

#undef LOCTEXT_NAMESPACE