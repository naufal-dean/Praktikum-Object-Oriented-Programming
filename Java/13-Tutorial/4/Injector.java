import java.lang.reflect.*;
import java.util.*;

public class Injector {
  private HashMap<Class, Object> map = new HashMap<>();

  // Menerima sebuah definisi dependencies
  // yang berupa sebuah instansiasi kelas
  // Catatan: Injector bisa menampung lebih dari 1 dependency,
  //          jadi injector bisa menginject banyak sekaligus.
  //          Jika ada 2 objek dengan kelas yang sama,
  //          inject dengan object terakhir yang di add ke daftar dependency
  void addDependencies(Object object) {
      this.map.put(object.getClass(), object);
  }
  /*
    Menginjeksi dependencies yang telah dibuat ke dalam objek
    Injeksi dilakukan dengan mengacu pada dependencies yang ditambah
    pada method addDependencies.

    Setiap field di object yang diinject, bila kelasnya
    sudah ditambahkan sebagai dependency, maka akan diset sebagai
    object yang sudah di add didependency.
  */
  void inject(Object object) throws Exception {
      Field[] fields = object.getClass().getDeclaredFields();
      for (Field field : fields) {
          try {
              field.setAccessible(true);
              if (this.map.containsKey(field.getType())) {
                  Class<?> ft = field.getType();
                  field.set(object, ft.cast(this.map.get(ft)));
              }
          } catch (Exception e) {
              // pass
          }
      }
  }
}
