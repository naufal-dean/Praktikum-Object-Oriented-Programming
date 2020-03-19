// Nama   : Naufal Dean Anugrah
// NIM    : 13518123
// Tanggal: 19 Maret 2020
// Topik  : Pengenalan java

class Cow extends Animal {
  public Cow() {
    super(4);
  }

  public void eat(String food) {
    if (food.equals("grass")) {
      this.hungry = false;
    }
  }

  public void run() {
    super.run();
    System.out.println("Cow is running");
  }
}
