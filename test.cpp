#include <SFML/Graphics.hpp>
#include <iostream>

#include "AirCraft.h"

using namespace sf;

int main() {
  AirCraft a1 = AirCraft(1, 1, 1, 1, false);

  //   sf::Texture text;
  //   text.loadFromFile("assets/PlaneSprite(100x100).png");
  // sf::Sprite airplane;
  // airplane.setTexture(text);a
  // airplane.setOrigin(sf::Vector2f(50,50));
  // airplane.setPosition(sf::Vector2f(100,100));

  sf::RenderWindow window(sf::VideoMode(1000, 600), "AirCraft Testing",
                          sf::Style::Default);
  while (window.isOpen()) {
    Event event;
    while (window.pollEvent(event)) {
      if (event.type == Event::Closed) {
        window.close();
      }
    }
    window.clear(sf::Color::Blue);
    // window.draw(airplane);

    window.draw(*a1.getBody());
    // a1.draw(&window);
    window.display();
  }
  return 0;
}