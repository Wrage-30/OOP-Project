#include "AirCraft.h"

#include <iostream>

using namespace std;

// Need Implementing
AirCraft::AirCraft() : AirCraft(0, 0, 0, 0, false) {}
AirCraft::AirCraft(float fuel, int weight, int flightNumber, int speed,
                   bool isEmergency)
    : fuel(fuel),
      weight(weight),
      flightNumber(flightNumber),
      speed(speed),
      isEmergency(isEmergency) {

  airplaneTexture = new sf::Texture;
  if (!airplaneTexture->loadFromFile("assets/PlaneSprite(100x100).png")) {
    cout << "Error Loading texture \n";
  }
  body = new sf::Sprite();
  body->setTexture(*airplaneTexture);
  // body->setPosition(sf::Vector2f(-1,-1));
  body->setOrigin(sf::Vector2f(50, 50));
  body->setPosition(sf::Vector2f(100, 100));
}
AirCraft::~AirCraft() {}

void AirCraft::draw(sf::RenderWindow* window) { window->draw(*body); }

// setters
void AirCraft::setFuel(float fuel) {
  // check to see if fuel is between 0-100.0
  if (fuel >= 0 && fuel <= 100.0) {
    this->fuel = fuel;
    // account for negatice fuel
  } else if (fuel < 0) {
    fuel = 0;
  } else if (fuel > 100.0) {  // account for over 100% fuel
    fuel = 100.0;
  }
}
void AirCraft::setWeight(int weight) {
  // check to see if weight is above 0
  if (weight >= 0) {
    this->weight = weight;
  } else
    this->weight = 0;
}
void AirCraft::setFlightNumber(int flightNumber) {
  // must be greater than 0
  if (flightNumber < 0) {
    this->flightNumber = 0;
  } else
    this->flightNumber = flightNumber;
}
void AirCraft::setSpeed(int speed) {}
void AirCraft::setIsEmergency(bool isEmergency) {
  this->isEmergency = isEmergency;
}
// void AirCraft::setBody(sf::Sprite &body) { this->body = sf::Sprite(*body); }

// getters
float AirCraft::getFuel() { return fuel; }
int AirCraft::getWeight() { return weight; }
int AirCraft::getFlightNumber() { return flightNumber; }
int AirCraft::getSpeed() { return speed; }
bool AirCraft::getIsEmergency() { return isEmergency; }
sf::Sprite* AirCraft::getBody() { return body; }