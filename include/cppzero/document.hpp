#pragma once

#include <string>
#include <vector>

namespace cppzero {

/**
 * @brief Document class representing a data-heavy module
 *
 * This class serves as a data-heavy top-level module for the application.
 */
struct Document {
  /**
   * @brief Set the document name
   * @param name The new document name
   */
  void set_name(const std::string& name) { doc_name = name; }

  /**
   * @brief Get the document name
   * @return The current document name
   */
  std::string get_name() const { return doc_name; }

  /**
   * @brief Add content to the document
   * @param content The content to add
   */
  void add_content(const std::string& content) { 
    contents.push_back(content); 
  }

  /**
   * @brief Get all document contents
   * @return Vector of content strings
   */
  const std::vector<std::string>& get_contents() const { 
    return contents; 
  }

  /**
   * @brief Clear all document contents
   */
  void clear() { 
    contents.clear(); 
  }

  // Public data members
  std::string doc_name;
  std::vector<std::string> contents;
};

} // namespace cppzero
