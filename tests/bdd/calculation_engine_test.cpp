#include <catch2/catch_test_macros.hpp>
#include <cppzero/calculation_engine.hpp>

SCENARIO("Basic arithmetic operations using CalcEngine", "[calculator]") {

  GIVEN("A fresh calculation engine") {
    cppzero::CalcEngine calc_engine;
    
    WHEN("Adding two numbers") {
      int result = calc_engine.add(5, 3);
      
      THEN("The result should be the sum of the numbers") {
        REQUIRE(result == 8);
        REQUIRE(calc_engine.get_last_result() == 8);
        REQUIRE(calc_engine.get_last_error().empty());
      }
    }
    
    WHEN("Subtracting two numbers") {
      int result = calc_engine.sub(5, 3);
      
      THEN("The result should be the difference of the numbers") {
        REQUIRE(result == 2);
        REQUIRE(calc_engine.get_last_result() == 2);
        REQUIRE(calc_engine.get_last_error().empty());
      }
    }
    
    WHEN("Multiplying two numbers") {
      int result = calc_engine.mul(5, 3);
      
      THEN("The result should be the product of the numbers") {
        REQUIRE(result == 15);
        REQUIRE(calc_engine.get_last_result() == 15);
        REQUIRE(calc_engine.get_last_error().empty());
      }
    }
    
    WHEN("Dividing two numbers") {
      int result = calc_engine.div(15, 3);
      
      THEN("The result should be the quotient of the numbers") {
        REQUIRE(result == 5);
        REQUIRE(calc_engine.get_last_result() == 5);
        REQUIRE(calc_engine.get_last_error().empty());
      }
    }
    
    WHEN("Dividing by zero") {
      int result = calc_engine.div(15, 0);
      
      THEN("The result should be zero and an error should be set") {
        REQUIRE(result == 0);
        REQUIRE(calc_engine.get_last_result() == 0);
        REQUIRE(calc_engine.get_last_error() == "Division by zero");
      }
    }
  }
}
