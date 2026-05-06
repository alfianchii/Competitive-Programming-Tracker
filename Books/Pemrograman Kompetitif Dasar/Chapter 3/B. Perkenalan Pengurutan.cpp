#include <bits/stdc++.h>

using namespace std;

int main() {
  int n; cin >> n;
  vector<double> nums(n); for (int i = 0; i < n; i++) cin >> nums[i];

  double res = 0;
  int mid = nums.size() / 2;
  if (n % 2 == 0) res = (nums[mid - 1] + nums[mid]) / 2;
  else res = nums[mid];

  cout << fixed << setprecision(1) << res << "\n";
}