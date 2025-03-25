#pragma once

#include <string>
#include <vector>

namespace cppzero {

/**
 * @brief Forward declaration of an actor in the arena
 */
struct Actor;

/**
 * @brief Arena class representing an action-heavy module
 *
 * This class serves as an action-heavy top-level module for the application.
 */
struct Arena {
  /**
   * @brief Set the arena name
   * @param name The new arena name
   */
  void set_name(const std::string& name) { arena_name = name; }

  /**
   * @brief Get the arena name
   * @return The current arena name
   */
  std::string get_name() const { return arena_name; }

  /**
   * @brief Add an actor to the arena
   * @param actor_name Name of the actor to add
   */
  void add_actor(const std::string& actor_name);

  /**
   * @brief Get the number of actors in the arena
   * @return Actor count
   */
  size_t get_actor_count() const { return actor_names.size(); }

  /**
   * @brief Update the arena state
   * @param delta_time Time elapsed since the last update
   */
  void update(float delta_time);

  // Public data members
  std::string arena_name;
  std::vector<std::string> actor_names;
  float time_elapsed = 0.0f;
};

} // namespace cppzero
