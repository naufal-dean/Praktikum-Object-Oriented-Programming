#include "Bike.h"
#include <iostream>

using namespace std;

Bike::Bike() : Vehicle(2, 2) {
    cout << "ctor bike " << wheels << " " << capacity << endl;
}

Bike::Bike(const Bike& bike) : Vehicle::Vehicle(bike) {
    this->wheels = bike.wheels;
    this->capacity = bike.capacity;

    cout << "cctor bike " << wheels << " " << capacity << endl;
}

Bike::~Bike() {
    cout << "dtor bike " << wheels << " " << capacity << endl;
}

Bike& Bike::operator=(const Bike& bike) {
    this->wheels = bike.wheels;
    this->capacity = bike.capacity;
    cout << "assign bike " << wheels << " " << capacity << endl;

    return *this;
}

void Bike::ride() {
    cout << "someone is riding this bike " << wheels << " " << capacity << endl;
}

void Bike::clean() {
    cout << "someone is cleaning this bike " << wheels << " " << capacity << endl;
}

void Bike::park() {
    cout << "someone is parking this bike " << wheels << " " << capacity << endl;
}
