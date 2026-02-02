#include <iostream>
#include <string>
#include <time.h>
#include <stdlib.h>
#include "entity.cpp"


class CharacterClass {
public:
  CharacterClass();
  CharacterClass(std::string class_name, int phys_atk, int magk_atk);
  CharacterClass(CharacterClass &&) = default;
  CharacterClass(const CharacterClass &) = default;
  CharacterClass &operator=(CharacterClass &&) = default;
  CharacterClass &operator=(const CharacterClass &) = default;
  ~CharacterClass();

private:
  std::string class_name;
  std::string class_description;
  // This is where for a class you define the base stats, right now
  // just phys_atk and magk_atk
  int phys_atk;
  int magk_atk;
  
};

CharacterClass::CharacterClass() {
  this->class_name = "NO NAME";
  this->phys_atk = 0;
  this->magk_atk = 0;
}

CharacterClass::CharacterClass(std::string class_name, int phys_atk, 
    int magk_atk) {
  this->class_name = class_name;
  this->phys_atk = phys_atk;
  this->magk_atk = magk_atk;
}

CharacterClass::~CharacterClass() {
}


class Character : public Entity {
  public:
    Character();
    Character(std::string name);
    Character(Character &&) = default;
    Character(const Character &) = default;
    Character &operator=(Character &&) = default;
    Character &operator=(const Character &) = default;
    ~Character();

    // Right now these are just scratch work
    void gen_stats(int seed);
    void gen_stock_stats();
    //void lvl_up(int seed);
    void set_class(CharacterClass new_class);

    std::string class_name;
    CharacterClass char_class;

    /* NOTE: Here in this context p = primary stat, s = secondary stat
     * c = combat stat
     */
    int p_hp;
    int p_mp;
    int p_spd;
    int p_mov;
    int p_jmp;
    int p_phys_atk;
    int p_magk_atk;
    int s_exp;
    int c_brav;
    int c_faith;


  private:

};

Character::Character() {
}

Character::Character(std::string name) : Entity(name) {
}

void Character::gen_stats(int seed) {
  srand(seed);
}

void Character::gen_stock_stats() {
  this->p_hp = 10;
  this->p_mp = 10;
  this->p_spd = 10;
  this->p_mov = 10;
  this->p_jmp = 10;
  this->p_phys_atk = 10;
  this->p_magk_atk = 10;
  this->s_exp = 10;
  this->c_brav = 10;
  this->c_faith = 10;
}

void Character::set_class(CharacterClass new_class) {
  this->char_class = new_class;
}

Character::~Character() {
}

