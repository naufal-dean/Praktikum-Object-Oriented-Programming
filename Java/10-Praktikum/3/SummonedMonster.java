// Nama   : Naufal Dean Anugrah
// NIM    : 13518123
// Tanggal: 2 April 2020
// Topik  : Design Pattern

class SummonedMonster implements ISummoned {
  private Monster monster;
  private boolean isAttack;
  private boolean isOpen;

  public SummonedMonster(Monster monster, boolean isOpen, boolean isAttack) {
    this.monster = monster;
    this.isAttack = isAttack;
    this.isOpen = isOpen;
  }

  // mengubah keadaan kartu dari tertutup jadi terbuka dan mengembalikan true
  // bila kartu sudah terbuka, tidak lakukan apa-apa dan kembalikan false
  public boolean flip() {
    if (this.isOpen) {
      return false;
    } else {
      return this.isOpen = true;
    }
  }

  // mengubah posisi karakter dari menyerang jadi bertahan, atau sebaliknya
  public void rotate() {
    this.isAttack = !this.isAttack;
  }

  // bila dalam posisi menyerang, mengembalikan attack.
  // bila dalam posisi bertahan, mengembalikan defense
  public int getPositionValue() {
    if (this.isAttack) {
      return this.monster.getAttackValue();
    } else {
      return this.monster.getDefenseValue();
    }
  }

  // menggambar kartu ke layar
  public void render() {
    System.out.println(String.format("Monster %s dalam keadaan %s dengan posisi %s", this.monster.getName(), (this.isOpen) ? ("terbuka") : ("tertutup"), (this.isAttack) ? ("menyerang") : ("bertahan")));
  }
}
