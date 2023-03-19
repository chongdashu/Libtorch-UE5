#pragma once

// @generated by torchgen/gen.py from Operator.h

#include <tuple>
#include <vector>

// Forward declarations of any types needed in the operator signatures.
// We can't directly include these classes because it will cause circular include dependencies.
// This file is included by TensorBody.h, which defines the Tensor class.
#include <ATen/core/ATen_fwd.h>

namespace at {
namespace _ops {


struct TORCH_API _upsample_bilinear2d_aa_vec {
  using schema = at::Tensor (const at::Tensor &, at::OptionalSymIntArrayRef, bool, c10::optional<at::ArrayRef<double>>);
  using ptr_schema = schema*;
  // See Note [static constexpr char* members for windows NVCC]
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(name, "aten::_upsample_bilinear2d_aa")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(overload_name, "vec")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(schema_str, "_upsample_bilinear2d_aa.vec(Tensor input, SymInt[]? output_size, bool align_corners, float[]? scale_factors) -> Tensor")
  static at::Tensor call(const at::Tensor & input, at::OptionalSymIntArrayRef output_size, bool align_corners, c10::optional<at::ArrayRef<double>> scale_factors);
  static at::Tensor redispatch(c10::DispatchKeySet dispatchKeySet, const at::Tensor & input, at::OptionalSymIntArrayRef output_size, bool align_corners, c10::optional<at::ArrayRef<double>> scale_factors);
};

struct TORCH_API _upsample_bilinear2d_aa_out {
  using schema = at::Tensor & (const at::Tensor &, c10::SymIntArrayRef, bool, c10::optional<double>, c10::optional<double>, at::Tensor &);
  using ptr_schema = schema*;
  // See Note [static constexpr char* members for windows NVCC]
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(name, "aten::_upsample_bilinear2d_aa")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(overload_name, "out")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(schema_str, "_upsample_bilinear2d_aa.out(Tensor self, SymInt[2] output_size, bool align_corners, float? scales_h=None, float? scales_w=None, *, Tensor(a!) out) -> Tensor(a!)")
  static at::Tensor & call(const at::Tensor & self, c10::SymIntArrayRef output_size, bool align_corners, c10::optional<double> scales_h, c10::optional<double> scales_w, at::Tensor & out);
  static at::Tensor & redispatch(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, c10::SymIntArrayRef output_size, bool align_corners, c10::optional<double> scales_h, c10::optional<double> scales_w, at::Tensor & out);
};

struct TORCH_API _upsample_bilinear2d_aa {
  using schema = at::Tensor (const at::Tensor &, c10::SymIntArrayRef, bool, c10::optional<double>, c10::optional<double>);
  using ptr_schema = schema*;
  // See Note [static constexpr char* members for windows NVCC]
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(name, "aten::_upsample_bilinear2d_aa")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(overload_name, "")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(schema_str, "_upsample_bilinear2d_aa(Tensor self, SymInt[2] output_size, bool align_corners, float? scales_h=None, float? scales_w=None) -> Tensor")
  static at::Tensor call(const at::Tensor & self, c10::SymIntArrayRef output_size, bool align_corners, c10::optional<double> scales_h, c10::optional<double> scales_w);
  static at::Tensor redispatch(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, c10::SymIntArrayRef output_size, bool align_corners, c10::optional<double> scales_h, c10::optional<double> scales_w);
};

struct TORCH_API _upsample_bilinear2d_aa_vec_out {
  using schema = at::Tensor & (const at::Tensor &, at::OptionalSymIntArrayRef, bool, c10::optional<at::ArrayRef<double>>, at::Tensor &);
  using ptr_schema = schema*;
  // See Note [static constexpr char* members for windows NVCC]
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(name, "aten::_upsample_bilinear2d_aa")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(overload_name, "vec_out")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(schema_str, "_upsample_bilinear2d_aa.vec_out(Tensor input, SymInt[]? output_size, bool align_corners, float[]? scale_factors, *, Tensor(a!) out) -> Tensor(a!)")
  static at::Tensor & call(const at::Tensor & input, at::OptionalSymIntArrayRef output_size, bool align_corners, c10::optional<at::ArrayRef<double>> scale_factors, at::Tensor & out);
  static at::Tensor & redispatch(c10::DispatchKeySet dispatchKeySet, const at::Tensor & input, at::OptionalSymIntArrayRef output_size, bool align_corners, c10::optional<at::ArrayRef<double>> scale_factors, at::Tensor & out);
};

}} // namespace at::_ops
