#ifndef PLANE_H
#define PLANE_H

#include <SFML/Graphics.hpp>

#include "AirCraft.h"

using namespace std;

class Plane : public AirCraft {
 protected:
  int wingspan;  // Total length of planes wings
 public:
  Plane();
  Plane(float fuel, int weight, int flightNumber, int speed, bool isEmergency,
        int wingspan);
  virtual ~Plane();
  // Continuing the abstact class design into this class
  void virtual flyCircle() = 0;

  // Setter
  void setWingspan(int wingspan);
  // Getter
  int getWingspan();
};
#endif
