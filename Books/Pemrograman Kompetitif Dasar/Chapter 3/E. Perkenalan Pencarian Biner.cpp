#include <bits/stdc++.h>

using namespace std;

int main() {
  int ducks; cin >> ducks;
  vector<int> weights(ducks); for (int i = 0; i < ducks; i++) cin >> weights[i];

  int q; cin >> q;
  vector<int> res;
  while (q--) {
    int left, right, sum = 0; cin >> left >> right;
    for (int w : weights) {
      if (w >= left && w < right) sum++;
    }
    res.push_back(sum);
  }

  for (int num : res) cout << num << "\n";
}