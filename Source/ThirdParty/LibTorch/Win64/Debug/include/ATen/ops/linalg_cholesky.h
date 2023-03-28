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



#include <ATen/ops/linalg_cholesky_ops.h>

namespace at {


// aten::linalg_cholesky(Tensor self, *, bool upper=False) -> Tensor
inline at::Tensor linalg_cholesky(const at::Tensor & self, bool upper=false) {
    return at::_ops::linalg_cholesky::call(self, upper);
}

// aten::linalg_cholesky.out(Tensor self, *, bool upper=False, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & linalg_cholesky_out(at::Tensor & out, const at::Tensor & self, bool upper=false) {
    return at::_ops::linalg_cholesky_out::call(self, upper, out);
}

// aten::linalg_cholesky.out(Tensor self, *, bool upper=False, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & linalg_cholesky_outf(const at::Tensor & self, bool upper, at::Tensor & out) {
    return at::_ops::linalg_cholesky_out::call(self, upper, out);
}

}