#include <SFML/Graphics.hpp>
#include "game.h"

game::game() : window(sf::VideoMode({1000, 700}), "OOP Project") {
mapTexture.loadFromFile("map1.png");
mapSprite = new sf::Sprite(mapTexture);
mapSprite->setPosition({300, 0});
plane.setSize({40.f, 20.f});
plane.setFillColor(sf::Color::Red);
plane.setPosition({200.f, 300.f});
}

void game::run(){
  while (window.isOpen()){
    while (const std::optional<sf::Event> event = window.pollEvent()) {
            if (event->is<sf::Event::Closed>())
                window.close();
    }
    window.clear();
    window.draw(*mapSprite);
    window.draw(plane);
    window.display();
  }
}