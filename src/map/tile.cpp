class Tile {
public:
  Tile();
  Tile(Tile &&) = default;
  Tile(const Tile &) = default;
  Tile &operator=(Tile &&) = default;
  Tile &operator=(const Tile &) = default;
  ~Tile();

  void set_tile(char set_char);
  void print_tile_info();
  char get_tile_char();

  char tile_char;

private:
  
};

Tile::Tile() {
  this->tile_char = "0";
}

void Tile::set_tile(char set_char) {
  this->tile_char = set_char;
}

Tile::~Tile() {
}
