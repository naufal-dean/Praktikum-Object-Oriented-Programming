// Nama 	: Naufal Dean Anugrah
// NIM		: 13518123
// Tanggal	: 6 Februari 2020
// Topik 	: Inheritance

#include <iostream>
#include "Rekening.h"

using namespace std;

// Konstruktor untuk menginisialisasi saldo
// Set saldo 0.0 apabila saldo bernilai negatif
Rekening::Rekening(double saldo) {
	this->saldo = (saldo < 0.0) ? (0.0) : (saldo);
}

// Getter, Setter
void Rekening::setSaldo(double saldo) {
	this->saldo = saldo;
}
double Rekening::getSaldo() const {
	return this->saldo;
}

// Member Function
// Tambahkan sejumlah nominal uang ke saldo
void Rekening::simpanUang(double deltaSaldo) {
	this->saldo += deltaSaldo;
}

// Kurangkan sejumlah nominal uang dari saldo apabila saldo mencukupi (tidak negatif setelah dikurangkan)
// Kembalikan boolean yang mengindikasikan apakah uang berhasil ditarik atau tidak
bool Rekening::tarikUang(double deltaSaldo) {
	if (this->saldo < deltaSaldo) {
		return false;
	} else {
		this->saldo -= deltaSaldo;
		return true;
	}
}
