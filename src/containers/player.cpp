#include <stdio.h>
#include <iostream>
#include <string>
#include "team.cpp"

class Player {
public:
  Player();
  Player(Player &&) = default;
  Player(const Player &) = default;
  Player &operator=(Player &&) = default;
  Player &operator=(const Player &) = default;
  ~Player();

  int add_team(size_t map_size, Team* new_team);

  // getters
  int get_num_small_teams();
  int get_num_medium_teams();
  int get_num_big_teams();

private: 
  Team* small_map_teams;
  Team* medium_map_teams;
  Team* big_map_teams;
  int num_small_teams;
  int num_medium_teams;
  int num_big_teams;
};

Player::Player() {
  this->small_map_teams = new Team[3];
  this->num_small_teams = 0;
  this->medium_map_teams = new Team[3];
  this->num_medium_teams = 0;
  this->big_map_teams = new Team[3];
  this->num_big_teams = 0;
}

int Player::add_team(size_t map_size, Team* new_team) {
  // Check for small map
  if (map_size == 10) {
    if (this->num_small_teams < 3) {
      this->small_map_teams[this->num_small_teams];
      this->num_small_teams++;
      return 0;
    }
    else {
      return 1;
    }
  }
  // check for medium map
  else if (map_size == 20) {
    if (this->num_medium_teams < 3) {
      this->medium_map_teams[this->num_medium_teams];
      this->num_medium_teams++;
      return 0;
    }
    else {
      return 1;
    }
  }
  // check for big map
  else if (map_size == 40) {
    if (this->num_big_teams < 3) {
      this->big_map_teams[this->num_big_teams];
      this->num_big_teams++;
      return 0;
    }
    else {
      return 1;
    }
  }
  // map size didn't match
  else {
    return 1;
  }
}

Player::~Player() {
  delete[] this->small_map_teams;
  delete[] this->medium_map_teams;
  delete[] this->big_map_teams;
}
