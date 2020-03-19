// Nama		: Naufal Dean Anugrah
// NIM		: 13518123
// Tanggal	: 12 Maret 2020
// Topik 	: Pengenalan java

class RekeningTabungan extends Rekening {
	public RekeningTabungan(String nama, double saldo) {
		super(nama, saldo, 0.05);
	}

	public void setor(double uang) {
		this.saldo += uang;
	}

	public void tarik(double uang) {
		if (uang <= this.saldo) {
			this.saldo -= uang;
		}
	}

	public void update() {
		this.saldo += this.getSukuBunga() * this.saldo - this.hitungBiaya();
	}
}


