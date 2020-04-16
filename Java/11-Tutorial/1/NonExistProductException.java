public class NonExistProductException extends Exception {
  public String productName;

  public NonExistProductException(String thing) {
    super();
    this.productName = thing;
  }

  public String toString() {
    return this.productName + " does not exist in this storage.";
  }
}