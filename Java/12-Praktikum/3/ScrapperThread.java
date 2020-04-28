// Nama   : Naufal Dean Anugrah
// NIM    : 13518123
// Tanggal: 16 April 2020
// Topik  : Multithreading

public class ScrapperThread extends Thread {
    private ScrapperThreadListener listener;
    private String url;

    public ScrapperThread(ScrapperThreadListener listener, String url) {
        this.listener = listener;
        this.url = url;
    }

    public interface ScrapperThreadListener {
        void updatePrice(int price);
    }

    @Override
    public void run() {
        // Misalnya, proses untuk player join butuh waktu lama
        Website website = new Website(this.url);
        this.listener.updatePrice(website.getPrice());
    }
}
