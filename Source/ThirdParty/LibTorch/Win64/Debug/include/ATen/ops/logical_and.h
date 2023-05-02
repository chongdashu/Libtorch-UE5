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



#include <ATen/ops/logical_and_ops.h>

namespace at {


// aten::logical_and(Tensor self, Tensor other) -> Tensor
inline at::Tensor logical_and(const at::Tensor & self, const at::Tensor & other) {
    return at::_ops::logical_and::call(self, other);
}

// aten::logical_and.out(Tensor self, Tensor other, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & logical_and_out(at::Tensor & out, const at::Tensor & self, const at::Tensor & other) {
    return at::_ops::logical_and_out::call(self, other, out);
}
// aten::logical_and.out(Tensor self, Tensor other, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & logical_and_outf(const at::Tensor & self, const at::Tensor & other, at::Tensor & out) {
    return at::_ops::logical_and_out::call(self, other, out);
}

}
