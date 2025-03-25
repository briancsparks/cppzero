#include <gtest/gtest.h>
#include <cppzero/calculation_engine.hpp>

namespace {

// Test fixture for CalcEngine tests
class CalcEngineTest : public ::testing::Test {
protected:
  cppzero::CalcEngine calc_engine;
};

// Test addition
TEST_F(CalcEngineTest, Add) {
  EXPECT_EQ(5, calc_engine.add(2, 3));
  EXPECT_EQ(0, calc_engine.add(0, 0));
  EXPECT_EQ(-1, calc_engine.add(2, -3));
  EXPECT_EQ(5, calc_engine.get_last_result());
  EXPECT_TRUE(calc_engine.get_last_error().empty());
}

// Test subtraction
TEST_F(CalcEngineTest, Sub) {
  EXPECT_EQ(-1, calc_engine.sub(2, 3));
  EXPECT_EQ(0, calc_engine.sub(0, 0));
  EXPECT_EQ(5, calc_engine.sub(2, -3));
  EXPECT_EQ(5, calc_engine.get_last_result());
  EXPECT_TRUE(calc_engine.get_last_error().empty());
}

// Test multiplication
TEST_F(CalcEngineTest, Mul) {
  EXPECT_EQ(6, calc_engine.mul(2, 3));
  EXPECT_EQ(0, calc_engine.mul(0, 5));
  EXPECT_EQ(-6, calc_engine.mul(2, -3));
  EXPECT_EQ(-6, calc_engine.get_last_result());
  EXPECT_TRUE(calc_engine.get_last_error().empty());
}

// Test division
TEST_F(CalcEngineTest, Div) {
  EXPECT_EQ(2, calc_engine.div(6, 3));
  EXPECT_EQ(0, calc_engine.div(0, 5));
  EXPECT_EQ(-2, calc_engine.div(6, -3));
  EXPECT_EQ(-2, calc_engine.get_last_result());
  EXPECT_TRUE(calc_engine.get_last_error().empty());
  
  // Test division by zero
  EXPECT_EQ(0, calc_engine.div(10, 0));
  EXPECT_EQ(0, calc_engine.get_last_result());
  EXPECT_FALSE(calc_engine.get_last_error().empty());
  EXPECT_EQ("Division by zero", calc_engine.get_last_error());
}

} // namespace
