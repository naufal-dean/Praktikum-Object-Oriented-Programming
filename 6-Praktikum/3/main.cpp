// Nama		: Naufal Dean Anugrah
// NIM		: 13518123
// Tanggal 	: 27 Februari 2020
// Topik	: Generik, exception, and stl

#include <map>
#include <algorithm>
#include <iostream>

using namespace std;

int main() {
	int n, m;
	string temp;
	map<string, int> nWords;
	map<string, int> mWords;

	// Algoritma
	cin >> n;
	for (int i = 0; i < n; ++i) {	
		cin >> temp;
		nWords[temp]++;
	}

	cin >> m;
	for (int i = 0; i < m; ++i) {
		cin >> temp;
		if (nWords.find(temp) != nWords.end()) { // ditemukan
			nWords[temp]--;
		}
	}

	// Print output
	for (auto item = nWords.begin(); item != nWords.end(); ++item) {
		for (int i = 0; i < item->second; ++i) {
			cout << item->first << endl;
		}
	}

	return 0;
}
