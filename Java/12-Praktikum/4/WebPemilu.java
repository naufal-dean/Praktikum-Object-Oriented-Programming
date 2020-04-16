// Nama   : Naufal Dean Anugrah
// NIM    : 13518123
// Tanggal: 16 April 2020
// Topik  : Multithreading

import java.util.HashMap;
import java.util.Map;

public class WebPemilu {
    protected Map<String, Integer> votes;

    public WebPemilu() {
        votes = new HashMap<String, Integer>();
    }

    public boolean verify(String vote) {
        // Di sini, website melakukan verifikasi. Verifikasi butuh waktu yang
        // lama. Untuk menyingkat soal, anggap saja Thread.sleep(1) ini melakukan verifikasi.
        try {
            Thread.sleep(1);
        } catch (InterruptedException e) {
            System.out.println(e);
        }
        return true;
    }

    public synchronized void addVote(String vote) {
        Integer previousVoteCount = votes.get(vote);
        if (previousVoteCount == null) {
            previousVoteCount = 0;
        }
        votes.put(vote, previousVoteCount + 1);
    }

    public Thread receiveVote(String vote) {
        // ubah kode berikut agar mengembalikan thread yang akan menambah vote
        // PENTING: jangan start thread, cukup return saja

        return new Thread((Runnable) () -> {
            if (verify(vote)) {
                addVote(vote);
            }
        });
    }

    public void printResult() {
        for (String vote : votes.keySet()) {
            System.out.println(vote + " " + votes.get(vote));
        }
    }
}
