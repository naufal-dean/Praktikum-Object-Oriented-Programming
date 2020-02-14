// Nama         : Naufal Dean Anugrah
// NIM          : 13518123
// Tanggal      : 13 Februari 2020 
// Topik        : Inheritance, Polymorphism, Abstract Base Class

#include "C.hpp"

C::C() : B(), A() {}

void C::sing() {
	B::sing();
	A::sing();
}
