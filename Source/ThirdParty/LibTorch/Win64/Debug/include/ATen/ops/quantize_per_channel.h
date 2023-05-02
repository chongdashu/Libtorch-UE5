#pragma once

// @generated by torchgen/gen.py from Function.h

#include <ATen/Context.h>
#include <ATen/DeviceGuard.h>
#include <ATen/TensorUtils.h>
#include <ATen/TracerMode.h>
#include <ATen/core/Generator.h>
#include <ATen/core/Reduction.h>
#include <ATen/core/Tensor.h>
#include <c10/core/Scalar.h>
#include <c10/core/Storage.h>
#include <c10/core/TensorOptions.h>
#include <c10/util/Deprecated.h>
#include <c10/util/Optional.h>



#include <ATen/ops/quantize_per_channel_ops.h>

namespace at {


// aten::quantize_per_channel(Tensor self, Tensor scales, Tensor zero_points, int axis, ScalarType dtype) -> Tensor
inline at::Tensor quantize_per_channel(const at::Tensor & self, const at::Tensor & scales, const at::Tensor & zero_points, int64_t axis, at::ScalarType dtype) {
    return at::_ops::quantize_per_channel::call(self, scales, zero_points, axis, dtype);
}

// aten::quantize_per_channel.out(Tensor self, Tensor scales, Tensor zero_points, int axis, ScalarType dtype, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & quantize_per_channel_out(at::Tensor & out, const at::Tensor & self, const at::Tensor & scales, const at::Tensor & zero_points, int64_t axis, at::ScalarType dtype) {
    return at::_ops::quantize_per_channel_out::call(self, scales, zero_points, axis, dtype, out);
}
// aten::quantize_per_channel.out(Tensor self, Tensor scales, Tensor zero_points, int axis, ScalarType dtype, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & quantize_per_channel_outf(const at::Tensor & self, const at::Tensor & scales, const at::Tensor & zero_points, int64_t axis, at::ScalarType dtype, at::Tensor & out) {
    return at::_ops::quantize_per_channel_out::call(self, scales, zero_points, axis, dtype, out);
}

}
