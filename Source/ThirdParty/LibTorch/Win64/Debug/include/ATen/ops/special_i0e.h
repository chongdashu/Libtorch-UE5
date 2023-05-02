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



#include <ATen/ops/special_i0e_ops.h>

namespace at {


// aten::special_i0e(Tensor self) -> Tensor
inline at::Tensor special_i0e(const at::Tensor & self) {
    return at::_ops::special_i0e::call(self);
}

// aten::special_i0e.out(Tensor self, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & special_i0e_out(at::Tensor & out, const at::Tensor & self) {
    return at::_ops::special_i0e_out::call(self, out);
}
// aten::special_i0e.out(Tensor self, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & special_i0e_outf(const at::Tensor & self, at::Tensor & out) {
    return at::_ops::special_i0e_out::call(self, out);
}

}
