# CppZero Development Guide

## Build Commands
- Build project: `devbox run build`
- Run all tests: `devbox run test`
- Run single test: `cd build && ./tests/unit/unit_tests --gtest_filter=CalcEngineTest.Add` (for gtest)
- Run single BDD test: `cd build && ./tests/bdd/bdd_tests "Basic arithmetic operations using CalcEngine"` (for Catch2)
- Clean build: `devbox run clean`
- Rebuild project: `devbox run rebuild`
- Run CLI app: `devbox run run`

## Code Style
- Use struct for all classes with public members (rule of zero where possible)
- No exceptions allowed - handle errors with explicit return values and status messages
- C++20 standard for C++ code, C17 for C code
- Use #pragma once for header guards
- Initialize all variables at declaration
- Follow the Meyers singleton pattern for Application class
- Use 2-space indentation with spaces (no tabs)
- 180 character line length limit
- Include project headers before system headers
- Document all functions and classes with Doxygen-style comments
- Provide clear, meaningful error messages
- Use modern CMake with target_* commands