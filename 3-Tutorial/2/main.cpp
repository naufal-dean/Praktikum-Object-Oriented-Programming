// Nama 	: Naufal Dean Anugrah
// NIM		: 13518123
// Tanggal	: 6 Februari 2020
// Topik 	: Inheritance

#include <iostream>
#include "Vehicle.h"
#include "Car.h"
#include "Bike.h"

using namespace std;

int main()
{
	Vehicle * v1 = new Vehicle(3, 2);
	Vehicle * v2 = new Vehicle(*v1);
	Vehicle * v3 = new Vehicle(6, 50);
	// Vehicle * v4 = new Vehicle(4, 8);
	Car * v4 = new Car(8);
	Car * v5 = new Car(*v4);
	Car * v6 = new Car(6);
	Bike *v7 = new Bike();
	v6->drive();
	v7->show();
	v7->ride();
	delete v7;
	delete v6;
	delete v5;
	delete v4;
	delete v3;
	delete v2;
	delete v1;

	return 0;
}
