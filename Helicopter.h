// Class Header file for Helicopter.h
// Inherits from Aircraft.h

#ifndef HELICOPTER_H
#define HELICOPTER_H

#include <SFML/Graphics.hpp>

#include "Aircraft.h"

class Helicopter : public Aircraft{
 private:
  int rotorBladeLength;
  int passengers;
 public:
  Helicopter();
  Helicopter(float fuel, int weight, int flightNumber, int speed,
             bool isEmergency, int rotorBladeLength, int passengers);
  virtual ~Helicopter();
  void virtual flyCircle();

  //Getters:
  void setRotorBladeLength(int rotorBladeLength);
  void setPassengers(int passengers);

  //Getters
  int getRotorBladeLength();
  int getPassengers(); 
};
#endif