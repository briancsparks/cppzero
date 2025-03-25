# CppZero

A C++ starter project with best practices already set up.

## Features

- Modern C++20 code with C17 FFI compatibility
- Meyers Singleton pattern for the Application class
- Simple public structs for core functionality
- Calculation Engine with both C++ and C interfaces
- CLI application using CLI11
- Unit testing with Google Test (TDD)
- BDD testing with Catch2
- Modern CMake configuration
- Devbox integration for easy tool installation

## Project Structure

- `src/` - Main source code and internal headers
- `include/cppzero/` - Public API headers
- `tests/unit/` - Unit tests using Google Test
- `tests/bdd/` - BDD tests using Catch2
- `cmake/` - CMake modules and configuration
- `src/examples/` - Example code for library usage

## Prerequisites

This project uses [Devbox](https://www.jetify.com/devbox/) to manage development tools. Make sure it's installed on your system.

## Getting Started

1. Clone the repository

```bash
git clone https://github.com/yourusername/cppzero.git
cd cppzero
```

2. Start the Devbox shell to access all required tools

```bash
devbox shell
```

3. Build the project

```bash
mkdir build && cd build
cmake ..
make
```

4. Run the tests

```bash
ctest
```

5. Try the CLI app

```bash
./cppzero_cli calc add 5 10
```

## Build Commands

For your convenience, the following build commands are available through devbox:

```bash
devbox run build      # Build the project
devbox run test       # Run the tests
devbox run clean      # Clean the build directory
devbox run rebuild    # Clean and rebuild the project
```

## License

This project is licensed under the MIT License - see the LICENSE.txt file for details.
