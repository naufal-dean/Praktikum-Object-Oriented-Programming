Anda diminta membuat sebuah website pemilu untuk sebuah himpunan di ITB. Website Pemilu yang Anda buat kurang lebih seperti ini. Cobalah jalankan kode tersebut dengan kode Main berikut.

import java.util.ArrayList;
import java.util.List;

public class Main {
 public static void main(String[] args) {
   int nVotes = 10000;
   List<Thread> threads = new ArrayList<Thread>();
   WebPemilu web = new WebPemilu();

   long startTime = System.nanoTime();
   for (int i = 0; i < nVotes; i++) {
     Thread t = web.receiveVote("candidate-1");
     if (t != null) {
       threads.add(t);
     }
   }
   long endTime = System.nanoTime();
   long durationInNanoSeconds = (endTime - startTime);
   System.out.println("waktu: " + (durationInNanoSeconds / (1000 * 1000)) + " milisekon");
   System.out.flush();

   // memastikan semua vote sudah masuk
   for (Thread t : threads) {
     t.join();
   }
   web.printResult();
 }
}
Seharusnya, waktu yang dibutuhkan cukup lama. Silakan ubah variabel nVotes hingga waktu yang dibutuhkan sekitar 5.000 milisekon (5 detik), supaya perbedaan nantinya dapat terlihat.

Dalam pembuatan website, hal ini sangat buruk. Karena saat satu vote diterima, vote lain harus menunggu vote ini selesai diproses. Untuk itu, perlu dibuat perubahan:

Buatlah supaya verifikasi dan addVote dipanggil didalam sebuah thread, sehingga pemanggilan method tidak membutuhkan waktu lama, tapi proses voting dikerjakan sebagai background task.
Thread yang dibuat untuk melakukan verifikasi dan addVote di-return, supaya Main program dapat menunggu semua vote masuk sebelum memanggil printResult()
Jalankan di program Anda, dan bandingkan hasilnya! Apakah sudah lebih cepat (kalau tidak, kemungkinan ada yang salah...)
Perhatikan hasil yang dituliskan di layar. Pastikan vote candidate-1 sesuai dengan jumlah nVote. Jika tidak, kenapa? Apa yang salah? Benarkan dalam kode Anda. (Hint: perhatikan method addVote)
Perhatikan kalau:

Tidak boleh membuat variabel atau method tambahan di kelas ini. Jika dibuat, maka seluruh testcase akan mengembalikan wrong answer
Method verify dan printResult tidak perlu diubah (jika diubah, grader akan mengembalikan seperti semula)
