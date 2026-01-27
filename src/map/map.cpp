#include <vector>
#include <stdlib>
#include "tile.cpp"
#include <stdio.h>
#include <iostream>

class Map {
public:
  Map(int x_size, int y_size);
  Map(Map &&) = default;
  Map(const Map &) = default;
  Map &operator=(Map &&) = default;
  Map &operator=(const Map &) = default;
  ~Map();

  void generate_tiles();
  void print_map();
  Tile* operator[](int x_index, int y_index);

  size_t x_size;
  size_t y_size;


private: 
  Tile** map;

};

Map::Map(size_t x_size, size_t y_size) {
  this->x_size = x_size;
  this->y_size = y_size;

  // Define the size of the map by generating
  // a map of size (y_size by x_size)
  this->map = new Tile*[y_size];
  for (int i{0}; i < y_size; i++) {
    this->map[i] = new Tile[x_size];
  }

}

void Map::generate_tiles() {
  for (int i{0}; i < this->y_size; i++) {
    for (int j{0}; j < this->x_size; j++) {
      Tile* tile_ptr = this->map[i][j];
      std::cout << tile_ptr->tile_char << " " << std::endl;
    }
}

void Map::print_map() {
  for (int i{0}; i < this->y_size; i++) {
    for (int j{0}; j < this->x_size; j++) {
      Tile* tile_ptr = this->map[i][j];
      std::cout << tile_ptr->tile_char << " " << std::endl;
    }
  }
}

Tile* Map::operator[](int x_index, int y_index) {
  return this->map[y_index][x_index];
}

Map::~Map() {
  for (int i{0}; i < this->x_size; i++) {
    delete [] this->map[i];
  }
  delete [] this->map;
}
