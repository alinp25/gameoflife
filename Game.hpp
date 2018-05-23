#include <SFML/Graphics.hpp>
#include <vector>
#include "Cell.hpp"

class Game {
public:
  Game();
  ~Game();
  void run();

private:
  const int WINDOW_SIZE = 840;
  const int CELL_SIZE = 12;
  const int GRID_SIZE = WINDOW_SIZE / 12;
  const int ROWS = WINDOW_SIZE / CELL_SIZE;
  const int FPS = 60;

  bool isRunning;

  sf::RenderWindow window;
  std::vector<Cell> grid;
  sf::Clock clockActivating;
  sf::Time elapsedActivated;
  sf::Clock clockStart;
  sf::Time elapsedStart;

  int getLivingNeighbors(int x, int y);
};
