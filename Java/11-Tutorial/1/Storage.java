// Nama     : Naufal Dean Anugrah
// NIM      : 13518123
// Tanggal  : 9 April 2020
// Topik    : Exception

import java.util.LinkedHashMap;

public class Storage {

  private LinkedHashMap<String, Integer> storage;
  private int capacity;

  public Storage(int capacity) {
    this.storage = new LinkedHashMap<String, Integer>();
    this.capacity = capacity;
  }

  public int getQuantity() {
    // Mengembalikan total semua quantity dalam storage
    int total = 0;
    for (int n : storage.values()) {
      total += n;
    }
    return total;
  }

  public void addContent(final String product, int quantity) throws Exception{

    // Mengecek apakah nilai quantity valid (quantity > 0)
    // Apabila tidak valid, lakukan throw InvalidQuantityException
    if (quantity <= 0)
      throw new InvalidQuantityException(quantity);

    // Mengecek apakah masih terdapat ruang pada storage
    // (jika content ditambahkan, total semua quantity dalam storage <= capacity)
    // Apabila tidak cukup ruang, lakukan throw InsufficientStorageException
    if (quantity + this.getQuantity() > this.capacity)
      throw new InsufficientStorageException(product, quantity);

    // Memasukkan product ke dalam storage
    int oldQuantity = 0;
    if (storage.get(product) != null) {
      oldQuantity = storage.get(product);
    }
    storage.put(product, oldQuantity + quantity);

  }

  public void pullContent(String product, int quantity) throws Exception {

    // Mengecek apakah nilai quantity valid (quantity > 0)
    // Apabila tidak valid, lakukan throw InvalidQuantityException
    if (quantity <= 0)
      throw new InvalidQuantityException(quantity);

    // Mengecek apakah ada product pada storage (di dalam map terdapat entry dengan key = product)
    // Apabila tidak ada, lakukan throw NonExistProductException
    if (!this.storage.containsKey(product))
      throw new NonExistProductException(product);


    // Mengecek apakah jumlah product yang akan diambil dari storage cukup
    // Apabila tidak cukup, lakukan throw InsufficientProductException
    if (this.storage.get(product) - quantity < 0)
      throw new InsufficientProductException(product, this.storage.get(product), quantity);

    // Mengeluarkan product dari storage
    int oldQuantity = storage.get(product);
    storage.put(product, oldQuantity - quantity);

  }

  public void printContent() {
    storage.forEach((key, value) -> System.out.println(key + " " +value));
  }

}
