#ifndef AIRCRAFT_H
#define AIRCRAFT_H
#include <SFML/Graphics.hpp>

using namespace std;

class AirCraft {
 protected:
  // data members
  float fuel;  // from 0-100.0%
  int weight;  // kilograms
  int flightNumber;
  int speed;
  // Boolean variable used to indicate emergency
  bool isEmergency;
  // data members for sprites and textures, need to be initialised in the heap
  sf::Texture* airplaneTexture;
  sf::Sprite* body;

 public:
  AirCraft();
  AirCraft(float fuel, int weight, int flightNumber, int speed,
           bool isEmergency);
  virtual ~AirCraft();

  // draws the AirCraft sprite on the RenderWindow for the game
  void draw(sf::RenderWindow* window);

  // Function to simplify movement for the sprite
  void move(sf::Vector2f);

  // function to reduce fuel if told to circle (unable to land)
  void virtual flyCircle() = 0;

  // setters
  void setFuel(float fuel);
  void setWeight(int weight);
  void setFlightNumber(int flightNumber);
  void setSpeed(int speed);
  void setIsEmergency(bool isEmergency);

  // getters
  float getFuel();
  int getWeight();
  int getFlightNumber();
  int getSpeed();
  bool getIsEmergency();
  sf::Sprite* getBody();
};
#endif