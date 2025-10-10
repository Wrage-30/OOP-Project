#include "Plane.h"

#include <stdexcept>

//Default constructor, sets all values to zero while still having texture and sprite data members in the heap
Plane::Plane() : Plane(0, 0, 0, 0, false, 0) {}

//Argumented constructor, calls 
Plane::Plane(float fuel, int weight, int flightNumber, int speed,
             bool isEmergency, int wingspan)
    : Aircraft(fuel, weight, flightNumber, speed, isEmergency),
      wingspan(wingspan) {}

Plane::~Plane() {}

void Plane::flyCircle() {}

// Setter
void Plane::setWingspan(int wingspan) {
  if (wingspan < 0) {
    throw(out_of_range("This value(wingspan) cannot be less than 0"));
  } else
    this->wingspan = wingspan;
}
// Getters
int Plane::getWingspan() { return wingspan; }