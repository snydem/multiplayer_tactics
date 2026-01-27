#include <stdio.h>
#include <iostream>
#include <string>
#include "../entities/character.cpp"

class Player {
public:
  Player(size_t team_size);
  Player(Player &&) = default;
  Player(const Player &) = default;
  Player &operator=(Player &&) = default;
  Player &operator=(const Player &) = default;
  ~Player();

  // Team size should probably depend on map size
  Character* team;

  int add_character(Character new_character);

private:
  
};

Player::Player(size_t team_size) {
  // initialize the team as a Character array of defined size
  this->team = new Character[team_size];
}

Player::~Player() {
}
