#include <stdio.h>
#include <iostream>
// #include "entities/character.cpp"
#include "map/map.cpp"

int main() {
  // Create a test map
  Map test_0("test_0", 5, 5);
  test_0.print_map();

  Map test_large("test_large", 20, 20);
  test_large.print_map();

  Map test_uneven("test_uneven", 10, 20);
  test_uneven.print_map();
  
  //Character* c1 = new Character();
  //c1->gen_stock_stats();
  //std::cout << c1->p_hp << std::endl;
}
