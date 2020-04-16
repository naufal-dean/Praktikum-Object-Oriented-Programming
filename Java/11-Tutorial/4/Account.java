public class Account {
  private int balance;
  private int numOfTransaction;

  public Account(int balance) {
    this.balance = balance;
    this.numOfTransaction = 0;
  }

  public int getBalance() {
    return this.balance;
  }

  public void transfer(Account other, int amount) throws InvalidAmountException {
    // Melakukan transfer dari akun rekening ini ke akun rekening other
    // serta menambahkan numOfTransaction.
    // Jika saldo (balance) rekening ini kurang dari amount, lemparkan InvalidAmountException
    // Asumsi amount selalu > 0
  }

  public int getNumOfTransaction() {
    return this.numOfTransaction;
  }
}
