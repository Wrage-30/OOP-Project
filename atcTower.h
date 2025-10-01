#ifndef ATCTOWER
#define ATCTOWER

#include "Aircraft.h"
#include "Terminal.h"

class atcTower {
  private:
  Aircraft** activeFlights;
  int flightCount;
  int maxFlights;
  Terminal** terminals;
  int terminalCount;
  int timeStep;
  public:
  atcTower(int maxFlights, Terminal** terminals, int terminalCount);
  ~atcTower();
  bool addFlights(Aircraft* aircraft);
  bool assignTerminal(Aircraft* aircraft, Terminal* terminal);
  void update();
  void getState();
};

#endif