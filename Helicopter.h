#ifndef HELICOPTER
#define HELICOPTER

#include "Aircraft.h"

class Helicopter : public Aircraft {
  private:
  double bladeSpan;
  int passengers;
  public:
  Helicopter();
};

#endif