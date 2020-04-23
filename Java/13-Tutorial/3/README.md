JSON (JavaScript Object Notation) adalah format penulisan objek javascript yang sering digunakan untuk mengubah objek menjadi string, atau sebaliknya. Pada soal ini, Anda diminta membuat JSONWriter yang menuliskan kelas menjadi format JSON. Untuk itu, gunakan anotasi [JSONField.java](JSONField.java).

Lengkapilah kelas [JSONWriter](JSONWriter) berikut. Contoh penggunaan JSONWriter akan seperti ini:

```
class Person {
    @JSONField
    private String name;

    @JSONField
    private String address;

    private String gender;

    public Person(String name, String address, String gender) {
        this.name = name;
        this.address = address;
        this.gender = gender;
    }

    public static void main(String[] args) {
        Person p1 = new Person("Hojun", "Cisitu", "Male");
        Person p2 = new Person("Qila", "Tubis", "Male");
        System.out.println(new JSONWriter(p1).toString());
        System.out.println(new JSONWriter(p2).toString());
        // menuliskan
        // {"address":"Cisitu","name":"Hojun"}
        // {"address":"Tubis","name":"Qila"}
        // perhatikan kalau:
        // - gender tidak dituliskan, karena tidak ada anotasi @JSONField
        // - kedua field private, tapi bisa diakses
        // asumsikan semua field merupakan string
    }
}
```

Kumpulkan JSONWriter.java yang sudah dilengkapi
