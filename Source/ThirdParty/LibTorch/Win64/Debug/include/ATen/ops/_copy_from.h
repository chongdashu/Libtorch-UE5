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



#include <ATen/ops/_copy_from_ops.h>

namespace at {


// aten::_copy_from(Tensor self, Tensor dst, bool non_blocking=False) -> Tensor
inline at::Tensor _copy_from(const at::Tensor & self, const at::Tensor & dst, bool non_blocking=false) {
    return at::_ops::_copy_from::call(self, dst, non_blocking);
}

// aten::_copy_from.out(Tensor self, Tensor dst, bool non_blocking=False, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & _copy_from_out(at::Tensor & out, const at::Tensor & self, const at::Tensor & dst, bool non_blocking=false) {
    return at::_ops::_copy_from_out::call(self, dst, non_blocking, out);
}

// aten::_copy_from.out(Tensor self, Tensor dst, bool non_blocking=False, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & _copy_from_outf(const at::Tensor & self, const at::Tensor & dst, bool non_blocking, at::Tensor & out) {
    return at::_ops::_copy_from_out::call(self, dst, non_blocking, out);
}

}
