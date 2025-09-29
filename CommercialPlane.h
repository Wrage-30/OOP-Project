// Header file for the class CommercialPlane
// Inherits from <-Plane <-AirCraft
#ifndef COMMERCIALPLANE_H
#define COMMERCIALPLANE_H

#include "Plane.h"

using namespace std;

class CommercialPlane : public Plane {
 private:
  int passengers;

 public:
  CommercialPlane();
  CommercialPlane(float fuel, int weight, int flightNumber, int speed,
                  bool isEmergency, int wingspan, int passengers);
  ~CommercialPlane();

  void virtual flyCircle();

  // Setter
  void setPassengers(int passengers);
  // getter
  int getPassengers();
};
#endif