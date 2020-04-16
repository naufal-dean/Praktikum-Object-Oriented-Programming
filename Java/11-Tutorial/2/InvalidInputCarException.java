import java.io.*;

public class InvalidInputCarException extends Exception {
   private int input;
   
   public InvalidInputCarException(int input) {
      this.input = input;
   }
   
   public int getInput() {
      return input;
   }

   @Override
    public String getMessage() {
        return "Input "+input+" diluar range";
    }
}