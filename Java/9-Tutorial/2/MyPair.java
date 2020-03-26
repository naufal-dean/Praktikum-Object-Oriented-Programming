// Nama   : Naufal Dean Anugrah
// NIM    : 13518123
// Tanggal: 26 Maret 2020
// Topik  : Generic class

class MyPair<K,V> {
  private K key;
  private V value;

  public MyPair(K key, V value) {
    this.key = key;
    this.value = value;
  }

  public K getKey() {
    return this.key;
  }

  public V getVal() {
    return this.value;
  }

  public void setKey(K key) {
    this.key = key;
  }

  public void setVal(V value) {
    this.value = value;
  }

  public boolean isEqual(MyPair pair) {
    return (this.key == pair.key) && (this.value == pair.value);
  }

  public int nearEQ(MyPair pair) {
    if ((this.key != pair.key) && (this.value != pair.value)) {
      return 0;
    } else if ((this.key == pair.key) && (this.value != pair.value)) {
      return 1;
    } else if ((this.key != pair.key) && (this.value == pair.value)) {
      return 2;
    } else {
      return 3;
    }
  }
}
