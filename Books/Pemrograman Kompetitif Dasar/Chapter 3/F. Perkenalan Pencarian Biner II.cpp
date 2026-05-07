#include <bits/stdc++.h>

using namespace std;

int findAnimalType(int x, vector<int>& types) {
  int left = 0, right = types.size() - 1;

  while (left < right) {
    int mid = (left + right) / 2;
    if (x >= types[mid]) left = mid + 1;
    else right = mid;
  }

  return ++left;
}

int main() {
  int n; cin >> n;
  vector<int> types(n); for (int i = 0; i < n; i++) cin >> types[i];

  vector<int> prefix(n);
  prefix[0] = types[0];
  for (int i = 1; i < n; i++) prefix[i] = prefix[i - 1] + types[i];

  int q; cin >> q;
  while (q--) {
    int x; cin >> x;

    cout << findAnimalType(x, prefix) << "\n";
  }
}