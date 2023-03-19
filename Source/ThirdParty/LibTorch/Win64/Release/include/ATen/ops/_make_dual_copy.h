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



#include <ATen/ops/_make_dual_copy_ops.h>

namespace at {


// aten::_make_dual_copy(Tensor primal, Tensor tangent, int level) -> Tensor
inline at::Tensor _make_dual_copy(const at::Tensor & primal, const at::Tensor & tangent, int64_t level) {
    return at::_ops::_make_dual_copy::call(primal, tangent, level);
}

// aten::_make_dual_copy.out(Tensor primal, Tensor tangent, int level, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & _make_dual_copy_out(at::Tensor & out, const at::Tensor & primal, const at::Tensor & tangent, int64_t level) {
    return at::_ops::_make_dual_copy_out::call(primal, tangent, level, out);
}

// aten::_make_dual_copy.out(Tensor primal, Tensor tangent, int level, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & _make_dual_copy_outf(const at::Tensor & primal, const at::Tensor & tangent, int64_t level, at::Tensor & out) {
    return at::_ops::_make_dual_copy_out::call(primal, tangent, level, out);
}

}
