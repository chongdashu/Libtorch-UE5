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



#include <ATen/ops/_nested_view_from_buffer_copy_ops.h>

namespace at {


// aten::_nested_view_from_buffer_copy(Tensor self, Tensor nested_size, Tensor nested_strides, int[] offsets) -> Tensor
inline at::Tensor _nested_view_from_buffer_copy(const at::Tensor & self, const at::Tensor & nested_size, const at::Tensor & nested_strides, at::IntArrayRef offsets) {
    return at::_ops::_nested_view_from_buffer_copy::call(self, nested_size, nested_strides, offsets);
}

// aten::_nested_view_from_buffer_copy.out(Tensor self, Tensor nested_size, Tensor nested_strides, int[] offsets, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & _nested_view_from_buffer_copy_out(at::Tensor & out, const at::Tensor & self, const at::Tensor & nested_size, const at::Tensor & nested_strides, at::IntArrayRef offsets) {
    return at::_ops::_nested_view_from_buffer_copy_out::call(self, nested_size, nested_strides, offsets, out);
}
// aten::_nested_view_from_buffer_copy.out(Tensor self, Tensor nested_size, Tensor nested_strides, int[] offsets, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & _nested_view_from_buffer_copy_outf(const at::Tensor & self, const at::Tensor & nested_size, const at::Tensor & nested_strides, at::IntArrayRef offsets, at::Tensor & out) {
    return at::_ops::_nested_view_from_buffer_copy_out::call(self, nested_size, nested_strides, offsets, out);
}

}
