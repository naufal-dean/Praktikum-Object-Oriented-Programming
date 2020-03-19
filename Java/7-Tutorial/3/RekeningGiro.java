// Nama		: Naufal Dean Anugrah
// NIM		: 13518123
// Tanggal	: 12 Maret 2020
// Topik 	: Pengenalan java

class RekeningGiro extends Rekening {
	private boolean penalti;

	public RekeningGiro(String nama, double saldo) {
		super(nama, saldo, 0.07);
	}

	public void setor(double uang) {
		this.saldo += uang - this.saldo * 0.10;
	}

	public void tarik(double uang) {
		if (uang + this.hitungBiaya() <= this.saldo) {
			this.saldo -= uang + this.saldo * 0.10;
		}
	}

	public void update() {
		this.saldo += this.getSukuBunga() * this.saldo - this.hitungBiaya();
		if (penalti) {
			this.saldo -= 10;
		}
		if (this.saldo < 0) {
			this.saldo = 0;
		}
	}
}
