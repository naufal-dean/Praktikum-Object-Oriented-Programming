// Nama         : Naufal Dean Anugrah
// NIM          : 13518123
// Tanggal      : 13 Februari 2020 
// Topik        : Inheritance, Polymorphism, Abstract Base Class

#include "Bike.h"
#include "Car.h"
#include "Vehicle.h"

int main() {
	Car * v1 = new Car(4);
	Vehicle * v2 = new Car(10);
	Bike * v3 = new Bike();
	Vehicle * v4 = new Vehicle(*v3);
	delete v3;
	v2->drive();
	v4->clean();
	v1->drive();
	v4->park();
	delete v2;
	delete v4;
	delete v1;

	return 0;
}
