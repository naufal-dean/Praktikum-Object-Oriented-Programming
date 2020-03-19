// Nama   : Naufal Dean Anugrah
// NIM    : 13518123
// Tanggal: 19 Maret 2020
// Topik  : Pengenalan java

class Human extends Animal {
  public Human() {
    super(2);
  }

  public void eat(String food) {
    if (!food.equals("teman")) {
      this.hungry = false;
    }
  }

  public void run() {
    System.out.println("Human is running");
  }
}
