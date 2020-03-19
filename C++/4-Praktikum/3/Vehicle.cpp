#include "Vehicle.h"
#include <iostream>

using namespace std;

Vehicle::Vehicle() {
    this->wheels = 0;
    this->capacity = 0;

    cout << "ctor vehicle " << wheels << " " << capacity << endl;
}

Vehicle::Vehicle(int wheels, int capacity) {
    this->wheels = wheels;
    this->capacity = capacity;

    cout << "ctor vehicle " << wheels << " " << capacity << endl;
}

Vehicle::Vehicle(const Vehicle& vehicle) {
    this->wheels = vehicle.wheels;
    this->capacity = vehicle.capacity;

    cout << "cctor vehicle " << wheels << " " << capacity << endl;
}

Vehicle::~Vehicle() {
    cout << "dtor vehicle " << wheels << " " << capacity << endl;
}

Vehicle& Vehicle::operator=(const Vehicle& vehicle) {
    this->wheels = vehicle.wheels;
    this->capacity = vehicle.capacity;
    cout << "assign vehicle " << wheels << " " << capacity << endl;

    return *this;
}

void Vehicle::drive() {
    cout << "someone is driving this vehicle " << wheels << " " << capacity << endl;
}

void Vehicle::clean() {
    cout << "someone is cleaning this vehicle " << wheels << " " << capacity << endl;
}

void Vehicle::park() {
    cout << "someone is parking this vehicle " << wheels << " " << capacity << endl;
}