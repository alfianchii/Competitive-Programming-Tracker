#include <bits/stdc++.h>

using namespace std;

int count(int val, vector<int>& weights) {
  int left = 0, right = weights.size();

  while (left < right) {
    int mid = (left + right) / 2;
    if (weights[mid] <= val) left = mid + 1;
    else right = mid;
  }

  return left;
}

int main() {
  int ducks; cin >> ducks;
  vector<int> weights(ducks); for (int i = 0; i < ducks; i++) cin >> weights[i];

  int q; cin >> q;
  while (q--) {
    int x, y, sum = 0; cin >> x >> y;
    int ans = count(y, weights) - count(x, weights);
    cout << ans << "\n";
  }
}