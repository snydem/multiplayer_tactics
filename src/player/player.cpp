#include <stdio.h>
#include <iostream>
#include <string>
#include "../entities/character.cpp"

class Player {
public:
  Player();
  Player(size_t team_size, Character* team);
  Player(Player &&) = default;
  Player(const Player &) = default;
  Player &operator=(Player &&) = default;
  Player &operator=(const Player &) = default;
  ~Player();

  // Team size should probably depend on map size
  Character* team;
  size_t team_size;

  int add_character(Character new_character);
  void print_player_atrs();

private:
  
};

Player::Player() {
  // initialize the team as a Character array of defined size
  this->team_size = 0;
}

Player::Player(size_t team_size, Character* team) {
  this->team = team;
  this->team_size = team_size;
}

int Player::add_character(Character new_character) {
  size_t cur_team_size = this->team_size;
  Character* base_team_ptr = this->team;
  Character* next_char_ptr = base_team_ptr + cur_team_size;

  next_char_ptr = &new_character;

  // update the team_size
  this->team_size++;

  return 0;
}

void Player::print_player_atrs() {
  std::cout << "Player's Team Size: " << this->team_size << std::endl;
}

Player::~Player() {
  delete [] this->team;
}
