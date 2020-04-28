

class RekeningDeposito extends Rekening {
	private int bulan;

	public RekeningDeposito(String nama, double saldo) {
		super(nama, saldo, 0.15);
		this.bulan = 0;
	}

	public void setor(double uang) {
		System.out.println("Tidak dapat melakukan penyetoran uang untuk rekening ini.");
	}

	public void tarik(double uang) {
		System.out.println("Tidak dapat melakukan penarikan uang sebagian untuk rekening ini.");
	}

	public void tarik() {
		if (bulan < 12) {
			double penalti = 0.2 * this.saldo;
			System.out.println("Anda terkena penalti sebesar " + penalti + ".");
		}
		this.saldo = 0;
	}

	public void update() {
		this.bulan++;
		if (this.bulan % 12 == 0) {
			this.saldo += this.getSukuBunga() * this.saldo - this.hitungBiaya();
		} else {
			this.saldo -= this.hitungBiaya();
		}
	}
}
