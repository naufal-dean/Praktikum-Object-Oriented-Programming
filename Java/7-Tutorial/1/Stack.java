// Nama		: Naufal Dean Anugrah
// NIM		: 13518123
// Tanggal	: 12 Maret 2020
// Topik 	: Pengenalan java

class Stack {
	private int size;
	private int capacity;
	private int[] data;

	public Stack() {
		this.size = 0;
		this.capacity = 10;
		this.data = new int[this.capacity];		
	}
	public Stack(int cap) {
		this.size = 0;
		this.capacity = cap;
		this.data = new int[cap];		
	}

	public void push(int x) {
		if (this.size < this.capacity) {
			this.data[size] = x;
			this.size++;
		}
	}

	public void push(int[] x) {
		for (int item : x) {
			this.push(item);
		}
	}

	public int pop() {
		int top = 0;
		if (this.size > 0) {
			this.size--;
			top = this.data[size];
		}
		return top;
	}
} 