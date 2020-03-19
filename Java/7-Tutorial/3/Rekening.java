// Nama		: Naufal Dean Anugrah
// NIM		: 13518123
// Tanggal	: 12 Maret 2020
// Topik 	: Pengenalan java

abstract class Rekening {
	protected String nama;
	protected double saldo;
	protected double sukuBunga;

	public Rekening(String nama, double saldo, double sukuBunga) {
		this.nama = nama;
		this.sukuBunga = sukuBunga;
		if (saldo < 0) {
			this.saldo = 0;
		} else {
			this.saldo = saldo;
		}
	}

	abstract public void setor(double uang);
	abstract public void tarik(double uang);
	abstract public void update();

	public double hitungBiaya() {
		return Math.min(0.1 * this.saldo, 10.0);
	}

	public String getNama() {
		return this.nama;
	}

	public double getSaldo() {
		return this.saldo;
	}

	public double getSukuBunga() {
		return this.sukuBunga;
	}
}
