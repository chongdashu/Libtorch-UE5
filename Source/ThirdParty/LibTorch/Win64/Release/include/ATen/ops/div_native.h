#pragma once

// @generated by torchgen/gen.py from NativeFunction.h

#include <c10/core/Scalar.h>
#include <c10/core/Storage.h>
#include <c10/core/TensorOptions.h>
#include <c10/util/Deprecated.h>
#include <c10/util/Optional.h>
#include <c10/core/QScheme.h>
#include <ATen/core/Reduction.h>
#include <ATen/core/Tensor.h>
#include <tuple>
#include <vector>
#include <ATen/ops/div_meta.h>

namespace at {
namespace native {
struct TORCH_API structured_div_out : public at::meta::structured_div_Tensor {
void impl(const at::Tensor & self, const at::Tensor & other, const at::Tensor & out);
};
TORCH_API at::Tensor NestedTensor_div_Tensor(const at::Tensor & self, const at::Tensor & other);
TORCH_API at::Tensor div_sparse(const at::Tensor & self, const at::Tensor & other);
TORCH_API at::Tensor & div_out_sparse_zerodim(const at::Tensor & self, const at::Tensor & other, at::Tensor & out);
TORCH_API at::Tensor & div_sparse_(at::Tensor & self, const at::Tensor & other);
TORCH_API at::Tensor div_zerotensor(const at::Tensor & self, const at::Tensor & other);
struct TORCH_API structured_div_out_mode : public at::meta::structured_div_Tensor_mode {
void impl(const at::Tensor & self, const at::Tensor & other, c10::optional<c10::string_view> rounding_mode, const at::Tensor & out);
};
TORCH_API at::Tensor div_sparse(const at::Tensor & self, const at::Tensor & other, c10::optional<c10::string_view> rounding_mode);
TORCH_API at::Tensor & div_out_sparse_zerodim(const at::Tensor & self, const at::Tensor & other, c10::optional<c10::string_view> rounding_mode, at::Tensor & out);
TORCH_API at::Tensor & div_sparse_(at::Tensor & self, const at::Tensor & other, c10::optional<c10::string_view> rounding_mode);
TORCH_API at::Tensor div(const at::Tensor & self, const at::Scalar & other);
TORCH_API at::Tensor & div_Scalar_out(const at::Tensor & self, const at::Scalar & other, at::Tensor & out);
TORCH_API at::Tensor & div_(at::Tensor & self, const at::Scalar & other);
TORCH_API at::Tensor NestedTensor_div_Scalar(const at::Tensor & self, const at::Scalar & other);
TORCH_API at::Tensor div(const at::Tensor & self, const at::Scalar & other, c10::optional<c10::string_view> rounding_mode);
TORCH_API at::Tensor & div_Scalar_mode_out(const at::Tensor & self, const at::Scalar & other, c10::optional<c10::string_view> rounding_mode, at::Tensor & out);
TORCH_API at::Tensor & div_(at::Tensor & self, const at::Scalar & other, c10::optional<c10::string_view> rounding_mode);
} // namespace native
} // namespace at
