public class InvalidQuantityException extends Exception {
  public int quantity;

  public InvalidQuantityException(int number) {
    super();
    this.quantity = number;
  }

  public String toString() {
    return this.quantity + " is invalid number.";
  }
}