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



#include <ATen/ops/asin_ops.h>

namespace at {


// aten::asin(Tensor self) -> Tensor
inline at::Tensor asin(const at::Tensor & self) {
    return at::_ops::asin::call(self);
}

// aten::asin_(Tensor(a!) self) -> Tensor(a!)
inline at::Tensor & asin_(at::Tensor & self) {
    return at::_ops::asin_::call(self);
}

// aten::asin.out(Tensor self, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & asin_out(at::Tensor & out, const at::Tensor & self) {
    return at::_ops::asin_out::call(self, out);
}

// aten::asin.out(Tensor self, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & asin_outf(const at::Tensor & self, at::Tensor & out) {
    return at::_ops::asin_out::call(self, out);
}

}
