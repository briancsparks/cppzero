#include <cppzero/application.hpp>
#include <cppzero/calculation_engine.hpp>
#include <iostream>

int main() {
  // Access the application singleton
  auto& app = cppzero::Application::instance();
  
  // Use the calculation engine
  auto result = app.get_calc_engine().add(5, 10);
  
  std::cout << "5 + 10 = " << result << std::endl;
  
  return 0;
}
