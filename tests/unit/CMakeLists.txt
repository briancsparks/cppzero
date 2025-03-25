# Unit tests with Google Test

add_executable(unit_tests
  calculation_engine_test.cpp
)

target_link_libraries(unit_tests
  PRIVATE
    cppzero
    GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(unit_tests)
