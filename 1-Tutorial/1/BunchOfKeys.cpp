// Nama		: Naufal Dean Anugrah
// NIM		: 13518123
// Tanggal	: 23 Januari 2020
// Topik	: Pengenalan class

#include "BunchOfKeys.hpp"

// ctor
BunchOfKeys::BunchOfKeys() {
	this->n_keys = 0;
}

// member function
void BunchOfKeys::add() {
	this->n_keys = this->n_keys + 1;
}
void BunchOfKeys::shake() {
	if (this->n_keys > 1) {
		for (int i = 0; i < this->n_keys; ++i) {
			cout << "krincing" << endl;
		}
	} else {
		cout << "Tidak terjadi apa-apa" << endl;
	}
}
