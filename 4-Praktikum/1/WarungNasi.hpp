#ifndef __WARUNG_NASI_HPP
#define __WARUNG_NASI_HPP

class WarungNasi {
    private:
        int nasi;   // Jumlah nasi
        int telur;  // Jumlah telur
        int uang;   // Jumlah uang
    public:
        // Masukan: Jumlah uang, nasi, dan telur
        WarungNasi(int uang, int nasi, int telur);

        // Getter
        int getUang() const;
        int getTelur() const;
        int getNasi() const;

        // Setter
        void setUang(int _uang);
        void setTelur(int _telur);
        void setNasi(int _nasi);

        // Memasak menu Nasi Telur
        // Resep Nasi Telur:
        //    1 buah nasi
        //    2 buah telur
        // Jika bahan yang dibutuhkan kurang, kembalikan false.
        // Jika cukup, hitung pendapatan total. Pendapatan total dihitung dengan jumlah pesanan dikali 10000
        // Setelah itu, tambahkan pendapatan total ke uang. Kembalikan true.
        bool masak(int pesanan);
};

#endif