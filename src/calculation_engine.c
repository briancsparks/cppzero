#include <cppzero/calculation_engine.h>
#include <stdbool.h>

// Internal state
static int last_result = 0;
static bool has_error = false;

int cppzero_calc_add(int a, int b) {
  last_result = a + b;
  has_error = false;
  return last_result;
}

int cppzero_calc_sub(int a, int b) {
  last_result = a - b;
  has_error = false;
  return last_result;
}

int cppzero_calc_mul(int a, int b) {
  last_result = a * b;
  has_error = false;
  return last_result;
}

int cppzero_calc_div(int a, int b) {
  if (b == 0) {
    last_result = 0;
    has_error = true;
    return 0;
  }

  last_result = a / b;
  has_error = false;
  return last_result;
}

int cppzero_calc_get_last_result(void) {
  return last_result;
}

int cppzero_calc_has_error(void) {
  return has_error ? 1 : 0;
}
