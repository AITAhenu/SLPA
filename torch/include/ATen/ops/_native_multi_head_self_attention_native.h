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

TORCH_API at::Tensor multi_head_self_attention_cpu(const at::Tensor & query, const at::Tensor & qkv_weight, const at::Tensor & qkv_bias, const at::Tensor & proj_weight, const at::Tensor & proj_bias, const c10::optional<at::Tensor> & mask={});
TORCH_API at::Tensor multi_head_self_attention_cuda(const at::Tensor & query, const at::Tensor & qkv_weight, const at::Tensor & qkv_bias, const at::Tensor & proj_weight, const at::Tensor & proj_bias, const c10::optional<at::Tensor> & mask={});

} // namespace native
} // namespace at