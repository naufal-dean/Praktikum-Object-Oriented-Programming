public class Monster {
  private String name;
  private int atk;
  private int def;

  public Monster(String name, int atk, int def) {
    this.name = name;
    this.atk = atk;
    this.def = def;
  }

  public String getName() {
    return this.name;
  }

  public int getAttackValue() {
    return this.atk;
  }

  public int getDefenseValue() {
    return this.def;
  }
}