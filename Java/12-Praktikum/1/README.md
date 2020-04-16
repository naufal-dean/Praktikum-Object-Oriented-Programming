Multi-threading umum digunakan dalam game, seperti me-load resource. Misalnya, pada game open world, dunia permainan sangatlah luas. Jika game me-load seluruh dunia game, RAM akan habis digunakan untuk menyimpan seluruh dunia!

Untuk itu, dunia game dibagi menjadi beberapa chunk. Tiap chunk disimpan dalam file, dan hanya diload saat pemain ada di dekat chunk itu. Ada banyak yang disimpan oleh chunk, misalnya daftar bangunan, daftar pohon, dan lain-lain.

Tapi, membaca file jauh lebih lambat daripada membaca memori di RAM. Terdapat bottleneck dalam membaca filesystem OS. Untuk itu, lebih baik bila chunk di-load dalam thread.

Kelas Chunk, CSVReader, dan Position sudah dibuat. Anda diminta untuk melengkapi kelas ChunkLoader yang mengimplementasikan Runnable. Nantinya, program Main akan seperti ini:

```
import java.util.ArrayList;

public class Main {
   public static void main(String[] args) {
       int nChunk = 10;
       ArrayList<Chunk> chunks = new ArrayList<Chunk>();
       for (int i = 0; i < nChunk; i++) {
           chunks.add(new Chunk());
       }
       // Kode ini akan cepat ketika dijalankan,
       // tapi akan menjadi lebih lambat bila
       // - file sangat besar
       // - chunk sangat banyak
       // Selain itu, program akan hang sampai
       // chunk selesai diload jika tidak menggunakan thread
       for (int i = 0; i < nChunk; i++) {
           ChunkLoader loader = new ChunkLoader(chunks.get(i), "chunk-1.txt");
           Thread t = new Thread(loader);
           t.start();
       }
       System.out.println("done");
   }
}
```

Kumpulkan ChunkLoader.java.
