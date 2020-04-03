class EmailEvent implements Event {
  private String body;

  public EmailEvent(String body) {
    this.body = body;
  }

  public String toString() {
    return "New Email: " + this.body;
  }
}
