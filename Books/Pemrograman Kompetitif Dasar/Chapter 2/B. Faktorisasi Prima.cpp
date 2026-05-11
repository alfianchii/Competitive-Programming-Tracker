#include <bits/stdc++.h>

using namespace std;

int main() {
  int n; cin >> n;
  vector<pair<int, int>> nums;

  int pangkat = 0;
  int temp = n;
  for (int prima = 2; prima < n; prima++) {
    if (temp % prima == 0) {
      temp = temp / prima;
      pangkat++;
      prima--;
    } else {
      nums.push_back({prima, pangkat});

      pangkat = 0;
      continue;
    }
  }

  bool first = true;
  for (auto num : nums) {
    if (!num.second) continue;

    if (!first) cout << " x ";
    first = false;

    cout << num.first;
    if (num.second != 1) cout << "^" << num.second;
  }
}