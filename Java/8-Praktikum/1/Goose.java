// Nama   : Naufal Dean Anugrah
// NIM    : 13518123
// Tanggal: 19 Maret 2020
// Topik  : Pengenalan java

class Goose {
  private String name;
  private int honk;

  public Goose() {
    this.name = "Horrible";
    this.honk = 1;
  }

  public Goose(String name, int honk) {
    this.name = name;
    this.honk = honk;
  }

  public void steal(String thing) {
    System.out.println(this.name + " steals " + thing);
  }

  public String toString() {
    String result = this.name + " goose says";
    for (int i = 0; i < this.honk; i++)
      result += " honk";
    return result;
  }
}
