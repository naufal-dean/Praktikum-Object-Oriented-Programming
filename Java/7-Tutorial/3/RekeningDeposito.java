

class RekeningDeposito extends Rekening {
	private int bulan;

	public RekeningDeposito(String nama, double saldo) {
		super(nama, saldo, 0.15);
	}

	public void setor(double uang) {
		System.out.println("Tidak dapat melakukan penyetoran uang untuk rekening ini.");
	}

	public void tarik(double uang) {
		System.out.println("Tidak dapat melakukan penarikan uang sebagian untuk rekening ini.");
	}

	public void tarik() {
		double penalti = 0.2 * this.saldo;
		if (bulan < 12) {
			System.out.println("Anda terkena penalti sebesar " + penalti + ".");
		}
		this.saldo = 0;
	}

	public void update() {
		this.bulan++;
		if (this.bulan % 12 == 0) {
			this.saldo += this.getSukuBunga() * this.saldo - this.hitungBiaya();
		}
	}
}

