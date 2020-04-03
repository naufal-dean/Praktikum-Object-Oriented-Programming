Di game Yu Gi Oh!, ada sebuah jenis kartu Monster. Kartu ini menggambarkan karakter yang dapat menyerang lawan. Berikut kelas [Monster](Monster.java).

Kelas ini memiliki responsibility yakni untuk merepresentasikan kartu yang ada. Padahal, kartu monster dapat di-summon ke arena. Pada saat di arena, monster dapat dalam keadaan tertutup atau terbuka. Selain itu, kartu dapat berada pada posisi menyerang atau bertahan. Ketika sudah di-summon, monster memiliki interface lain lagi, yakni:

```
// ISummoned.java
interface ISummoned {
  // mengubah keadaan kartu dari tertutup jadi terbuka dan mengembalikan true
  // bila kartu sudah terbuka, tidak lakukan apa-apa dan kembalikan false
  boolean flip();

  // mengubah posisi karakter dari menyerang jadi bertahan, atau sebaliknya
  void rotate();

  // bila dalam posisi menyerang, mengembalikan attack.
  // bila dalam posisi bertahan, mengembalikan defense
  int getPositionValue();

  // menggambar kartu ke layar
  void render();
}
```

Untuk tidak merusak Single Responsibility Principle, Anda ingin membuat kelas adapter yang menyambungkan interface Summoned ke Monster. Buatlah kelas SummonedMonster yang:

- Memiliki konstruktor yang menerima argumen berturut-turut:
    - Sebuah objek monster yang disummon
    - boolean yang menandakan apakah monster disummon dalam keadaan terbuka
    - boolean yang menandakan apakah monster disummon dalam posisi menyerang
- Mencatat posisi monster di arena sekarang (menyerang atau bertahan)
- Mencatat keadaan kartu di arena sekarang
- Mengimplemen interface ISummoned
    - Method render akan menuliskan "Monster {{name}} dalam keadaan {{tertutup/terbuka}} dengan posisi {{menyerang/bertahan}}" ke layar, diikuti baris baru.

Kumpulkan SummonedMonster.java
