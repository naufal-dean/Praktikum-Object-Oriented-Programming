// Nama   : Naufal Dean Anugrah
// NIM    : 13518123
// Tanggal: 2 April 2020
// Topik  : Design Pattern

// import java api jika diperlukan
import java.util.*;

public class MailServer implements EventChannel {
  // tambahkan properties jika perlu
  private Hashtable<String, List<Subscriber>> subscribers;

  public MailServer() {
    // menginisiasi daftar subscriber
    this.subscribers = new Hashtable<>();
  }

  public void addSubscriber(String topic, Subscriber s) {
    // tambahkan s sebagai subscriber ke topic yang diberikan
    if (!this.subscribers.containsKey(topic))
      this.subscribers.put(topic, new ArrayList<>());
    this.subscribers.get(topic).add(s);
  }

  public void sendEvent(String topic, Event event) {
    // untuk setiap subscriber s yang sudah subscribe ke topic yang diberikan,
    // panggil s.onEvent(event)
    if (this.subscribers.containsKey(topic))
      for (Subscriber s : this.subscribers.get(topic))
        s.onEvent(event);
  }
}
