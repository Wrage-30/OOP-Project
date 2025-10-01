#include "Terminal.h"

Terminal::Terminal(){}
bool Terminal::isVacant(){
  return vacancy;
}
void Terminal::occupy(){
  vacancy = false;
}
void Terminal::vacate(){
  vacancy = true;
}
std::string Terminal::getId(){
  return id;
}