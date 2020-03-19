// Nama		: Naufal Dean Anugrah
// NIM		: 13518123
// Tanggal	: 12 Maret 2020
// Topik 	: Pengenalan java

class NegativeExpression implements Expression {
	protected Expression x;

	public NegativeExpression(Expression x) {
		this.x = x;
	}

	public int solve() {
		return -1 * this.x.solve();
	}
}