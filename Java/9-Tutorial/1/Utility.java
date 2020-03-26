// Nama   : Naufal Dean Anugrah
// NIM    : 13518123
// Tanggal: 26 Maret 2020
// Topik  : Generic class

class Utility {
  public static <T extends Number> double getMidpoint(T[] arr) {
    if (arr.length % 2 == 1) {
      return arr[arr.length / 2].doubleValue();
    } else {
      return (arr[arr.length / 2].doubleValue() + arr[(arr.length / 2) - 1].doubleValue()) / 2;
    }
  }

  public static <T> T getMidpoint(T[] arr) {
    return arr[arr.length / 2];
  }

  public static <T> T getLast(T[] arr) {
    return arr[arr.length - 1];
  }

  public static <T extends Number> double getAverage(T[] arr) {
    double sum = 0;
    for (int i = 0; i < arr.length; i++) {
      sum += arr[i].doubleValue();
    }
    return sum / arr.length;
  }
}
