#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, x; cin >> n >> x;
  vector<int> arr(n); for (int i = 0; i < n; i++) cin >> arr[i];

  int idx = 0;
  for (int i = 0; i < n; i++) {
    int diff = abs(arr[i] - x);
    int prevDiff = abs(arr[idx] - x);

    if (diff < prevDiff || (diff == prevDiff && arr[i] < arr[idx])) idx = i;
  }

  cout << arr[idx] << "\n";
}