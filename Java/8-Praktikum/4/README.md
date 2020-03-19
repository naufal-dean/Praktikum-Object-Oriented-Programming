Java sudah menyediakan beberapa interface untuk dapat diimplementasikan. Salah satunya adalah interface Comparable. Dengan mengimplementasikan interface Comparable, Anda dapat menggunakan library Java untuk sort, dan lain-lainnya.

Untuk mengimplemen interface Comparable, sebuah kelas harus mendefinisikan method compareTo(). Sebagai contoh, ini adalah kelas Mahasiswa yang mengimplementasikan Comparable.

```
import java.lang.Comparable;

class Mahasiswa implements Comparable<Mahasiswa> {
  private float ipk;

  public Mahasiswa(float ipk) {
    this.ipk = ipk;
  }

  public int compareTo(Mahasiswa m) {
    // compareTo mengembalikan:
    // 0 bila this sama dengan m
    // 1 bila this lebih dari m
    // -1 bila this kurang dari m
    if (this.ipk == m.ipk) {
      return 0;
    } else if (this.ipk > m.ipk) {
      return 1;
    } else {
      return -1;
    }
  }
}
```

Di soal ini, Anda diminta mengubah kelas mahasiswa di atas. Anda perlu menambahkan atribut kodeJurusan (int) dan angkatan (int). Lalu, buatlah juga method berikut:

- constructor yang menerima 3 parameter dengan urutan (int kodeJurusan, int angkatan, float ipk)
- getter untuk tiap atribut, dengan nama getKodeJurusan, getAngkatan, dan getIpk
- method compareTo(Mahasiswa m) yang membandingkan dua mahasiswa.
    - Mahasiswa A disebut kurang dari mahasiswa B bila:
        - kode jurusan mahasiswa A lebih kecil dari mahasiswa B
        - kode jurusan mahasiswa A sama dengan mahasiswa B, tapi angkatannya lebih muda (bilangannya lebih besar)
        - kode jurusan dan angkatan mahasiswa A sama dengan mahasiswa B, tapi ipk nya lebih besar
    - Mahasiswa A sama dengan mahasiswa B bila kode jurusan, angkatan, dan ipk kedua mahasiswa bernilai sama
    - Selain itu, mahasiswa A disebut lebih dari mahasiswa B

Kumpulkan Mahasiswa.java
