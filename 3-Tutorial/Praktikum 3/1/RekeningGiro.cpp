// Nama 	: Naufal Dean Anugrah
// NIM		: 13518123
// Tanggal	: 6 Februari 2020
// Topik 	: Inheritance

#include <iostream>
#include "RekeningGiro.h"

using namespace std;

// Konstruktor menginisialisi saldo (parameter 1) dan suku bunga (parameter 2)
// Set suku bunga 0.0 apabila suku bunga bernilai negatif
RekeningGiro::RekeningGiro(double saldo, double sukuBunga): Rekening(saldo) {
	this->sukuBunga = (sukuBunga < 0.0) ? (0.0) : (sukuBunga);
}

// Getter, Setter
void RekeningGiro::setSukuBunga(double sukuBunga) {
	this->sukuBunga = sukuBunga;
}
double RekeningGiro::getSukuBunga() const {
	return this->sukuBunga;
}

// Member Function
// Bunga dihitung dari saldo dikali suku bunga
double RekeningGiro::hitungBunga() {
	return Rekening::getSaldo() * this->sukuBunga;
}
