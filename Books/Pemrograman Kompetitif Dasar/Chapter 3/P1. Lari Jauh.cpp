#include <bits/stdc++.h>

using namespace std;

int countCheckpoint(int duck, vector<int>& checkpoints) {
  int left = 0, right = checkpoints.size();

  // 0 < 1
  while (left < right) {
    // 1
    int mid = (left + right) / 2;
    if (checkpoints[mid] <= duck) left = mid + 1;
    else right = mid;
  }

  return left;
}

int main() {
  int n, k; cin >> n >> k;
  vector<int> checkpoints(n), ducks(n);
  for (int i = 0; i < n; i++) cin >> checkpoints[i];
  for (int i = 0; i < k; i++) cin >> ducks[i];

  vector<int> prefix(n);
  prefix[0] = checkpoints[0];
  for (int i = 1; i < n; i++) prefix[i] = prefix[i - 1] + checkpoints[i];

  for (int duck : ducks) {
    cout << countCheckpoint(duck, prefix) << "\n";
  }
}