#ifndef AIRPLANE
#define AIRPLANE

#include "Aircraft.h"

class Airplane : public Aircraft {
  private:
  double wingSpan;
  public:
  Airplane();
};

#endif