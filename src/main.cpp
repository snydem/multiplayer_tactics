#include <stdio.h>
#include <iostream>
#include "map/map.cpp"
// NOTE: PLAYER IS VROKEN AS FUCK FIX LATER :)
#include "player/player.cpp"

int main() {
  // Create a test map
  Map test_0("test_0", 5, 5);
  test_0.print_map();

  Map test_large("test_large", 20, 20);
  test_large.print_map();

  Map test_uneven("test_uneven", 10, 20);
  test_uneven.print_map();
  
  Character* c1 = new Character();
  Character c2;
  c1->gen_stock_stats();
  c2.gen_stock_stats();
  std::cout << c1->p_hp << std::endl;
  std::cout << c2.p_hp << std::endl;

  // Place the new characters onto a team
  Player* p1 = new Player();
  p1->add_character(*c1);

  p1->print_player_atrs();
  p1->add_character(c2);
  p1->print_player_atrs();
}
