#include "WarungNasi.hpp"
#include <iostream>
using namespace std;

WarungNasi::WarungNasi(int uang, int telur, int nasi) {
    this->uang = uang;
    this->telur = telur;
    this->nasi = nasi;
}

int WarungNasi::getUang() const {
    return this->uang;
}

int WarungNasi::getNasi() const {
    return this->nasi;
}

int WarungNasi::getTelur() const {
    return this->telur;
}

void WarungNasi::setNasi(int _nasi) {
    this->nasi = _nasi;
}

void WarungNasi::setTelur(int _telur) {
    this->telur = _telur;
}

void WarungNasi::setUang(int _uang) {
    this->uang = _uang;
}

bool WarungNasi::masak(int pesanan) {
    if (this->nasi < pesanan && this->telur < pesanan*2) {
        return false;
    } else {
        int pendapatan = pesanan * 10000;
        setUang(getUang() + pendapatan);
        return true;
    }
}