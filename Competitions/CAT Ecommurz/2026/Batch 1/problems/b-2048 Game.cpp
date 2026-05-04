#include <bits/stdc++.h>

using namespace std;

int main() {
  int n; cin >> n;
  stack<long long> nums;

  for (int i = 0; i < n; i++) {
    long long x; cin >> x;

    while (!nums.empty() && nums.top() == x) {
      x += nums.top();
      nums.pop();
    }

    nums.push(x);
  }

  if (nums.size() == 1) cout << "YA\n";
  else cout << "TIDAK\n";
}