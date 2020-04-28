import java.util.ArrayList;

class Scrapper implements ScrapperThread.ScrapperThreadListener {
    private ArrayList<String> urlList;
    private int lowestPrice, n;

    public Scrapper() {
        this.urlList = new ArrayList<String>();
        this.lowestPrice = Integer.MAX_VALUE;
        this.n = 0;
    }

    public void addUrl(String url) {
        urlList.add(url);
    }

    @Override
    public synchronized void updatePrice(int price) {
        this.n++;
        this.lowestPrice = (price < this.lowestPrice) ? (price) : (this.lowestPrice);
        this.notify();
    }

    public int scrapLowestPrice() {
        // Kode berikut masih melakukan scrap ke banyak website
        // secara sekuensial. Agar lebih cepat, ubahlah kode di bawah ini
        // menjadi paralel menggunakan wait dan notify, dengan membuat
        // instance ScrapperThread
        // Hint: baca materi praktikum
        for (String url : urlList) {
            ScrapperThread t = new ScrapperThread(this, url);
            t.start();
        }
        while (this.n < urlList.size()) {
            try {
                this.wait();
            } catch(Exception e) {
                // pass
            }
        }
        return this.lowestPrice;
    }
}
