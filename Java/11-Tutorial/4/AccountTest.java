// Nama     : Naufal Dean Anugrah
// NIM      : 13518123
// Tanggal  : 9 April 2020
// Topik    : Assertion

public class AccountTest {
  public AccountTest() {
     // Tidak melakukan apa-apa
  }

  public void test() {
     // Melakukan tes terhadap method transfer.
     // Asumsikan method lainnya benar.
     // TEST 1
     Account a = AccountFactory.withBalance(20);
     Account b = AccountFactory.withBalance(0);
     try {
       a.transfer(b, 5);
     } catch (InvalidAmountException e) {
       assert false;
     }
     assert a.getNumOfTransaction() == 1;
     assert a.getBalance() == 15;
     assert b.getBalance() == 5;

     // TEST 2
     Account c = AccountFactory.withBalance(20);
     Account d = AccountFactory.withBalance(0);
     try {
       c.transfer(d, 25);
       assert false;
     } catch (InvalidAmountException e) {
       // pass
     }
     assert c.getBalance() == 20;
     assert d.getBalance() == 0;
  }
}
