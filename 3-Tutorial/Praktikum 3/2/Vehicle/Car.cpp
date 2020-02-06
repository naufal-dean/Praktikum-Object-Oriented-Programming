#include "Car.h"
#include <iostream>

using namespace std;

Car::Car(int capacity) : Vehicle(4, capacity) {

    cout << "ctor car " << wheels << " " << capacity << endl;
}

Car::Car(const Car& car) : Vehicle::Vehicle(car) {
    this->wheels = car.wheels;
    this->capacity = car.capacity;

    cout << "cctor car " << wheels << " " << capacity << endl;
}

Car::~Car() {
    cout << "dtor car " << wheels << " " << capacity << endl;
}

Car& Car::operator=(const Car& car) {
    this->wheels = car.wheels;
    this->capacity = car.capacity;

    cout << "assign car " << wheels << " " << capacity << endl;
}

void Car::drive() {
    cout << "someone is driving this car " << wheels << " " << capacity << endl;
}
