#include "atcTower.h"

atcTower::atcTower(int maxFlights, Terminal** terminals, int terminalCount){
  this->maxFlights = maxFlights;
  this->activeFlights = new Aircraft*[maxFlights];
  this->terminals = terminals;
  this->terminalCount = terminalCount;
  this->flightCount = 0;
  this->timeStep = 0;
}
bool atcTower::addFlights(Aircraft* aircraft){
  if (flightCount < maxFlights) {
    activeFlights[flightCount] = aircraft;
    flightCount++;
    return true;
  }
  else {
    return false;
  }
}
bool atcTower::assignTerminal(Aircraft* aircraft, Terminal* terminal){

}
void atcTower::update(){
  for (int i = 0; i < flightCount; i++){
    activeFlights[i]->update();
  }
  timeStep++;
}
void atcTower::getState(){}
atcTower::~atcTower(){
  delete[] activeFlights;
}