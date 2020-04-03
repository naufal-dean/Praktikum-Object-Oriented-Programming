Tuan Mario sedang kewalahan karena toko pizzanya sangat ramai. Ia butuh bantuan kalian untuk memudahkan dan mempercepat pembuatan Pizza miliknya!

Diberikan sebuah kelas [Pizza](Pizza.java). Anda diminta untuk membuat sebuah pattern Builder untuk meng-construct sebuah objek Pizza. Dengan PizzaBuilder mengconstruct memasak Pizza menjadi lebih mudah! Ketentuan PizzaBuilder adalah sebagai berikut:

- memiliki method size(String)
    - Anda boleh mengasumsikan method ini hanya akan dipanggil dengan argumen "small", "medium", atau "large".
    - Diameter pizza small = 25, medium = 35, dan large = 40
- memiliki method crust(String)
    - Anda boleh mengasumsikan method ini hanya akan dipanggil dengan argumen "Original", "Cheesy Bites", atau "Stuffed"
    - Jika Cheesy Bites, harga pizza bertambah 10
    - Jika Stuffed, harga pizza bertambah 20
- memiliki method addTopping(String)
    - Anda boleh mengasumsikan method ini hanya akan dipanggil dengan argumen "Meat Lovers", "Tuna Melt", atau "Supreme"
    - Jika Meat Lovers, pizza akan bertambah ingredient "beef" dan "mozarella"
    - Jika Tuna Melt, pizza akan bertambah ingredient "tuna", "corn", dan "mozarella"
    - Jika Supreme, pizza akan bertambah ingredient "pepperoni", "beef", "mushroom", dan "pineapple"
- memiliki method build()
    - Method akan mengembalikan pizza yang telah dibuat
    - Harga pizza adalah = 15 x diameter + 10 x banyaknya topping ingredient + harga crust

Catatan: pada 3 method pertama, Anda dapat memberikan "return this"

Contoh Kode	1
```
Pizza p = new PizzaBuilder()
           .crust("Cheesy Bites")
           .addTopping("Meat Lovers")
           .addTopping("Tuna Melt")
           .size("large")
           .build();
```
Contoh Hasil 1
```       
diameter = 40
crust = Cheesy Bites
toppingIgredients = {"beef", "mozarella", "tuna", "corn"}
price = 40 x 15 + 4 x 10 + 10 = 650
```

Contoh Kode 2
```
Pizza p = new PizzaBuilder()
           .build();
```
Contoh Hasil 2
```
diameter = 35
crust = Original
toppingIgredients = {}
```         

Contoh Kode 3
```
price = 35 x 15 = 525
Pizza p = new PizzaBuilder()
           .crust("Cheesy Bites")
           .size("large")
           .addTopping("Meat Lovers")
           .crust("Original")
           .addTopping("Meat Lovers")
           .size("small")
           .build();
```

Contoh Hasil 3
```
diameter = 25
crust = Original
toppingIgredients = {"beef", "mozarella"}
price = 25 x 15 + 2 x 10 = 395
```

Kumpulkan file PizzaBuilder.java
