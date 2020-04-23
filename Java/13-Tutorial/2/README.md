Pada soal ini, kita akan mencoba mendapatkan data-data yang dimiliki asisten OOP IF. Setiap asisten pasti memiliki data gaji yang didapatkan dan juga daftar mahasiswa yang direkomendasikan untuk menjadi asisten Labpro selanjutnya. Berikut adalah garis besar kelas asisten yang dimaksud.

```
import java.util.*;

class Assistant {
  private int salary;
  private List recommendations;

  Assistant(int salary) {
    this.salary = salary;
    recommendations = new ArrayList();
  }

  private void addPersonToRecommendations(String name) {
    this.recommendations.add(name);
  }
}
```

Sebagai detektif kita ingin melihat berapa gaji tiap asisten dan juga menambahkan nama kita ke dalam daftar rekomendasi asisten Labpro tahun depan. Sayangnya atribut salary dan method untuk menambahkan nama kita bersifat private di kelas Assistant, sehingga kita harus menggunakan reflection untuk mengaksesnya.

Buatlah kelas AssistantDecoder yang memiliki interface sebagai berikut

```
import java.lang.reflect.*;

public class AssistantDecoder {

  AssistantDecoder(Assistant assistant) {

  }

  public void addPersonToRecommendations(String name) throws Exception {

  }

  public int getSalary() throws Exception {

  }
}
```

Hint: perhatikan kalau Field/Method private, bagaimana cara mengaksesnya? (baca slide)

Kumpulkan AssistantDecoder.java
