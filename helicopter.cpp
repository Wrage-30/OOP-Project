#include "helicopter.h"
#include <cstdlib> // Include for std::rand and std::srand
#include <ctime>
using namespace std;

Helicopter::Helicopter(double bladespan_, double fuel_, double weight_, int passengers_)
    :bladespan(bladespan_), fuel(fuel_), weight(weight_), passengers(passengers_) {
    flightNumber = generateFlightNumber(); // Generate a random flight number when Helicopter is created
}

int Helicopter::generateFlightNumber() { // Generates a random flight number between 1000 and 9999
    srand(time(0)); // Seed random number generator with current time
    return 1000 + (rand() % 9000); // Return random number in range 1000-9999
}

double Helicopter::getBladespan() 
 { return bladespan; }
double Helicopter::getFuel() 
 { return fuel; }
double Helicopter::getWeight() 
 { return weight; }
int Helicopter::getFlightNumber()
  { return flightNumber; }
int Helicopter::getPassengers() 
 { return passengers; }
void Helicopter::setFuel(double f)
 { fuel = f; }
void Helicopter::setPassengers(int p)
 { passengers = p; }

string Helicopter::getDetails()  {
    return "Flight " + to_string(flightNumber) + //to_string converts numbers to strings(text)
           " | Bladespan: " + to_string(bladespan) + "m" +
           " | Fuel: " + to_string(fuel) + "L" +
           " | Weight: " + to_string(weight) + "kg" +
           " | Passengers: " + to_string(passengers);
}

bool Helicopter::canLandOnHelipad(double maxWeight, double minFuel)  { // Increase current fuel amount by specified refuel amount
    return weight <= maxWeight && fuel >= minFuel;
}

void Helicopter::refuel(double amount) // Increase current fuel amount by specified refuel amount
 { fuel += amount; }
