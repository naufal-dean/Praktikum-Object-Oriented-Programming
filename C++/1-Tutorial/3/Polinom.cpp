// Nama     : Naufal Dean Anugrah
// NIM      : 13518123
// Tanggal  : 23 Januari 2020
// Topik    : Pengenalan class

#include <iostream>
#include "Polinom.hpp"

using namespace std;

// ctor, cctor, dtor, op=
// untuk konstruktor, inisialisasi seluruh nilai koefisien dengan 0.
Polinom::Polinom() : Polinom(0) {}
// ctor Polinom dengan orde = 0
Polinom::Polinom(int n) {
// ctor Polinom dengan orde = n (sesuai parameter)
    this->derajat = n;
    for (int i = 0; i <= n; i++) {
      this->koef[i] = 0;
    }
}
Polinom::Polinom(const Polinom& Pol) {
    this->derajat = Pol.derajat;
    for (int i = 0; i <= this->derajat; ++i) {
        this->koef[i] = Pol.koef[i];
    }
}
Polinom::~Polinom() {

}
Polinom& Polinom::operator=(const Polinom& Pol) {
    this->derajat = Pol.derajat;
    for (int i = 0; i <= this->derajat; ++i) {
        this->koef[i] = Pol.koef[i];
    }
    return *this;
}

// getter, setter
int Polinom::getKoefAt(int idx) const {
    return this->koef[idx];
}
int Polinom::getDerajat() const {
    return this->derajat;
}
void Polinom::setKoefAt(int idx, int val) {
    this->koef[idx] = val;
}
void Polinom::setDerajat(int der) {
    this->derajat = der;
}

// operator overloading
// Untuk setiap operator, **tidak perlu mengubah nilai derajat tertinggi**
// Orde Polinom hasil operasi adalah MAX(orde Polinom 1, orde Polinom 2)
Polinom operator+(const Polinom& P1, const Polinom& P2) {
// Penjumlahan 2 buah Polinom.
    // Kamus lokal
    Polinom P(max(P1.derajat, P2.derajat));
    // Algoritma
    for (int i = 0; i <= min(P1.derajat, P2.derajat); ++i) {
        P.koef[i] = P1.koef[i] + P2.koef[i];
    }
    if (P1.derajat > P2.derajat) {
      for (int i = P2.derajat + 1; i <= P1.derajat; i++)
        P.koef[i] = P1.koef[i];
    } else if (P1.derajat < P2.derajat) {
      for (int i = P1.derajat + 1; i <= P2.derajat; i++)
        P.koef[i] = P2.koef[i];
    }
    return P;
}
Polinom operator-(const Polinom& P1, const Polinom& P2) {
// Pengurangan 2 buah Polinom.
    // Kamus lokal
    Polinom P(max(P1.derajat, P2.derajat));
    // Algoritma
    for (int i = 0; i <= min(P1.derajat, P2.derajat); ++i) {
        P.koef[i] = P1.koef[i] - P2.koef[i];
    }
    if (P1.derajat > P2.derajat) {
      for (int i = P2.derajat + 1; i <= P1.derajat; i++)
        P.koef[i] = P1.koef[i];
    } else if (P1.derajat < P2.derajat) {
      for (int i = P1.derajat + 1; i <= P2.derajat; i++)
        P.koef[i] = -P2.koef[i];
    }
    return P;
}
Polinom operator*(const Polinom& P1, const int K) {
// Perkalian Polinom dengan konstanta
    // Kamus lokal
    Polinom P(P1.derajat);
    // Algoritma
    for (int i = 0; i <= P1.derajat; ++i) {
        P.koef[i] = P1.koef[i] * K;
    }
    return P;
}
Polinom operator*(const int K, const Polinom& P1) {
// Perkalian Polinom dengan konstanta (sifat komutatif)
    // Kamus lokal
    Polinom P(P1.derajat);
    // Algoritma
    for (int i = 0; i <= P1.derajat; ++i) {
        P.koef[i] = P1.koef[i] * K;
    }
    return P;
}
Polinom operator/(const Polinom& P1, const int K) {
// Pembagian bilangan bulat. Tidak perlu menangani apabila kasus pembagi = 0.
    // Kamus lokal
    Polinom P(P1.derajat);
    // Algoritma
    for (int i = 0; i <= P1.derajat; ++i) {
        P.koef[i] = P1.koef[i] / K;
    }
    return P;
}

// member function
// Melakukan pembacaan koefisien sejumlah derajat Polinom, dimulai dari x^0 (konstanta)
void Polinom::input() {
    for (int i = 0; i <= this->derajat; ++i) {
        cin >> this->koef[i];
    }
}

// Mencetak seluruh koefisien polinom. Untuk setiap koefisien akhiri dengan end-of-line
// Cetaklah apa adanya dari koefisien ke-0 hingga derajat tertinggi (termasuk apabila koefisien = 0)
void Polinom::printKoef() {
    for (int i = 0; i <= this->derajat; ++i) {
        cout << this->koef[i] << endl;
    }
}

// Menghitung hasil substitusi x dengan sebuah bilangan ke dalam polinom
int Polinom::substitute(int x) {
    // Kamus lokal
    int sum = this->getKoefAt(this->derajat);
    // Algoritma
    for (int i = this->derajat - 1; i >= 0; i--) {
        sum = sum * x + this->getKoefAt(i);
    }
    return sum;
}

// Melakukan aksi derivasi terhadap Polinom.
// Lakukan pengurangan pada derajat tertinggi Polinom.
// Apabila derajat tertinggi = 0, hasil derivasi = 0 (dengan derajat tertinggi = 0)
Polinom Polinom::derive() {
  int degree = (this->derajat) ? (this->derajat - 1) : 0;
  Polinom POut(degree);
  for (int i = this->derajat - 1; i >= 0; i--) {
    POut.setKoefAt(i, (i + 1) * this->getKoefAt(i + 1));
  }
  return POut;
}

// ** METHOD BONUS (TC 12,13,14) ** (Tidak wajib dikerjakan)
// Mencetak polinom dengan format: A+Bx^1+Cx^2+Dx^3...dst (diakhiri dengan end-of-line)
// Apabila suatu koefisien bernilai < 0, gunakan tanda "-" untuk menggantikan tanda "+"
// Apabila suatu koefisien bernilai 0, lewati koefisien tersebut dan lanjutkan ke koefisien selanjutnya
// Jika seluruh koefisien bernilai 0, keluarkan "0"
void printElmt(int i, bool printed, const Polinom& P) {
  // Prekondisi: P.getKoefAt(i) != 0
  // Sign
  if (P.getKoefAt(i) > 0 && printed)
    cout << "+";
  if (P.getKoefAt(i) < 0)
    cout << "-";
  // Coefficient and variable
  if (i == 0) {
    cout << abs(P.getKoefAt(i));
  } else { // i > 0
    if (abs(P.getKoefAt(i)) != 1)
      cout << abs(P.getKoefAt(i));
    cout << "x^" << i;
  }
}

void Polinom::print() {
  bool printed = false;
  for (int i = 0; i <= getDerajat(); i++) {
    if (getKoefAt(i) != 0) {
      printElmt(i, printed, *this);
      printed = true;
    }
  }
  if (!printed) cout << "0";
  cout << endl;
}
