#ifndef AIRCRAFT_H
#define AIRCRAFT_H
#include <SFML/Graphics.hpp>

using namespace std;

class AirCraft {
 protected:
  // data members
  float fuel;  // from 0-100.0
  int weight;  // kiligrams
  int flightNumber;
  int speed;
  // Boolean variable used to indicate emergency
  bool isEmergengy;
  sf::Sprite body;

 public:
  AirCraft();
  AirCraft(float fuel, int weight, int flightNumber, int speed, bool isEmergency, sf::Texture texture);
  ~AirCraft();

  // setters
  void setFuel(float fuel);
  void setWeight(int weight);
  void setFlightNumber(int flightNumber);
  void setSpeed(int speed);
  void setIsEmergency(bool isEmergency);
  void setBody(sf::Sprite);
  // getters
  float getFuel();
  int getWeight();
  int getFlightNumber();
  int getSpeed();
  bool getIsEmergency();
  sf::Sprite getBody();
};
#endif