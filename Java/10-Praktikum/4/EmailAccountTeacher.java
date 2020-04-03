public class EmailAccountTeacher implements Publisher {
  private EventChannel channel;

  public EmailAccountTeacher(EventChannel channel) {
    this.channel = channel;
  }

  public void publish(String topic, Event event) {
    this.channel.sendEvent(topic, event);
  }

  public void sendEmail(String code, String body) {
    // mengirim email ke milist dengan kode mata kuliah code
    this.publish(code, new EmailEvent(body));
  }

  public void createAssignment(String code, String description) {
    // mempubikasikan adanya tugas ke mata kuliah dengan kode code
    this.publish(code, new AssignmentEvent(description));
  }
}
