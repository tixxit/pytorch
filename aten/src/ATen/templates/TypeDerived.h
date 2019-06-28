#pragma once

// ${generated_comment}

#include <ATen/CPUTypeDefault.h>
#include <torch/csrc/WindowsTorchApiMacro.h>

$extra_cuda_headers

#ifdef _MSC_VER
#ifdef Type
#undef Type
#endif
#endif

namespace at {

struct TORCH_API ${Type} final : public ${DeviceType}TypeDefault {
  explicit ${Type}();
  virtual Backend backend() const override;
  virtual const char * toString() const override;
  virtual TypeID ID() const override;

  // example
  // virtual Tensor * add(Tensor & a, Tensor & b) override;
  ${type_derived_method_declarations}
};

} // namespace at
