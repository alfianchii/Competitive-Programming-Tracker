#include <bits/stdc++.h>

using namespace std;

int main() {
  int n; cin >> n;
  vector<pair<int, int>> nums;

  int temp = n;
  for (int prima = 2; temp > 1; prima++) {
    int pangkat = 0;

    while (temp % prima == 0) {
      temp /= prima;
      pangkat++;
    }

    if (pangkat > 0) nums.push_back({prima, pangkat});
  }

  bool first = true;
  for (auto num : nums) {
    if (!first) cout << " x ";
    first = false;

    cout << num.first;
    if (num.second != 1) cout << "^" << num.second;
  }
}