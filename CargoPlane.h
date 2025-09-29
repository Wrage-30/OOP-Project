#ifndef CARGOPLANE_H
#define CARGOPLANE_H

#include <string>

#include "Plane.h"

using namespace std;

class CargoPlane : public Plane {
 private:
  string freightType;
  int freightWeight;

 public:
  CargoPlane();
  CargoPlane(float fuel, int weight, int flightNumber, int speed,
             bool isEmergency, int wingspan, string freightType,
             int freightWeight);
  ~CargoPlane();

  // Virtual function to handle different fuel consumption for different
  // AirCraft
  void virtual flyCircle();

  // Setters
  void setFreightType(string freightType);
  void setFreightWeight(int freightWeight);

  // Getter
  string getFreightType();
  int getFreightWeight();
};

#endif