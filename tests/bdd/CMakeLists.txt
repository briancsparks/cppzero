# BDD tests with Catch2

add_executable(bdd_tests
  calculation_engine_test.cpp
)

target_link_libraries(bdd_tests
  PRIVATE
    cppzero
    Catch2::Catch2WithMain
)

include(${Catch2_SOURCE_DIR}/extras/Catch.cmake)
catch_discover_tests(bdd_tests)
