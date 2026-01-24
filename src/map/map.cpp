#include <vector>
#include <stdlib>
#include "tile.cpp"

class Map {
public:
  Map(int x_size, int y_size);
  Map(Map &&) = default;
  Map(const Map &) = default;
  Map &operator=(Map &&) = default;
  Map &operator=(const Map &) = default;
  ~Map();

  void generate_tiles();
  Tile* operator[](int x_index, int y_index);

  size_t x_size;
  size_t y_size;


private: 
  Tile** map;

};

Map::Map(size_t x_size, size_t y_size) {
  this->x_size = x_size;
  this->y_size = y_size;

}

Map::~Map() {
}
