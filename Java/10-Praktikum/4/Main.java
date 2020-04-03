class Main {
  public static void main(String[] args) {
    MailServer m = new MailServer();
    m.addSubscriber("1", new EmailAccountStudent("test1"));
    m.addSubscriber("1", new EmailAccountStudent("test2"));
    m.sendEvent("1", new EmailEvent("hello there"));
    m.sendEvent("2", new EmailEvent("hello there"));
  }
}
