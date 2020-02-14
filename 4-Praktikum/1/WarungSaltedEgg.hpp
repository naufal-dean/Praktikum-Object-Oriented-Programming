#ifndef __WARUNG_SALTEDEGG_HPP
#define __WARUNG_SALTEDEGG_HPP

#include "WarungNasi.hpp"

class WarungSaltedEgg : public WarungNasi {
    private:
        int telurAsin;
        int ayam;
    public:
        // Masukan: Jumlah uang, nasi, telur, telur asin, dan ayam
        WarungSaltedEgg(int uang, int nasi, int telur, int telurAsin, int ayam);

        // Resep Nasi Ayam Salted Egg
        //     1 Nasi
        //     1 Telur
        //     3 Telur Asin
        //     1 Ayam
        // Jika bahan yang dibutuhkan kurang, kembalikan false.
        // Jika cukup, hitung pendapatan total. Pendapatan total dihitung dengan jumlah pesanan dikali 30000
        // Setelah itu, tambahkan pendapatan total ke uang. Kembalikan true.
        bool masak(int pesanan);
};

#endif