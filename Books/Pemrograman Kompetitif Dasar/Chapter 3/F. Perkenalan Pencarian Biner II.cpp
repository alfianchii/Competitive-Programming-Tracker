#include <bits/stdc++.h>

using namespace std;

int findAnimalType(int x, vector<int>& types) {
  int left = 1, right = types.size();

  while (left < right) {
    int mid = (left + right) / 2;
    if (x >= types[mid]) left = mid + 1;
    else right = mid;
  }

  return left;
}

int main() {
  int n; cin >> n;
  vector<int> types(n); for (int i = 0; i < n; i++) cin >> types[i];

  vector<int> prefix(n);
  prefix[0] = 0;
  for (int i = 1; i < n; i++) prefix[i] = prefix[i - 1] + types[i - 1];

  int q; cin >> q;
  while (q--) {
    int x; cin >> x;

    cout << findAnimalType(x, prefix) << "\n";
  }
}