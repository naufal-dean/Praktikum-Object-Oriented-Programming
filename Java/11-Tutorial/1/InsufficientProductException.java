public class InsufficientProductException extends Exception {
  public String productName;
  public int storageQuantity;
  public int pullQuantity;

  public InsufficientProductException(String thing, int storageQty, int pullQty) {
    super();
    this.productName = thing;
    this.storageQuantity = storageQty;
    this.pullQuantity = pullQty;
  }

  public String toString() {
    return "Cannot get " + this.pullQuantity + " " + this.productName + ", only " + this.storageQuantity + " available.";
  }

}