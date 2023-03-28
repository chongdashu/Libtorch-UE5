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



#include <ATen/ops/deg2rad_ops.h>

namespace at {


// aten::deg2rad(Tensor self) -> Tensor
inline at::Tensor deg2rad(const at::Tensor & self) {
    return at::_ops::deg2rad::call(self);
}

// aten::deg2rad_(Tensor(a!) self) -> Tensor(a!)
inline at::Tensor & deg2rad_(at::Tensor & self) {
    return at::_ops::deg2rad_::call(self);
}

// aten::deg2rad.out(Tensor self, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & deg2rad_out(at::Tensor & out, const at::Tensor & self) {
    return at::_ops::deg2rad_out::call(self, out);
}

// aten::deg2rad.out(Tensor self, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & deg2rad_outf(const at::Tensor & self, at::Tensor & out) {
    return at::_ops::deg2rad_out::call(self, out);
}

}