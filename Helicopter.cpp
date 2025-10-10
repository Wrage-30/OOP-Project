// Implementation file for Helicopter.h

#include "Helicopter.h"

#include <stdexcept>

// Default constructor
Helicopter::Helicopter() : Helicopter(0, 0, 0, 0, false, 0, 0) {}

// Argumented constructor, also calls the constructor one inheritance level up.
Helicopter::Helicopter(float fuel, int weight, int flightNumber, int speed,
                       bool isEmergency, int rotorBladeLength, int passengers)
    : Aircraft(fuel, weight, flightNumber, speed, isEmergency) {
  setRotorBladeLength(rotorBladeLength);
  setPassengers(passengers);

  // Loading Texture from a file
  if (!airplaneTexture->loadFromFile("assets/HELICOPTER_FILE")) {
    throw(std::runtime_error("Helicopter Texture File failed to load"));
  }

  // Assign the texture to the body Sprite
  body->setTexture(*airplaneTexture);

  // Set origin to the middle of the 100x100 sprite
  body->setOrigin(sf::Vector2f(50, 50));

  // Set position to outside the screen
  body->setPosition(sf::Vector2f(-1, -1));
}
Helicopter::~Helicopter() {}

// Implementation for the fuel usage for circling
void Helicopter::flyCircle() {}

// Setters:
void Helicopter::setRotorBladeLength(int rotorBladeLength) {
  // check to see if the rotorBladeLength is above 0
  if (rotorBladeLength < 0) {
    throw(out_of_range("This value(rotorBladeLength) cannot be less than 0"));
  } else
    this->rotorBladeLength = rotorBladeLength;
}
void Helicopter::setPassengers(int passengers) {
  // Error handling statement to ensure passengers cant be less than 0
  if (passengers < 0) {
    throw(out_of_range(
        "This value(Helicopter passengers) cannot be less than 0"));
  } else
    this->passengers = passengers;
}

// Getters
int Helicopter::getRotorBladeLength() { return rotorBladeLength; }
int Helicopter::getPassengers() { return passengers; }