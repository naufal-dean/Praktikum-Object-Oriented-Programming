import java.util.concurrent.ThreadLocalRandom;

public class Website {
    private String url;

    public Website(String url) {
        this.url = url;
    }

    public int getPrice() {
        // Membuat query ke website dengan url untuk mendapat harga masker.
        // Melakukan request akan membutuhkan waktu lama, jadi asumsikan
        // kode berikut sebagai contoh mendapat harga masker.
        try {
            Thread.sleep((int) (Math.random() * 5000));
        } catch (InterruptedException e) {
            //
        }
        return (int) (Math.random() * 1000000);
    }
}
