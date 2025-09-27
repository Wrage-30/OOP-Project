#include "AirCraft.h"

//Need Implementing
AirCraft::AirCraft(){}
AirCraft::AirCraft(float fuel, int weight, int flightNumber, int speed, bool isEmergency, sf::Texture texture){}
AirCraft::~AirCraft(){}

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
  this->isEmergengy = isEmergency;
}
void AirCraft::setBody(sf::Sprite body) { this->body = sf::Sprite(body); }

// getters
float AirCraft::getFuel() { return fuel; }
int AirCraft::getWeight() { return weight; }
int AirCraft::getFlightNumber() { return flightNumber; }
int AirCraft::getSpeed() { return speed; }
bool AirCraft::getIsEmergency() { return isEmergengy; }
sf::Sprite AirCraft::getBody() { return body; }