#include <stdio.h>
#include <iostream>
#include "entities/character.cpp"
#include "map/map.cpp"

int main() {
  // Create a test map
  Map test(5, 5)
  
  Character* c1 = new Character();
  c1->gen_stock_stats();
  std::cout << c1->p_hp << std::endl;
}
