#include <SFML/Graphics.hpp>

using namespace sf;

int main() {
  RenderWindow window(VideoMode(1920, 1080), "Correct SFML Example",
                      Style::Default);
  RectangleShape shape(sf::Vector2f(50,50));
  shape.setFillColor(Color::Green);
  bool focus = window.hasFocus();
  window.setPosition({10, 50});
  int y = 0;
  int x = 10;
  window.setFramerateLimit(30);

  while (window.isOpen()) {
    Event event;
    while (window.pollEvent(event)) {
      if (event.type == Event::Closed) {
        window.close();
      }
    }
    if (Mouse::isButtonPressed(sf::Mouse::Button::Left) && focus) {
      // left mouse button is pressed: shoot
      shape.move(5,0.5);
      shape.setFillColor(Color::Blue);
    }
    if(shape.getPosition().x >= window.getSize().x){
      shape.setPosition(x,y);
      y = y+50;
      x++;
    }
    shape.move(x,0.5);
    window.clear();
    window.draw(shape);
    window.display();
  }
  return 0;
}