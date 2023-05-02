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



#include <ATen/ops/exp_ops.h>

namespace at {


// aten::exp(Tensor self) -> Tensor
inline at::Tensor exp(const at::Tensor & self) {
    return at::_ops::exp::call(self);
}

// aten::exp_(Tensor(a!) self) -> Tensor(a!)
inline at::Tensor & exp_(at::Tensor & self) {
    return at::_ops::exp_::call(self);
}

// aten::exp.out(Tensor self, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & exp_out(at::Tensor & out, const at::Tensor & self) {
    return at::_ops::exp_out::call(self, out);
}
// aten::exp.out(Tensor self, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & exp_outf(const at::Tensor & self, at::Tensor & out) {
    return at::_ops::exp_out::call(self, out);
}

}
