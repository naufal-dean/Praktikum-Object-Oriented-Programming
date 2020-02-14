Berikut adalah implementasi dari kelas Vehicle, Car, dan Bike. Kelas-kelas tersebut merepresentasikan kendaraan yang mempunyai turunan mobil dan motor. Atribut dan method dari kelas-kelas tersebut dapat dilihat pada kode implementasi tersebut, di mana setiap method akan menghasilkan keluaran khusus jika dipanggil.

Berikut adalah header untuk kelas Vehicle, Car, dan Bike.

| Contoh Main | Contoh Output |
| ------ | ------ |
|<pre>int main() {<br>  Bike v;`<br>  v.clean();<br>  v.park();<br>  return 0;<br>}</pre>|ctor vehicle 2 2<br>ctor bike 2 2<br>someone is cleaning this bike 2 2<br>someone is parking this bike 2 2<br>dtor bike 2 2<br>dtor vehicle 2 2|

Unggahlah file main.cpp yang berisi main program, untuk menghasilkan keluaran sebagai berikut:
```
ctor vehicle 4 4
ctor car 4 4
ctor vehicle 4 10
ctor car 4 10
ctor vehicle 2 2
ctor bike 2 2
cctor vehicle 2 2
dtor bike 2 2
dtor vehicle 2 2
someone is driving this vehicle 4 10
someone is cleaning this vehicle 2 2
someone is driving this car 4 4
someone is parking this vehicle 2 2
dtor car 4 10
dtor vehicle 4 10
dtor vehicle 2 2
dtor car 4 4
dtor vehicle 4 4
```