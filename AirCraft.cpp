// Implementation file for the AirCraft.h

#include "AirCraft.h"

#include <iostream>
#include <stdexcept>
#include <string>

using namespace std;

// Need Implementing
AirCraft::AirCraft() : AirCraft(0, 0, 0, 0, false) {}
AirCraft::AirCraft(float fuel, int weight, int flightNumber, int speed,
                   bool isEmergency)
    : weight(weight),
      flightNumber(flightNumber),
      speed(speed),
      isEmergency(isEmergency) {
  setFuel(fuel);
  // Creating an empty Texture and Sprite in the heap
  airplaneTexture = new sf::Texture;
  body = new sf::Sprite();

  // USED FOR TESTING, UNEEDED FOR ABSTRACT CLASS
  //  Loading the Texture from a file
  //  if (!airplaneTexture->loadFromFile("assets/PlaneSprite(100x100).png")) {
  //  throw(std::runtime_error("File failed to load"));
  // }
  // body->setTexture(*airplaneTexture);

  // body->setOrigin(sf::Vector2f(50, 50));
  // body->setPosition(sf::Vector2f(-1, -1));
}

AirCraft::~AirCraft() {
  delete airplaneTexture;
  delete body;
}

// Function that draws the AirCraft sprite on the RenderWindow
void AirCraft::draw(sf::RenderWindow* window) { window->draw(*body); }

// Function to simplify movement for the sprite
void AirCraft::move(sf::Vector2f distance) { this->body->move(distance); }

// Function to reduce fuel if told to circle (unable to land)
void AirCraft::flyCircle() {}

// setters
void AirCraft::setFuel(float fuel) {
  // check to see if fuel is between 0-100.0
  if (fuel >= 0 && fuel <= 100.0) {
    this->fuel = fuel;
  } else {
    // throwing an error for out of range value
    throw(out_of_range(
        "Value " + std::to_string(fuel) + " is outside the expected range [" +
        std::to_string(0.0) + ", " + std::to_string(100.0) + "]"));
  }
}
void AirCraft::setWeight(int weight) {
  // check to see if weight is above 0
  if (weight < 0) {
    throw(out_of_range("This value cannot be less than 0"));
  } else
    this->weight = weight;
}
void AirCraft::setFlightNumber(int flightNumber) {
  // must be greater than 0
  if (flightNumber < 0) {
    throw(out_of_range("This value cannot be less than 0"));
  } else
    this->flightNumber = flightNumber;
}
void AirCraft::setSpeed(int speed) {
  // Positive speed is forward, Negative is backwards
  this->speed = speed;
}

void AirCraft::setIsEmergency(bool isEmergency) {
  this->isEmergency = isEmergency;
}

// getters
float AirCraft::getFuel() { return fuel; }
int AirCraft::getWeight() { return weight; }
int AirCraft::getFlightNumber() { return flightNumber; }
int AirCraft::getSpeed() { return speed; }
bool AirCraft::getIsEmergency() { return isEmergency; }
sf::Sprite* AirCraft::getBody() { return body; }