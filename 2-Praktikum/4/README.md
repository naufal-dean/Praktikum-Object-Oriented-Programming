PrioQueue merupakan sebuah struktur data yang merepresentasikan antrian dengan prioritas. Elemen dari PrioQueue merupakan kelas PQElmt yang memiliki value dan prio. PrioQueue selalu terurut dari yang terbesar.

Selain itu, dapat dilakukan penggabungan 2 PrioQueue dengan operator penjumlahan +.

Contoh: (format queue dalam bentuk [(value, prio)]

A = [(3, 3), (5, 2), (1, 1)]
B = [(1, 3), (2, 2,)]
Maka

A + B = [(1, 3), (3, 3), (2, 2), (5, 2), (1, 1)]
PrioQueue juga punya aksesor [k] untuk mengakses elemen ke k.

PQElmt.hpp, PQElmt.cpp, PrioQueue.hpp, PrioQueue.cpp

Diberikan definisi dan sebagian realisasi PQElmt dan PrioQueue, lengkapilah bagian yang masih kosong!

Upload PQElmt.cpp dan PrioQueue.cpp yang sudah dilengkapi dan di-zip menjadi PrioQueue.zip