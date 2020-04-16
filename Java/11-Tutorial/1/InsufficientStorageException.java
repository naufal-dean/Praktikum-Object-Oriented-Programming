public class InsufficientStorageException extends Exception {
  public String productName;
  public int quantity;

  public InsufficientStorageException(String thing, int qty) {
    super();
    this.productName = thing;
    this.quantity = qty;
  }

  public String toString() {
    return this.quantity + " " + this.productName + " cannot fit in this storage.";
  }

}