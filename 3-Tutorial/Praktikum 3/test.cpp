#include <iostream>

using namespace std;

// --------------------------------- //
class Vehicle {
protected:
	float fuel;
public:
    Vehicle();
    void addFuel(float fuel);
    virtual void drive();
};

Vehicle::Vehicle() {
	this->fuel = 0;
}
void Vehicle::addFuel(float fuel) {
	this->fuel += fuel;
}
void Vehicle::drive() {
    cout << "Driving ..." << endl;
}

// --------------------------------- //
class MotorCycle : public Vehicle {
public:    
	MotorCycle();
	void drive();
};
MotorCycle::MotorCycle() : Vehicle() {
    //
}
void MotorCycle::drive() {
    cout << "Use helmet" << endl;
    Vehicle::drive();
}

// --------------------------------- //
class Car : public MotorCycle {
public:
    Car();
	void openDoor();
	void drive();
};

Car::Car() : MotorCycle() {
	//
}
void Car::openDoor() {
    cout << "Door opened" << endl;
}
void Car::drive() {
    cout << "Use seatbelt" << endl;
    MotorCycle::drive();
}


// MAIN //
int main(int argc, char const *argv[])
{
	MotorCycle * v = new Car();
	v->drive();

	return 0;
}