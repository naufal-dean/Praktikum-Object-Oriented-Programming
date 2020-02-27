Di python, kita dapat membuat tuple, yakni gabungan dari beberapa nilai, misalnya (123, “abc”, bool). Di C++, kita juga dapat menggunakan STL pair<> untuk menggabungkan dua nilai. Tapi, kali ini Anda membutuhkan tuple untuk tiga nilai. Karena itu, buatlah sebuah kelas bernama Triplet yang dapat menampung tiga nilai berbeda.

Anda sudah membuat Triplet.hpp yang menampung tiga nilai integer, buatlah menjadi 3 tipe data berbeda

Contoh kode 1
```
Triplet<int, int, int> a(3, 2, -5);

cout << a.getFirst() << endl;
cout << a.getSecond() << endl;
cout << a.getThird() << endl;
```

Contoh output 1
```
3\
2\
-5
```

Contoh kode 2

```
Triplet<string, float, string> a(“abc”, 4.5, “def”);
Triplet<string, float, string> b(“ghi”, -1.0, “def”);
Triplet<string, float, string> c(“abc”, 4.5, “def”);

if (a == b) {
  cout << “a == b“ << endl;
}
if (a == c) {
  cout << “a == c” << endl;
}
```

Contoh output 2
```
a == c
```

Submit file Triplet.hpp