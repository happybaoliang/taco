#ifndef TACO_LOWER_H
#define TACO_LOWER_H

#include "expr.h"
#include "tensor.h"
#include "ir.h"

namespace taco {
namespace internal {
class IterationSchedule;

/// Lower the tensor object with a defined expression and an iteration schedule
/// into a statement that evaluates it.
//Stmt lower(const internal::Tensor& tensor);

}}

#endif