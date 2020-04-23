Karena ini praktikum terakhir, kamu akan mencoba belajar membuat soal praktikum! Di soal praktikum ini, mahasiswa akan membuat kelas yang:

bernama Laptop
hanya boleh memiliki 1 method: Integer getRamSize()
hanya boleh memiliki 1 field: String serialNumber
Lengkapilah kelas LaptopTest yang memeriksa apakah kelas yang diberikan sudah memenuhi syarat di atas!

Contoh Implementasi Laptop dan Contoh Output class Laptop
```
public class Laptop {
    private String serialNumber = "abc";
    private boolean debug = true;

    public Laptop() {
        //
    }
    public Integer getRamSize() {
        //
    }
    public Integer getDebug() {
        //
    }
}
```
```
// testFields:
Banyaknya field hanya boleh 1
// testMethods:
Banyaknya method hanya boleh 1
```
```
public class Laptop {
    private Integer serial_number = "abc";

    public Laptop() {
        //
    }
    public String get_ram_size() {
        //
    }
}
```
```
// testFields:
Nama field harus serialNumber
Tipe field harus String
// testMethods:
Nama method harus getRamSize
Tipe return method harus Integer
```

Hint: jangan lupa (1) perbedaan getMethods dan getDeclaredMethods, dan (2) semua kelas merupakan turunan dari kelas Object.

Kumpulkan LaptopTest.java
