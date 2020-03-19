#ifndef __WARUNG_NASGOR_HPP
#define __WARUNG_NASGOR_HPP

#include "WarungNasi.hpp"

class WarungNasgor : public WarungNasi {
    private:
        int kecap;
    public:
        // Masukan: Jumlah uang, nasi, telur, dan kecap
        WarungNasgor(int uang, int nasi, int telur, int kecap);

        // Memasak menu Nasi Goreng
        // Resep Nasi Goreng:
        //     1 buah nasi
        //     1 buah telur
        //     1 buah kecap
        // Jika bahan yang dibutuhkan kurang, kembalikan false.
        // Jika cukup, hitung pendapatan total. Pendapatan total dihitung dengan jumlah pesanan dikali 15000
        // Setelah itu, tambahkan pendapatan total ke uang. Kembalikan true.
        bool masak(int pesanan);
};

#endif