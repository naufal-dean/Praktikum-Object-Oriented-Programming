// Nama         : Naufal Dean Anugrah
// NIM          : 13518123
// Tanggal      : 13 Februari 2020 
// Topik        : Inheritance, Polymorphism, Abstract Base Class

#include "WarungSaltedEgg.hpp"

// Masukan: Jumlah uang, nasi, telur, telur asin, dan ayam
WarungSaltedEgg::WarungSaltedEgg(int uang, int nasi, int telur, int telurAsin, int ayam) : WarungNasi(uang, telur, nasi) {
        this->telurAsin = telurAsin;
        this->ayam = ayam;
}

// Resep Nasi Ayam Salted Egg
//     1 Nasi
//     1 Telur
//     3 Telur Asin
//     1 Ayam
// Jika bahan yang dibutuhkan kurang, kembalikan false.
// Jika cukup, hitung pendapatan total. Pendapatan total dihitung dengan jumlah pesanan dikali 30000
// Setelah itu, tambahkan pendapatan total ke uang. Kembalikan true.
bool WarungSaltedEgg::masak(int pesanan) {
        if (pesanan <= getNasi() && pesanan <= getTelur() && (pesanan * 3) <= this->telurAsin && pesanan <= this->ayam) {
                setUang(getUang() + (15000 * pesanan));
                return true;
        } else {
                return false;
        }
}