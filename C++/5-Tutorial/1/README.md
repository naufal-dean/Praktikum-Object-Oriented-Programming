Diberikan sebuah file deklarasi sekaligus definisi [Vector2](Vector2.hpp), yakni sebuah kelas yang merepresentasikan vektor, sama seperti vektor pada fisika atau matematika ( bedakan dengan STL vector C++, yang sebenarnya adalah array dinamis).

Tugas anda adalah mengubah kelas ini menjadi generic, yakni:
- mampu menerima tipe data apa saja
- mampu menerima panjang vector berapa saja

Contoh program utama:

```
int main() {
    Vector<int, 4> v1, v2;

    cout << "Masukkan vektor 4 elemen: ";
    cin >> v1;

    v2[0] = -1;
    v2[1] = -2;A
    v2[2] = -3;
    v2[3] = -4;

    cout << v1 << " + " << v2 << " = " << v1 + v2 << endl;
    cout << v1 << " - " << v2 << " = " << v1 - v2 << endl;

    return 0;
}
```

Kumpulkan Vector.hpp
