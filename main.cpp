#include <SFML/Graphics.hpp>

int main() {
  sf::RenderWindow window(sf::VideoMode(1920, 1080), "Correct SFML Example",
                          sf::Style::Default);
  sf::CircleShape shape(540.f);
  shape.setFillColor(sf::Color::Green);
  bool focus = window.hasFocus();
  window.setPosition({10, 50});

  while (window.isOpen()) {
    sf::Event event;
    while (window.pollEvent(event)) {
      if (event.type == sf::Event::Closed) {
        window.close();
      }
    }
    if (sf::Mouse::isButtonPressed(sf::Mouse::Button::Left) && focus) {
      // left mouse button is pressed: shoot
      shape.setPosition(400,0);
      shape.setFillColor(sf::Color::Blue);
    }
    window.clear();
    window.draw(shape);
    window.display();
  }
  return 0;
}