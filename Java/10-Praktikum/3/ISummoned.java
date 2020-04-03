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
