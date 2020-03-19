Diberikan kelas [Animal](Animal.java), buatlah kelas turunan Cow dan Human.

Kelas Cow memiliki constructor yang tidak menerima argumen. Jumlah kakinya (legs) adalah 4. Bila ia makan "grass", maka ia tidak lapar lagi (hungry menjadi false). Bila ia berlari, ia akan memanggil Animal.run, lalu menuliskan "Cow is running" ke layar, diikuti newline.

Kelas Human memiliki constructor yang tidak menerima argumen. Jumlah kakinya (legs) adalah 2. Ia akan menjadi kenyang bila makan apapun, kecuali "teman", .... karena makan teman tidak akan pernah buat puas. Bila ia berlari, ia tidak akan memanggil Animal.run, namun menuliskan "Human is running" ke layar, diikuti newline.

Penting: gunakan method .equals() pada String untuk memeriksa apakah dua buah string sama atau tidak. Contoh:

```
String a = "kalimat";
String b = "kalimat";

System.out.println(a == b);  // "false"
System.out.println(a.equals(b));  // "true"
```

Kumpulkan file Cow.java dan Human.java dalam Animal.zip.
