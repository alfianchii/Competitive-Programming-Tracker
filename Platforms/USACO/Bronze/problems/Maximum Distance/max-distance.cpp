#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> x(n), y(n);
	for (int &t : x) { cin >> t; }
	for (int &t : y) { cin >> t; }

	int max_squared = 0; // 26
	for (int i = 0; i < n; i++) { // 1
		for (int j = i + 1; j < n; j++) { // 2
			int dx = x[i] - x[j]; // 1
			int dy = y[i] - y[j]; // 5

			int square = dx*dx + dy*dy; // 26
			if (square > max_squared) max_squared = square;
		}
	}
	
	cout << max_squared << endl;
}