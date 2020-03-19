// Nama		: Naufal Dean Anugrah
// NIM		: 13518123
// Tanggal	: 30 Januari 2020
// Topik	: Ctor, Cctor, Dtor, Const, Static, Friends, Overloading

#include "Ball.hpp"

using namespace std;

Ball::Ball() {
	this->radius = 1;
}              // Membuat Ball dengan nilai radius 1
Ball::Ball(int radius) {
	this->radius = radius;
}    // Membuat Ball dengan nilai radius r
Ball::Ball(const Ball& b) {
	this->radius = b.radius;
}
Ball::~Ball() {

}

void Ball::bounce() {
	cout << "bo";
	for (int i = 0; i < this->radius; ++i)
	{
		cout << "i";
	}
	cout << "ng" << endl;
} // Menuliskan "boii...iing" diakhiri newline, dengan huruf i sebanyak radius