#pragma once

#include <cppzero/document.hpp>
#include <cppzero/arena.hpp>
#include <cppzero/calculation_engine.hpp>

namespace cppzero {

/**
 * @brief Main application singleton class
 *
 * This class serves as the top-level singleton that holds all major modules
 * of the application.
 */
struct Application {
  /**
   * @brief Get the singleton instance
   * @return Reference to the singleton instance
   */
  static Application& instance() {
    static Application app;
    return app;
  }

  /**
   * @brief Get the document module
   * @return Reference to the document module
   */
  Document& get_document() { return document; }

  /**
   * @brief Get the arena module
   * @return Reference to the arena module
   */
  Arena& get_arena() { return arena; }

  /**
   * @brief Get the calculation engine module
   * @return Reference to the calculation engine module
   */
  CalcEngine& get_calc_engine() { return calc_engine; }

 private:
  // Private constructor for singleton pattern
  Application() = default;
  
  // Delete copy constructor and assignment operator
  Application(const Application&) = delete;
  Application& operator=(const Application&) = delete;

  // Main modules
  Document document;
  Arena arena;
  CalcEngine calc_engine;
};

} // namespace cppzero
