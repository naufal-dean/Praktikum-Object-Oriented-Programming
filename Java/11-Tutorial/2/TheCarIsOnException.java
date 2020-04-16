import java.io.*;

public class TheCarIsOnException extends Exception {
   
   public TheCarIsOnException() {
      
   }
   

   @Override
    public String getMessage() {
        return "Mobil sudah menyala";
    }
}