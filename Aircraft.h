#ifndef AIRCRAFT
#define AIRCRAFT

#include <iostream>
#include <string>
#include <cstdlib>

class Aircraft {
  private:
  int id;
  double weight;
  double speed;
  int fuel;
  bool emergency;
  public:
  Aircraft();
  virtual void displayState() = 0;
  virtual void update() = 0;
};

#endif