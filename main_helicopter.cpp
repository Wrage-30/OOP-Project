#include <iostream>
#include "helicopter.h"
using namespace std;

int main() {
    Helicopter h1(14.2, 60.0, 8000.0, 6);
    cout << h1.getDetails() << endl;
    if (h1.canLandOnHelipad(9000.0, 10.0)) {
        cout << "Eligible to land on helipad H1." << endl;
    } else {
        cout << "Not eligible for this helipad." << endl;
    }
    h1.refuel(20.0);
    cout << "After refueling: " << h1.getDetails() << endl;
    return 0;
}
