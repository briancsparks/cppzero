#pragma once

#include <string>

namespace cppzero {

/**
 * @brief Calculation Engine class for basic arithmetic operations
 *
 * This class provides basic arithmetic operations that will be used
 * for demonstration of unit testing and BDD testing.
 */
struct CalcEngine {
  /**
   * @brief Add two numbers
   * @param a First operand
   * @param b Second operand
   * @return Sum of a and b
   */
  int add(int a, int b) const;

  /**
   * @brief Subtract two numbers
   * @param a First operand
   * @param b Second operand
   * @return Difference of a and b
   */
  int sub(int a, int b) const;

  /**
   * @brief Multiply two numbers
   * @param a First operand
   * @param b Second operand
   * @return Product of a and b
   */
  int mul(int a, int b) const;

  /**
   * @brief Divide two numbers
   * @param a First operand
   * @param b Second operand
   * @return Quotient of a / b
   * @throws std::runtime_error if b is zero (not currently thrown due to no-exceptions policy)
   */
  int div(int a, int b) const;

  /**
   * @brief Get the last calculation result
   * @return Last calculation result
   */
  int get_last_result() const { return last_result; }

  /**
   * @brief Get the last error message
   * @return Last error message
   */
  std::string get_last_error() const { return last_error; }

  // Public data members
  mutable int last_result = 0;
  mutable std::string last_error;
};

} // namespace cppzero
