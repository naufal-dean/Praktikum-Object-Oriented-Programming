// Nama		: Naufal Dean Anugrah
// NIM		: 13518123
// Tanggal	: 12 Maret 2020
// Topik 	: Pengenalan java

class RekeningGiro extends Rekening {
	private boolean penalti;

	public RekeningGiro(String nama, double saldo) {
		super(nama, saldo, 0.07);
		if (this.saldo < 500)
			this.penalti = true;
		else
			this.penalti = false;
	}

	public void setor(double uang) {
		this.saldo += uang - 0.10;
		if (this.saldo < 500)
			this.penalti = true;
	}

	public void tarik(double uang) {
		if (uang + 0.10 <= this.saldo) {
			this.saldo -= uang + 0.10;
		}
		if (this.saldo < 500)
			this.penalti = true;
	}

	public void update() {
		this.saldo += this.getSukuBunga() * this.saldo - this.hitungBiaya();
		if (this.penalti) {
			this.saldo -= 10;
		}
		if (this.saldo >= 500) {
			this.penalti = false;
		}
		if (this.saldo < 0) {
			this.saldo = 0;
		}
	}
}
