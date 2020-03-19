// Nama		: Naufal Dean Anugrah
// NIM		: 13518123
// Tanggal	: 12 Maret 2020
// Topik 	: Pengenalan java

class TerminalExpression implements Expression {
	protected int x;

	public TerminalExpression(int x) {
		this.x = x;
	}

	public int solve() {
		return this.x;
	}
}