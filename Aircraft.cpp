#include "Aircraft.h"

Aircraft::Aircraft(){
  srand(time(0));
  id = rand()%10000;
  fuel = (rand()%50) + 50;
}
void Aircraft::displayState(){}
void Aircraft::update(){}