#pragma once

// @generated by tools/codegen/gen.py from Function.h

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



#include <ATen/ops/_linalg_check_errors_ops.h>

namespace at {


// aten::_linalg_check_errors(Tensor info, str api_name, *, bool is_matrix) -> ()
TORCH_API inline void _linalg_check_errors(const at::Tensor & info, c10::string_view api_name, bool is_matrix) {
    return at::_ops::_linalg_check_errors::call(info, api_name, is_matrix);
}

}
