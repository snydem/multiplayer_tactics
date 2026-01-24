#include <stdio.h>
#include <iostream>
#include "entities/character.cpp"

int main() {
  Character* c1 = new Character();
  c1->gen_stock_stats();
  std::cout << c1->p_hp << std::endl;
}
