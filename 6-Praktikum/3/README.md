Hojun dan Qila sedang bermain. Hojun memiliki N buah kata, dan Qila memiliki M buah kata. Baik kata-kata Hojun maupun Qila, mungkin ada kata yang terulang.

Mula-mula, Hojun akan menuliskan N kata tersebut di atas kertas. Lalu, Qila akan membacakan kata-katanya satu demi satu. Untuk tiap kata, Hojun akan mencoret kata tersebut bila ada di kertas. Jika tidak ada (atau ada, tapi sudah dicoret semua), maka Hojun akan diam saja.

Kini tugas Anda adalah membuat program yang menerima N, daftar kata Hojun, M, dan daftar kata Qila. Program akan menuliskan daftar kata yang tidak dicoret di atas kertas, dipisahkan oleh baris baru. Urutan dari kata yang dituliskan sembarang.

|Contoh Input|Contoh Output|
|------------|-------------|
|4<br>Budi<br>Budi<br>adalah<br>Budi<br>4<br>Budi<br>Bermain<br>Bola<br>Adalah|Budi<br>Budi<br>adalah|
|4<br>Saya<br>Suka<br>Pemograman<br>C++<br>3<br>Tuan<br>Putri<br>Tidur|Saya<br>Suka<br>Pemrograman<br>C++|
|2<br>Saya<br>Mengantuk<br>5<br>Saya<br>Ingin<br>Tidur<br>Karena<br>Mengantuk|

Anda diharuskan menggunakan minimal kakas dari STL yakni [Map](https://en.cppreference.com/w/cpp/container/map).

Kumpulkan main.cpp