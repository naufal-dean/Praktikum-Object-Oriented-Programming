import java.io.*;

public class FuelException extends Exception {
   private Fuel fuel;
   
   public FuelException(Fuel fuel) {
      this.fuel = fuel;
   }
   
   public Fuel getFuel() {
      return fuel;
   }

   @Override
    public String getMessage() {
        return "Bensin jenis "+this.fuel+" tidak sesuai";
    }
}