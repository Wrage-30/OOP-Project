#ifndef GAME_H
#define GAME_H

#include <SFML/Graphics.hpp>
#include "Terminal.h"
#include "Aircraft.h"

class game {
  private:
  sf::RenderWindow window;
  sf::Texture mapTexture;
  sf::Sprite* mapSprite;
  sf::RectangleShape plane;
  public:
  game();
  void run();
};

#endif