// Nama   : Naufal Dean Anugrah
// NIM    : 13518123
// Tanggal: 2 April 2020
// Topik  : Design Pattern

class PizzaBuilder {
  private Pizza pizza;

  public PizzaBuilder() {
    this.pizza = new Pizza();
  }

  public PizzaBuilder size(String s) {
    if (s.equals("small"))
      this.pizza.setDiameter(25);
    else if (s.equals("medium"))
      this.pizza.setDiameter(35);
    else // s.equals("large")
      this.pizza.setDiameter(40);
    return this;
  }

  public PizzaBuilder crust(String c) {
    this.pizza.setCrust(c);
    return this;
  }

  public PizzaBuilder addTopping(String t) {
    if (t.equals("Meat Lovers")) {
      this.pizza.addToppingIngredient("beef");
      this.pizza.addToppingIngredient("mozarella");
    } else if (t.equals("Tuna Melt")) {
      this.pizza.addToppingIngredient("tuna");
      this.pizza.addToppingIngredient("corn");
      this.pizza.addToppingIngredient("mozarella");
    } else { // t.equals("Supreme")
      this.pizza.addToppingIngredient("pepperoni");
      this.pizza.addToppingIngredient("beef");
      this.pizza.addToppingIngredient("mushroom");
      this.pizza.addToppingIngredient("pineapple");
    }
    return this;
  }

  public Pizza build() {
    this.pizza.setPrice(15 * this.pizza.getDiameter() + 10 * this.pizza.getToppingIngredients().size());
    if (this.pizza.getCrust().equals("Cheesy Bites"))
      this.pizza.setPrice(this.pizza.getPrice() + 10);
    else if (this.pizza.getCrust().equals("Stuffed"))
      this.pizza.setPrice(this.pizza.getPrice() + 20);
    return this.pizza;
  }
}
