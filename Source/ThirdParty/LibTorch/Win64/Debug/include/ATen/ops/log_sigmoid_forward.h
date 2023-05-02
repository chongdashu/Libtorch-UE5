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



#include <ATen/ops/log_sigmoid_forward_ops.h>

namespace at {


// aten::log_sigmoid_forward.output(Tensor self, *, Tensor(a!) output, Tensor(b!) buffer) -> (Tensor(a!), Tensor(b!))
inline ::std::tuple<at::Tensor &,at::Tensor &> log_sigmoid_forward_out(at::Tensor & output, at::Tensor & buffer, const at::Tensor & self) {
    return at::_ops::log_sigmoid_forward_output::call(self, output, buffer);
}
// aten::log_sigmoid_forward.output(Tensor self, *, Tensor(a!) output, Tensor(b!) buffer) -> (Tensor(a!), Tensor(b!))
inline ::std::tuple<at::Tensor &,at::Tensor &> log_sigmoid_forward_outf(const at::Tensor & self, at::Tensor & output, at::Tensor & buffer) {
    return at::_ops::log_sigmoid_forward_output::call(self, output, buffer);
}

// aten::log_sigmoid_forward(Tensor self) -> (Tensor output, Tensor buffer)
inline ::std::tuple<at::Tensor,at::Tensor> log_sigmoid_forward(const at::Tensor & self) {
    return at::_ops::log_sigmoid_forward::call(self);
}

}
