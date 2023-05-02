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



#include <ATen/ops/_reshape_copy_ops.h>

namespace at {


// aten::_reshape_copy(Tensor self, SymInt[] size) -> Tensor
inline at::Tensor _reshape_copy(const at::Tensor & self, at::IntArrayRef size) {
    return at::_ops::_reshape_copy::call(self, c10::fromIntArrayRefSlow(size));
}
namespace symint {
  template <typename T, typename = std::enable_if_t<std::is_same<T, int64_t>::value>>
  at::Tensor _reshape_copy(const at::Tensor & self, at::IntArrayRef size) {
    return at::_ops::_reshape_copy::call(self, c10::fromIntArrayRefSlow(size));
  }
}

// aten::_reshape_copy(Tensor self, SymInt[] size) -> Tensor
inline at::Tensor _reshape_copy_symint(const at::Tensor & self, c10::SymIntArrayRef size) {
    return at::_ops::_reshape_copy::call(self, size);
}
namespace symint {
  template <typename T, typename = std::enable_if_t<std::is_same<T, c10::SymInt>::value>>
  at::Tensor _reshape_copy(const at::Tensor & self, c10::SymIntArrayRef size) {
    return at::_ops::_reshape_copy::call(self, size);
  }
}

}
