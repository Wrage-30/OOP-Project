// Testing the AirCraft class before making it a abstract class

#include <SFML/Graphics.hpp>
#include <iostream>
#include <stdexcept>

#include "AirCraft.h"
#include "CargoPlane.h"
#include "CommercialPlane.h"
#include "Plane.h"

using namespace sf;

int main() {
  try {
    // fuel, weight,flightnumber, speed, isEmergency
    // AirCraft a1 = AirCraft(1, 1, 1, 1, false);
    CommercialPlane plane1 =
        CommercialPlane(50.5, 100, 1, 1000, false, 34, 200);
    plane1.getBody()->setRotation(110);
    plane1.getBody()->setPosition(270, 0);

    CargoPlane plane2 =
        CargoPlane(99, 1000, 2, 50, true, 50, "Medical Supplies", 1500);
    plane2.getBody()->setRotation(170);

    // menu shape making
    sf::RectangleShape menuBackground = RectangleShape(sf::Vector2f(300, 700));
    Color menu = Color(150, 150, 150);
    menuBackground.setFillColor(menu);
    menuBackground.setPosition(sf::Vector2f(0, 0));

    // Assigning a new sprite and texture to the background
    sf::Texture backgroundTexture;
    if (!backgroundTexture.loadFromFile("assets/map1.png")) {
      // Error handling for failed texture loading
      throw(std::runtime_error("File failed to load"));
    }

    // Create a sprite from the texture
    sf::Sprite backgroundSprite;
    backgroundSprite.setTexture(backgroundTexture);
    backgroundSprite.setPosition(0, 0);
    backgroundSprite.move(300, 0);

    sf::RenderWindow window(sf::VideoMode(1000, 700), "AirCraft Testing",
                            sf::Style::Default);

    window.setPosition(sf::Vector2i(10, 10));

    plane2.getBody()->setPosition(sf::Vector2f(1001, 0));

    while (window.isOpen()) {
      Event event;
      while (window.pollEvent(event)) {
        if (event.type == Event::Closed) {
          window.close();
        }
      }

      plane1.move(sf::Vector2f(0.012, 0.02));
      plane2.move(sf::Vector2f(-0.02, 0.02));

      window.clear(sf::Color::White);
      window.draw(backgroundSprite);
      plane1.draw(&window);
      plane2.draw(&window);
      window.draw(menuBackground);
      window.display();
    }
  }
  // catching the file doesn't load
  catch (const std::runtime_error& message) {
    std::cerr << message.what() << std::endl;
  }
  // catch for the input values being out of range
  catch (const std::out_of_range& err) {
    std::cerr << err.what() << std::endl;
  }
  return 0;
}