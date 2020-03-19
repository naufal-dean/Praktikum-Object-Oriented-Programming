Sebuah bank membutuhkan aplikasi untuk pengelolaan rekening. Pada bank tersebut terdapat 3 jenis rekening, yaitu RekeningTabungan, RekeningGiro, dan RekeningDeposito. Tugas Anda adalah mengimplementasikan kelas-kelas berikut untuk membantu pembuatan aplikasi tersebut.

1. Abstract Class Rekening
Kelas Rekening memiliki spesifikasi sebagai berikut.
-- Atribut bertipe String bernama nama yang menyimpan nama pemilik rekening tersebut.
-- Atribut bertipe double bernama saldo yang menyimpan saldo yang terdapat pada rekening tersebut.
-- Atribut bertipe double bernama sukuBunga yang menyimpan sukuBunga untuk rekening tersebut.
-- Konstruktor berparameter (String nama, double saldo, double sukuBunga). Jika saldo bernilai - negatif, set menjadi 0.
-- Method abstract setor(double), tarik(double), dan update() dengan akses public.
-- Method hitungBiaya() yang menghitung biaya yang dikenakan pada akhir setiap bulan. Biaya yang dikenakan sebesar minimal dari 10 dan 10% saldo.
-- Getter untuk ketiga atribut (format penamaan: getNamaAtribut).

2. RekeningTabungan (turunan kelas Rekening)
Kelas RekeningTabungan memiliki spesifikasi sebagai berikut.
-- Memiliki sukuBunga bulanan sebesar 0.05.
-- Konstruktor berparameter (String nama, double saldo).
-- Mengimplementasikan method setor(double) yang menambahkan saldo sebesar nilai parameter.
-- Mengimplementasikan method tarik(double) yang mengurangi saldo sebesar nilai parameter jika saldo cukup.
-- Mengimplementasikan method update() yang mengupdate nilai saldo setelah 1 bulan. Update dilakukan dengan cara menambahkan saldo dengan bunga yang didapatkan dan menguranginya dengan biaya yang dikenakan.

3. RekeningGiro (turunan kelas Rekening)
Kelas RekeningGiro memiliki spesifikasi sebagai berikut.
-- Memiliki atribut bertipe boolean bernama penalti yang menandakan apakah rekening dikenakan penalti atau tidak. Penalti dikenakan sebesar 10 pada akhir bulan jika pada bulan tersebut saldo pernah kurang dari 500.
-- Memiliki sukuBunga bulanan sebesar 0.07.
-- Setiap transaksi yang dilakukan (setor dan tarik) dikenakan biaya sebesar 0.1.
-- Memiliki konstruktor berparameter (String nama, double saldo).
-- Mengimplementasikan method setor(double) yang menambahkan saldo sebesar nilai parameter dan menguranginya sebesar biaya transaksi. Uang yang disetor pasti lebih besar dari biaya transaksi.
-- Mengimplementasikan method tarik(double) yang mengurangi saldo sebesar nilai parameter dan biaya transaksi jika saldo cukup.
-- Mengimplementasikan method update() yang mengupdate nilai saldo setelah 1 bulan. Update dilakukan dengan cara menambahkan saldo dengan bunga yang didapatkan dan menguranginya dengan biaya yang dikenakan dan penalti (jika ada). Jika saldo menjadi negatif, set saldo menjadi 0.

4. RekeningDeposito (turunan kelas Rekening)
Kelas RekeningDeposito memiliki spesifikasi sebagai berikut.
-- Atribut bertipe integer bernama bulan yang menandakan lamanya rekening telah dibuat.
-- Memiliki sukuBunga tahunan sebesar 0.15.
-- Konstruktor berparameter (String nama, double saldo).
-- Mengimplementasikan method setor(double) yang mencetak "Tidak dapat melakukan penyetoran uang untuk rekening ini." diakhiri newline.
-- Mengimplementasikan method tarik(double) yang mencetak "Tidak dapat melakukan penarikan uang sebagian untuk rekening ini." diakhiri newline.
-- Mengimplementasikan method update() yang mengupdate nilai saldo setelah 1 bulan. Update dilakukan dengan cara menambahkan saldo dengan bunga yang didapatkan (jika 1 tahun berlalu) dan menguranginya dengan biaya yang dikenakan.
-- Method tarik() yang menarik semua saldo yang terdapat pada rekening. Jika penarikan dilakukan sebelum 1 tahun akan terdapat penalti sebesar 20% dari saldo yang ditandai dengan mencetak "Anda terkena penalti sebesar <penalti>." diakhiri newline.
Perhitungan bunga dan biaya yang dikenakan pada method update() dilakukan terhadap saldo pada saat itu (belum dikenakan biaya dan bunga).

Kumpulkan Rekening.java, RekeningTabungan.java, RekeningGiro.java, dan RekeningDeposito.java dalam rekening.zip
