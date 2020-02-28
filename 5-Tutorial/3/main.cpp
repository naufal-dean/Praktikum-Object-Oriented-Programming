#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, sum = 0;
	cin >> n;
	if (n <= 0) {
		cout 	<< '-' << endl
					<< '-' << endl
					<< '-' << endl
					<< '-' << endl
					<< '0' << endl;
		return 0;
	}

	vector<int> vec(n), vecDef(n);
	map<int, int> mp;

	for (int i = 0; i < n; i++) {
		cin >> vec.at(i);
	}
	vecDef = vec;
	// mean
	sum = accumulate(vec.begin(), vec.end(), sum);
	cout << (float) sum / vec.size() << endl;
	// median
	sort(vec.begin(), vec.end());
	if (vec.size() & 1) { // odd
		cout << vec.at(vec.size() / 2) << endl;
	} else { // even
		cout << (vec.at(vec.size() / 2) + vec.at((vec.size() / 2) - 1)) / 2.0 << endl;
	}
	// modus
	for (auto i : vec) {
		mp[i]++;
	}
	int modus = -1, count = -1;
	for (auto i : mp) {
		if (i.second > count) {
			modus = i.first;
			count = i.second;
		}
		if ((i.second == count) && (i.first < modus)) {
			modus = i.first;
		}
	}
	cout << modus << endl;

	// print
	for (int i = 0; i < count; i++) {
		vecDef.push_back(modus);
	}
	for (int i = 0; i < vecDef.size() - 1; i++) {
		cout << vecDef.at(i) << ' ';
	}
	cout << *(vecDef.rbegin()) << endl;

	// size
	cout << vecDef.size() << endl;

	return 0;
}
