// Nama   : Naufal Dean Anugrah
// NIM    : 13518123
// Tanggal: 19 Maret 2020
// Topik  : Pengenalan java

import java.lang.Comparable;

class Mahasiswa implements Comparable<Mahasiswa> {
  private float ipk;
  private int kodeJurusan;
  private int angkatan;

  public Mahasiswa(float ipk) {
    this.ipk = ipk;
  }

  public Mahasiswa(int kodeJurusan, int angkatan, float ipk) {
    this.ipk = ipk;
    this.kodeJurusan = kodeJurusan;
    this.angkatan = angkatan;
  }

  public int getKodeJurusan() {
    return this.kodeJurusan;
  }

  public int getAngkatan() {
    return this.angkatan;
  }

  public float getIpk() {
    return this.ipk;
  }

  public int compareTo(Mahasiswa m) {
    // compareTo mengembalikan:
    // 0 bila this sama dengan m
    // 1 bila this lebih dari m
    // -1 bila this kurang dari m
    if ((this.kodeJurusan < m.kodeJurusan) ||
        (this.kodeJurusan == m.kodeJurusan && this.angkatan > m.angkatan) ||
        (this.kodeJurusan == m.kodeJurusan && this.angkatan == m.angkatan && this.ipk > m.ipk)) { // kurang
      return -1;
    } else if (this.kodeJurusan == m.kodeJurusan && this.angkatan == m.angkatan && this.ipk == m.ipk) { // sama
      return 0;
    } else { // lebih
      return 1;
    }
  }
}
