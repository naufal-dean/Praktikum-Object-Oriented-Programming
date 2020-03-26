// Nama   : Naufal Dean Anugrah
// NIM    : 13518123
// Tanggal: 26 Maret 2020
// Topik  : Java API

import java.util.*;

class Game {
  static void run(String[] hojun, String[] qila) {
    Map<String,Integer> map = new HashMap<String,Integer>();

    for (String s : hojun) {
      if (map.containsKey(s)) {
        map.put(s, map.get(s) + 1);
      } else {
        map.put(s, 1);
      }
    }

    for (String s : qila) {
      if (map.containsKey(s)) {
        map.put(s, map.get(s) - 1);
      }
    }

    for (Map.Entry<String,Integer> e : map.entrySet()) {
      for (int i = 0; i < e.getValue(); i++) {
        System.out.println(e.getKey());
      }
    }
  }
}
