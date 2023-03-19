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



#include <ATen/ops/square_ops.h>

namespace at {


// aten::square(Tensor self) -> Tensor
inline at::Tensor square(const at::Tensor & self) {
    return at::_ops::square::call(self);
}

// aten::square_(Tensor(a!) self) -> Tensor(a!)
inline at::Tensor & square_(at::Tensor & self) {
    return at::_ops::square_::call(self);
}

// aten::square.out(Tensor self, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & square_out(at::Tensor & out, const at::Tensor & self) {
    return at::_ops::square_out::call(self, out);
}

// aten::square.out(Tensor self, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & square_outf(const at::Tensor & self, at::Tensor & out) {
    return at::_ops::square_out::call(self, out);
}

}
