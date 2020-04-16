import java.util.List;
import java.util.ArrayList;

public class Chunk {
  private List<Position> trees;

  public Chunk() {
    this.trees = new ArrayList<Position>();
  }

  public void addTree(Position p) {
    this.trees.add(p);
  }

  public List<Position> getTrees() {
    return this.trees;
  }
}