#ifndef HELIPAD
#define HELIPAD

#include "Terminal.h"

class Helipad : public Terminal {
  private:
  double x;
  double y;
  double radius;
  public:
  Helipad();
};

#endif