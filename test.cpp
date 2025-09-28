// Testing the AirCraft class before making it a abstract class

#include <SFML/Graphics.hpp>
#include <iostream>

#include "AirCraft.h"
#include "Plane.h"
#include "CommercialPlane.h"

using namespace sf;

int main() {
  // AirCraft a1 = AirCraft(1, 1, 1, 1, false);  // fuel, weight, flightnumber, speed, isEmergency

  // sf::Texture text;
  // text.loadFromFile("assets/PlaneSprite(20x20).png");
  // a1.getBody()->setTexture(text);

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
    // a1.draw(&window);
    window.display();
  }
  return 0;
}