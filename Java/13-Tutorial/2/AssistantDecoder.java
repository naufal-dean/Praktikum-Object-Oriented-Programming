// Nama   : Naufal Dean Anugrah
// NIM    : 13518123
// Tanggal: 23 April 2020
// Topik  : Reflection

import java.lang.reflect.*;

public class AssistantDecoder {
  private Assistant assistant;

  AssistantDecoder(Assistant assistant) {
      this.assistant = assistant;
  }

  public void addPersonToRecommendations(String name) throws Exception {
      Method m = this.assistant.getClass().getDeclaredMethod("addPersonToRecommendations", String.class);
      m.setAccessible(true);
      m.invoke(this.assistant, name);
  }

  public int getSalary() throws Exception {
      Field f = this.assistant.getClass().getDeclaredField("salary");
      f.setAccessible(true);
      return (int) f.get(this.assistant);
  }
}
