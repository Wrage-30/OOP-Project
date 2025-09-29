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
  setFreightWeight(freightWeight);
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