public class EmailAccountStudent implements Subscriber {
  private String address;

  public EmailAccountStudent(String address) {
    this.address = address;
  }

  public void onEvent(Event event) {
    System.out.println("Email " + address + " get event " + event);
  }
}
