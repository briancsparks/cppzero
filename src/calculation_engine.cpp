#include <cppzero/calculation_engine.hpp>

namespace cppzero {

int CalcEngine::add(int a, int b) const {
  last_result = a + b;
  last_error.clear();
  return last_result;
}

int CalcEngine::sub(int a, int b) const {
  last_result = a - b;
  last_error.clear();
  return last_result;
}

int CalcEngine::mul(int a, int b) const {
  last_result = a * b;
  last_error.clear();
  return last_result;
}

int CalcEngine::div(int a, int b) const {
  if (b == 0) {
    last_result = 0;
    last_error = "Division by zero";
    return last_result;
  }
  
  last_result = a / b;
  last_error.clear();
  return last_result;
}

} // namespace cppzero
