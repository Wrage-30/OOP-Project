#ifndef TERMINAL
#define TERMINAL

#include <iostream>
#include <string>
#include <cstdlib>

class Terminal {
  private:
  std::string id;
  bool vacancy;
  public:
  Terminal();
  virtual void displayInfo() = 0;
  std::string getId();
  bool isVacant();
  void occupy();
  void vacate();
};

#endif