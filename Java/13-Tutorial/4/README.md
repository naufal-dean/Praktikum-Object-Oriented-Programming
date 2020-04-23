Salah satu teknik yang cukup sering dilakukan dalam pemrograman Object Oriented adalah Dependency Injection (DI). Dalam menggunakan teknik DI, dependency yang terdapat pada kelas A tidak diinstasiasikan oleh kelas A sendiri, tetapi di-inject oleh kelas lain. Untuk itu kita akan membuat sebuah kelas Injector dengan definisi sebagai berikut

```
public class Injector {
  // Menerima sebuah definisi dependencies
  // yang berupa sebuah instansiasi kelas
  // Catatan: Injector bisa menampung lebih dari 1 dependency,
  //          jadi injector bisa menginject banyak sekaligus.
  //          Jika ada 2 objek dengan kelas yang sama,
  //          inject dengan object terakhir yang di add ke daftar dependency
  void addDependencies(Object object);
  /*
    Menginjeksi dependencies yang telah dibuat ke dalam objek
    Injeksi dilakukan dengan mengacu pada dependencies yang ditambah
    pada method addDependencies.

    Setiap field di object yang diinject, bila kelasnya
    sudah ditambahkan sebagai dependency, maka akan diset sebagai
    object yang sudah di add didependency.
  */
  void inject(Object object) throws Exception {

  }
}
```

Misal terdapat sebuah kelas Card yang bergantung pada kelas GameState.

```
class Player {
  public GameState gameState; // null
  public CardList cards; // null
}
```

Lalu kita menggunakan kelas Injector untuk melakukan injeksi dependency.

```
Injector injector = new Injector();

// Asumsi gameState dan cards sudah terinisialisasi
injector.addDependencies(gameState1);
injector.addDependencies(gameState2);
injector.addDependencies(cards);

// Setelah melakukan inject, nilai gameState pada card tidak bernilai null
injector.inject(player);

player.gameState == gameState2 // true
player.cards == cards // true
```

Buatlah implementasi kelas Injector.java.
