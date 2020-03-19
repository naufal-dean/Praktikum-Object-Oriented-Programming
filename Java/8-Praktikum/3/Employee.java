// Nama   : Naufal Dean Anugrah
// NIM    : 13518123
// Tanggal: 19 Maret 2020
// Topik  : Pengenalan java

abstract class Employee {
  protected boolean hasMarried;

  public Employee() {
    this.hasMarried = false;
  }

  public void setHasMarried(boolean hasMarried) {
    this.hasMarried = hasMarried;
  }

  abstract public int calculateSalary(int workHour);
}
