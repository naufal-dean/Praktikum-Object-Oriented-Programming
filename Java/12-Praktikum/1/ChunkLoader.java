// Nama   : Naufal Dean Anugrah
// NIM    : 13518123
// Tanggal: 16 April 2020
// Topik  : Multithreading

import java.util.*;

public class ChunkLoader implements Runnable {
    // ... Anda boleh menambahkan atribut
    private Chunk chunk;
    private String chunkDataFilename;

    public ChunkLoader(Chunk chunk, String chunkDataFilename) {
        // ... Isilah constructor sesuai kebutuhan
        this.chunk = chunk;
        this.chunkDataFilename = chunkDataFilename;
    }

    @Override
    public void run() {
        // Membaca file dengan nama chunkDataFilename
        // Gunakan class CSVReader.
        // Contoh file chunkDataFilename:
        // x,y
        // 1,18
        // 10,8
        // 6,12
        try {
          CSVReader reader = new CSVReader(this.chunkDataFilename, ",");
          reader.setSkipHeader(true);
          List<String[]> rows = reader.read();
          // Untuk setiap x dan y, tambahkan tree ke Chunk
          // Jika ada IOException pada saat membaca reader, catch Exception
          // tidak ada tree yang ditambahkan pada Chunk (tidak dithrow lagi)
          for (String[] row : rows) {
            this.chunk.addTree(new Position(Integer.valueOf(row[0]), Integer.valueOf(row[1])));
          }
        } catch(Exception e) {
          // pass
        }
    }
}
