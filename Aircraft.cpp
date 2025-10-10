// Implementation file for the Aircraft.h

#include "Aircraft.h"

#include <iostream>
#include <stdexcept>
#include <string>

using namespace std;

// Need Implementing
Aircraft::Aircraft() : Aircraft(0, 0, 0, 0, false) {}
Aircraft::Aircraft(float fuel, int weight, int flightNumber, int speed,
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

Aircraft::~Aircraft() {
  delete airplaneTexture;
  delete body;
}

// Function that draws the Aircraft sprite on the RenderWindow
void Aircraft::draw(sf::RenderWindow* window) { window->draw(*body); }

// Function to simplify movement for the sprite
void Aircraft::move(sf::Vector2f distance) { this->body->move(distance); }

// Function to reduce fuel if told to circle (unable to land)
void Aircraft::flyCircle() {}

// setters
void Aircraft::setFuel(float fuel) {
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
void Aircraft::setWeight(int weight) {
  // check to see if weight is above 0
  if (weight < 0) {
    throw(out_of_range("This value cannot be less than 0"));
  } else
    this->weight = weight;
}
void Aircraft::setFlightNumber(int flightNumber) {
  // must be greater than 0
  if (flightNumber < 0) {
    throw(out_of_range("This value cannot be less than 0"));
  } else
    this->flightNumber = flightNumber;
}
void Aircraft::setSpeed(int speed) {
  // Positive speed is forward, Negative is backwards
  this->speed = speed;
}

void Aircraft::setIsEmergency(bool isEmergency) {
  this->isEmergency = isEmergency;
}

// getters
float Aircraft::getFuel() { return fuel; }
int Aircraft::getWeight() { return weight; }
int Aircraft::getFlightNumber() { return flightNumber; }
int Aircraft::getSpeed() { return speed; }
bool Aircraft::getIsEmergency() { return isEmergency; }
sf::Sprite* Aircraft::getBody() { return body; }