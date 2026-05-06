#include <bits/stdc++.h>

using namespace std;

void bubbleSort(vector<double>& nums) {
  int n = nums.size() - 1;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n - i; j++) {
      if (nums[j] > nums[j + 1]) {
        double temp = nums[j];
        nums[j] = nums[j + 1];
        nums[j + 1] = temp;
      }
    }
  }
}

int main() {
  int n; cin >> n;
  vector<double> nums(n); for (int i = 0; i < n; i++) cin >> nums[i];

  bubbleSort(nums);

  double res = 0;
  int mid = nums.size() / 2;
  if (n % 2 == 0) res = (nums[mid - 1] + nums[mid]) / 2;
  else res = nums[mid];

  cout << fixed << setprecision(1) << res << "\n";
}