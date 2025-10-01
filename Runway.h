#ifndef RUNWAY
#define RUNWAY

#include "Terminal.h"

class Runway : public Terminal {
  private:
  double x1;
  double y1;
  double x2;
  double y2;
  double width;
  public:
  Runway();
};

#endif