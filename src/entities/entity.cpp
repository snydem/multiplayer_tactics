#include <iostream>
#include <string>

class Entity {
public:
  Entity();
  Entity(std::string name);
  Entity(Entity &&) = default;
  Entity(const Entity &) = default;
  Entity &operator=(Entity &&) = default;
  Entity &operator=(const Entity &) = default;
  ~Entity();

  std::string name{};

private:
  
};

Entity::Entity() {
  this->name = "NO NAME";
}

Entity::Entity(std::string name) {
  this->name = name;
}

Entity::~Entity() {
}

