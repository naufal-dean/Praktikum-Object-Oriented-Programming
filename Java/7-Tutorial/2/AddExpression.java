// Nama		: Naufal Dean Anugrah
// NIM		: 13518123
// Tanggal	: 12 Maret 2020
// Topik 	: Pengenalan java

class AddExpression implements Expression {
	protected Expression x;
	protected Expression y;

	public AddExpression(Expression x, Expression y) {
		this.x = x;
		this.y = y;
	}

	public int solve() {
		return this.x.solve() + this.y.solve();
	}
}