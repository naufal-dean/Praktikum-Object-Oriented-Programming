// Pizza.java
import java.util.Set;
import java.util.TreeSet;

public class Pizza {
  private String crust;
  private Set<String> toppingIngredients;
  private int diameter;
  private int price;

  public Pizza() {
    this.toppingIngredients = new TreeSet<String>();
    this.diameter = 35;
    this.crust = "Original";
    this.price = this.diameter * 15;
  }

  public String getCrust() {
    return this.crust;
  }

  public void setCrust(String crust) {
    this.crust = crust;
  }

  public Set<String> getToppingIngredients() {
    return this.toppingIngredients;
  }

  public void addToppingIngredient(String ingredient) {
    this.toppingIngredients.add(ingredient);
  }

  public int getDiameter() {
    return this.diameter;
  }

  public void setDiameter(int diameter) {
    this.diameter = diameter;
  }

  public int getPrice() {
    return this.price;
  }

  public void setPrice(int price) {
    this.price = price;
  }
}
