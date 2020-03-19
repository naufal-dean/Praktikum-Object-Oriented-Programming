Pada soal ini anda diminta untuk membuat sebuah kelas Goose, yaitu kelas yang merepresentasikan angsa dari sebuah game bernama “Untitled Goose Game”. Berikut adalah spesifikasi dari kelas Goose:

- Memiliki atribut name (String), dan honk (int).
- Memiliki dua buah konstruktor, yaitu Goose() dan Goose(String name, int honk). Objek Goose defaultnya memiliki name - “Horrible” dan nilai honk = 1
- Memiliki method void steal(String thing) dengan thing adalah nama benda yang dicuri objek Goose.
- Memiliki method String toString() yang akan mencetak nama dan “honk” sebanyak honk yang dimiliki objek tersebut

Berikut adalah contoh program main yang memanfaatkan kelas Goose dan outputnya

Kode
```
public static void main(String[] args) {
  Goose g = new Goose();
  Goose h = new Goose("Matilda", 3);
  System.out.println(g);
  System.out.println(h);
  g.steal("shoes");
}
```

Output
```
Horrible goose says honk
Matilda goose says honk honk honk
Horrible steals shoes
```

Catatan: dengan mengoverride method `toString()``, kelas Anda dapat langsung di-pass ke argumen `System.out.println`.

Kumpulkan file Goose.java.
