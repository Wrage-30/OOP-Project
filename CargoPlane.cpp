// Implementation file for CargoPlane
// Inherits from <-Plane <-AirCraft

#include "CargoPlane.h"

#include <stdexcept>

using namespace std;

// Default constructor
CargoPlane::CargoPlane() : CargoPlane(0, 0, 0, 0, false, 0, "", 0) {}
// Argumented constructor
CargoPlane::CargoPlane(float fuel, int weight, int flightNumber, int speed,
                       bool isEmergency, int wingspan, string freightType,
                       int freightWeight)
    : Plane(fuel, weight, flightNumber, speed, isEmergency, wingspan),
      freightType(freightType) {

  // User setter for error handling
  setFreightWeight(freightWeight);
 
  // Loading Texture from a file
  if (!airplaneTexture->loadFromFile("assets/CargoSprite(100x100).png")) {
    throw(std::runtime_error("CargoPlane Texture file failed to load"));
  }

  // Assign the texture to the body Sprite
  body->setTexture(*airplaneTexture);

  // Set origin to the middle of the 100x100 sprite
  body->setOrigin(sf::Vector2f(50, 50));

  // Set position to outside the screen
  body->setPosition(sf::Vector2f(-1, -1));
}

CargoPlane::~CargoPlane() {}

// Function to handle fuel usage when circling
void CargoPlane::flyCircle() {
  // Unsure of logic here yet
}

// Setters
void CargoPlane::setFreightType(string freightType) {
  this->freightType = freightType;
}
void CargoPlane::setFreightWeight(int freightWeight) {
  if (freightWeight < 0) {
    throw(out_of_range("This value cannot be less than 0"));
  } else
    this->freightWeight = freightWeight;
}

// Getter
string CargoPlane::getFreightType() { return freightType; }
int CargoPlane::getFreightWeight() { return freightWeight; }