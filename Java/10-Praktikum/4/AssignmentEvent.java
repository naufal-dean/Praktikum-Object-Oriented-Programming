class AssignmentEvent implements Event {
  private String description;

  public AssignmentEvent(String description) {
    this.description = description;
  }

  public String toString() {
    return "New Assignment: " + this.description;
  }
}
