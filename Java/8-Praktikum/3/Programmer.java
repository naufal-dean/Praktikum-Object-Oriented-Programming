// Nama   : Naufal Dean Anugrah
// NIM    : 13518123
// Tanggal: 19 Maret 2020
// Topik  : Pengenalan java

class Programmer extends Employee {
  public Programmer() {
    super();
  }

  public int calculateSalary(int workHour) {
    int salary;
    if (workHour <= 150) {
      salary = workHour * 100000;
    } else {
      salary = (150 * 100000) + ((workHour - 150) * 10000);
    }
    if (this.hasMarried) {
      salary += 4000000;
    }
    return salary;
  }
}
