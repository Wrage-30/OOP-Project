#ifndef HELICOPTER_H
#define HELICOPTER_H
using namespace std;
#include <string>

class Helicopter {
private:
    double bladespan;
    double fuel;
    double weight;
    int flightNumber;
    int passengers;

public:
    Helicopter(double bladespan_, double fuel_, double weight_, int passengers_);
    int generateFlightNumber();
    double getBladespan() ;
    double getFuel() ;
    double getWeight() ;
    int getFlightNumber() ;
    int getPassengers() ;
    void setFuel(double f);
    void setPassengers(int p);
    string getDetails() ;
    bool canLandOnHelipad(double maxWeight, double minFuel) ;
    void refuel(double amount);
};
#endif
