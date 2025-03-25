#include <cppzero/arena.hpp>
#include <algorithm> // for std::min

namespace cppzero {

void Arena::add_actor(const std::string& actor_name) {
  actor_names.push_back(actor_name);
}

void Arena::update(float delta_time) {
  // Simple update logic - accumulate time
  time_elapsed += delta_time;

  // In a real implementation, we would update all actors here
}

} // namespace cppzero
