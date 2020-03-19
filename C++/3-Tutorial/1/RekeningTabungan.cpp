// Nama 	: Naufal Dean Anugrah
// NIM		: 13518123
// Tanggal	: 6 Februari 2020
// Topik 	: Inheritance

#include <iostream>
#include "RekeningTabungan.h"

using namespace std;

// Konstruktor menginisialisi saldo (parameter 1) dan biaya transaksi (parameter 2)
// Set biaya transaksi 0.0 apabila biaya transaksi bernilai negatif
RekeningTabungan::RekeningTabungan(double saldo, double biayaTransaksi): Rekening(saldo) {
	this->biayaTransaksi = biayaTransaksi;
}

// Getter, Setter
void RekeningTabungan::setBiayaTransaksi(double biayaTransaksi) {
	this->biayaTransaksi = biayaTransaksi;
}
double RekeningTabungan::getBiayaTransaksi() const {
	return this->biayaTransaksi;
}

// Member Function
// Panggil fungsi simpanUang dari parent class
// Kurangkan saldo dengan biaya transaksi
void RekeningTabungan::simpanUang(double deltaSaldo) {
	deltaSaldo -= biayaTransaksi;
	Rekening::simpanUang(deltaSaldo);
}

// Panggil fungsi tarikUang dari parent class
// Kurangkan saldo dengan biaya transaksi hanya jika penarikan uang berhasil
// Saldo mungkin saja menjadi negatif apabila setelah penarikan, saldo < biaya transaksi
// Kembalikan boolean yang mengindikasikan apakah uang berhasil ditarik atau tidak
bool RekeningTabungan::tarikUang(double deltaSaldo) {
	if (Rekening::getSaldo() < deltaSaldo) {
		return false;
	} else {
		deltaSaldo += biayaTransaksi;
		Rekening::setSaldo(getSaldo() - deltaSaldo);
		return true;
	}
}
