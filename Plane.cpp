#include "Plane.h"

#include <stdexcept>

Plane::Plane() : Plane(0, 0, 0, 0, false, 0) {}

Plane::Plane(float fuel, int weight, int flightNumber, int speed,
             bool isEmergency, int wingspan)
    : Aircraft(fuel, weight, flightNumber, speed, isEmergency),
      wingspan(wingspan) {}

Plane::~Plane() {}

void Plane::flyCircle() {}

// Setter
void Plane::setWingspan(int wingspan) {
  if (wingspan < 0) {
    throw(out_of_range("This value cannot be less than 0"));
  } else
    this->wingspan = wingspan;
}
// Getters
int Plane::getWingspan() { return wingspan; }