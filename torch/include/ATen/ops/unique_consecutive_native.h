#pragma once

// @generated by tools/codegen/gen.py from NativeFunction.h

#include <c10/core/Scalar.h>
#include <c10/core/Storage.h>
#include <c10/core/TensorOptions.h>
#include <c10/util/Deprecated.h>
#include <c10/util/Optional.h>
#include <c10/core/QScheme.h>
#include <ATen/core/Reduction.h>
#include <ATen/core/Tensor.h>
#include <tuple>
#include <vector>


namespace at {
namespace native {

TORCH_API ::std::tuple<at::Tensor,at::Tensor,at::Tensor> unique_consecutive_cpu(const at::Tensor & self, bool return_inverse=false, bool return_counts=false, c10::optional<int64_t> dim=c10::nullopt);
TORCH_API ::std::tuple<at::Tensor,at::Tensor,at::Tensor> unique_consecutive_cuda(const at::Tensor & self, bool return_inverse=false, bool return_counts=false, c10::optional<int64_t> dim=c10::nullopt);

} // namespace native
} // namespace at
