// Implementation file for CommercialPlane.h
// Inherits from <-Plane <-AirCraft

#include "CommercialPlane.h"

#include <stdexcept>

using namespace std;

CommercialPlane::CommercialPlane() : CommercialPlane(0, 0, 0, 0, false, 0, 0) {}

CommercialPlane::CommercialPlane(float fuel, int weight, int flightNumber,
                                 int speed, bool isEmergency, int wingspan,
                                 int passengers)
    : Plane(fuel, weight, flightNumber, speed, isEmergency, wingspan) {
  setPassengers(passengers);

  // Loading Texture from a file
  if (!airplaneTexture->loadFromFile("assets/CommercialSprite(100x100).png")) {
    throw(std::runtime_error("CommercialPlane Texture File failed to load"));
  }

  // Assign the texture to the body Sprite
  body->setTexture(*airplaneTexture);

  // Set origin to the middle of the 100x100 sprite
  body->setOrigin(sf::Vector2f(50, 50));

  // Set position to outside the screen
  body->setPosition(sf::Vector2f(-1, -1));
}

CommercialPlane::~CommercialPlane() {}

// Implementation for circling using weight and passengers as factors for the
// fuel consumption
void CommercialPlane::flyCircle() {
  // Unsure of logic here yet
}

// Setter
void CommercialPlane::setPassengers(int passengers) {
  if (passengers < 0) {
    throw(out_of_range("This value(CommercialPlane passengers) cannot be less than 0"));
  } else
    this->passengers = passengers;
}

// Getter
int CommercialPlane::getPassengers() { return passengers; }