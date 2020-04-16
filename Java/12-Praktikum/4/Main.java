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
       t.start();
     }
   }
   long endTime = System.nanoTime();
   long durationInNanoSeconds = (endTime - startTime);
   System.out.println("waktu: " + (durationInNanoSeconds / (1000 * 1000)) + " milisekon");
   System.out.flush();

   // memastikan semua vote sudah masuk
   for (Thread t : threads) {
     try {
       t.join();
     } catch(Exception e) {

     }
   }
   web.printResult();
   System.out.println(web.votes.size());
 }
}
