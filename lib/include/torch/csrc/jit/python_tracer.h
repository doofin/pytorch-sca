#pragma once

#include <torch/csrc/jit/tracer.h>
#include <torch/csrc/python_headers.h>
#include <torch/csrc/utils/pybind.h>

#include <memory>
#include <string>

namespace torch {
namespace jit {
namespace tracer {
void initPythonTracerBindings(PyObject* module);

std::string getPythonInterpreterStackTrace();
Node* preRecordPythonTrace(
    THPObjectPtr pyobj,
    const std::string& arg_types,
    at::ArrayRef<autograd::Variable> inputs,
    pyobj_list scalar_args);

std::shared_ptr<Graph> createGraphByTracing(
    const py::function& func,
    Stack inputs,
    const py::function& var_name_lookup_fn,
    bool force_outplace,
    const c10::optional<size_t>& num_real_inputs = c10::nullopt);
} // namespace tracer
} // namespace jit
} // namespace torch
