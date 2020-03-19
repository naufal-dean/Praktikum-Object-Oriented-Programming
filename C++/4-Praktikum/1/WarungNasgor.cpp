// Nama         : Naufal Dean Anugrah
// NIM          : 13518123
// Tanggal      : 13 Februari 2020 
// Topik        : Inheritance, Polymorphism, Abstract Base Class

#include "WarungNasgor.hpp"

// Masukan: Jumlah uang, nasi, telur, dan kecap
WarungNasgor::WarungNasgor(int uang, int nasi, int telur, int kecap) : WarungNasi(uang, telur, nasi) {
        this->kecap = kecap;
}



// Memasak menu Nasi Goreng
// Resep Nasi Goreng:
//     1 buah nasi
//     1 buah telur
//     1 buah kecap
// Jika bahan yang dibutuhkan kurang, kembalikan false.
// Jika cukup, hitung pendapatan total. Pendapatan total dihitung dengan jumlah pesanan dikali 15000
// Setelah itu, tambahkan pendapatan total ke uang. Kembalikan true.
bool WarungNasgor::masak(int pesanan) {
        if (pesanan <= getNasi() && pesanan <= getTelur() && pesanan <= this->kecap) {
                setUang(getUang() + (15000 * pesanan));
                return true;
        } else {
                return false;
        }
}