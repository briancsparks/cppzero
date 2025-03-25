#include <cppzero/application.hpp>
#include <cppzero/calculation_engine.hpp>
#include <CLI/CLI.hpp>
#include <iostream>

int main(int argc, char** argv) {
  // Set up CLI11 parser
  CLI::App app{"CppZero - A C++ starter project"};
  
  // Add command for calculation engine
  auto* calc_cmd = app.add_subcommand("calc", "Calculation Engine commands");
  
  // Add subcommand
  std::string op;
  int a = 0, b = 0;
  
  auto* add_cmd = calc_cmd->add_subcommand("add", "Add two numbers");
  add_cmd->add_option("a", a, "First number")->required();
  add_cmd->add_option("b", b, "Second number")->required();
  
  auto* sub_cmd = calc_cmd->add_subcommand("sub", "Subtract two numbers");
  sub_cmd->add_option("a", a, "First number")->required();
  sub_cmd->add_option("b", b, "Second number")->required();
  
  auto* mul_cmd = calc_cmd->add_subcommand("mul", "Multiply two numbers");
  mul_cmd->add_option("a", a, "First number")->required();
  mul_cmd->add_option("b", b, "Second number")->required();
  
  auto* div_cmd = calc_cmd->add_subcommand("div", "Divide two numbers");
  div_cmd->add_option("a", a, "First number")->required();
  div_cmd->add_option("b", b, "Second number")->required();
    
  // Parse command line
  try {
    app.parse(argc, argv);
  } catch (const CLI::ParseError& e) {
    return app.exit(e);
  }
  
  // Access the calculation engine
  auto& calc_engine = cppzero::Application::instance().get_calc_engine();
  
  // Handle commands
  if (add_cmd->parsed()) {
    int result = calc_engine.add(a, b);
    std::cout << a << " + " << b << " = " << result << std::endl;
  } else if (sub_cmd->parsed()) {
    int result = calc_engine.sub(a, b);
    std::cout << a << " - " << b << " = " << result << std::endl;
  } else if (mul_cmd->parsed()) {
    int result = calc_engine.mul(a, b);
    std::cout << a << " * " << b << " = " << result << std::endl;
  } else if (div_cmd->parsed()) {
    if (b == 0) {
      std::cerr << "Error: Division by zero" << std::endl;
      return 1;
    }
    int result = calc_engine.div(a, b);
    std::cout << a << " / " << b << " = " << result << std::endl;
    
    // Check for errors
    if (!calc_engine.get_last_error().empty()) {
      std::cerr << "Error: " << calc_engine.get_last_error() << std::endl;
      return 1;
    }
  } else if (!app.get_subcommands().size() || !calc_cmd->get_subcommands().size()) {
    // No command specified, print help
    std::cout << app.help() << std::endl;
  }
  
  return 0;
}
