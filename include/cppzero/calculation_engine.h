#ifndef CPPZERO_CALCULATION_ENGINE_H
#define CPPZERO_CALCULATION_ENGINE_H

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @brief Add two integers
 * @param a First operand
 * @param b Second operand
 * @return Sum of a and b
 */
int cppzero_calc_add(int a, int b);

/**
 * @brief Subtract b from a
 * @param a First operand
 * @param b Second operand
 * @return Difference (a - b)
 */
int cppzero_calc_sub(int a, int b);

/**
 * @brief Multiply two integers
 * @param a First operand
 * @param b Second operand
 * @return Product of a and b
 */
int cppzero_calc_mul(int a, int b);

/**
 * @brief Divide a by b
 * @param a First operand
 * @param b Second operand
 * @return Quotient of a / b, or 0 if b is zero
 */
int cppzero_calc_div(int a, int b);

/**
 * @brief Get last calculation result
 * @return Last calculation result
 */
int cppzero_calc_get_last_result(void);

/**
 * @brief Check if the last operation had an error
 * @return 1 if there was an error, 0 otherwise
 */
int cppzero_calc_has_error(void);

#ifdef __cplusplus
}
#endif

#endif // CPPZERO_CALCULATION_ENGINE_H
