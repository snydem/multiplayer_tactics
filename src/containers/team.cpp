#include <string>
#include <stdio.h>
#include "../entities/character.cpp"

class Team {
public:
  Team();
  Team(size_t map_team_size);
  Team(Team &&) = default;
  Team(const Team &) = default;
  Team &operator=(Team &&) = default;
  Team &operator=(const Team &) = default;
  ~Team();

  int resize_team(size_t map_team_size);
  int add_character(Character new_character);
  int get_current_team_size();
  int get_max_team_size();

  Character* team;

private:  
  int max_team_size;
  int cur_team_size;
};

Team::Team() {
}

Team::Team(size_t map_team_size) {
  this->max_team_size = map_team_size;
  this->cur_team_size = 0;
  this->team = new Character[map_team_size];
}

int Team::add_character(Character new_character) {
  if (cur_team_size <= max_team_size) {
    this->team[this->cur_team_size] = new_character;
    this->cur_team_size++;
    return 0;
  }
  else {
    return 1;
  }
}

Team::~Team() {
  delete[] this->team;
}
