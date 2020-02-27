Anda sedang mengerjakan proyek sebuah bank. Ternyata, programmer sebelum Anda tidak belajar OOP dengan baik, dan tidak menggunakan Exception. Sebagai programmer berkualitas, Anda ingin membenahi program Bank. Lengkapilah program Bank dengan:

[Account.cpp](Account.cpp), [Account.hpp](Account.hpp), [Bank.hpp](Bank.hpp), [BaseException.hpp](BaseException.hpp)

- Definisikan TransactionFailedException dalam file Bank.hpp
- Definisikan AccountNotFoundException dalam file Bank.hpp
- Tambahkan exception pada method withdraw dan add dalam file Account.cpp
- Tambahkan exception pada method findAccountIdx dalam file Bank.hpp
- Tambahkan exception handling pada method transfer dalam file Bank.hpp
- Lengkapi method transfer dalam file Bank.hpp

Sebagai catatan:
- Dalam soal ini, semua exception yang dilempar berupa pointer, bukan instance
- Pada penulisan exception, "\n" menandakan karakter newline / endl

Contoh kode 1
```
Bank b;
b.getAccount(0).setNumber("10");
b.getAccount(0).add(100);
b.getAccount(1).setNumber("20");
b.getAccount(1).add(120);

b.transfer("10", "20", 50);

cout << b.getAccount(0).getBalance() << endl;
cout << b.getAccount(1).getBalance() << endl;
```

Contoh output 1
```
50
170
```

Contoh kode 2
```
Bank b;
b.getAccount(0).add(-20);
```

Contoh output 2
```
// Dilempar InvalidNumberException*\
// dengan printMessage menuliskan:
Bilangan -20 tidak valid
```

Contoh kode 3
```
Bank b;
b.getAccount(0).setNumber("10");
b.getAccount(0).add(100);
b.getAccount(1).setNumber("20");
b.getAccount(1).add(120);

b.transfer("10", "20", 150);
```

Contoh output 3
```
// dilempar TransactionFailedException*\
// dengan printMessage menuliskan:\
Transaksi gagal dengan pesan kesalahan:\
Membutuhkan 150 namun hanya tersedia 100
```

Kumpulkan Bank.zip berisikan Account.cpp dan Bank.hpp