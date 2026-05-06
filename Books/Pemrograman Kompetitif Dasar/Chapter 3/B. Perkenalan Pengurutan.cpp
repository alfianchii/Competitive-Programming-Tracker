#include <bits/stdc++.h>

using namespace std;

int main() {
  int n; cin >> n;
  vector<double> nums(n); for (int i = 0; i < n; i++) cin >> nums[i];

  double res = 0;
  int mid = nums.size() / 2;
  if (mid % 2 == 1) res = (nums[mid] + nums[mid + 1]) / 2;
  else res = nums[mid];

  cout << res << "\n";
}