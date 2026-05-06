#include <bits/stdc++.h>

using namespace std;

void countingSort(vector<double>& nums) {
  if (nums.empty()) return;

  int minVal = nums[0];
  int maxVal = nums[0];
  
  for (int num : nums) {
    if (num < minVal) minVal = num;
    if (num > maxVal) maxVal = num; 
  }

  int range = maxVal - minVal + 1;
  vector<int> freq(range, 0);
  for (int num : nums) {
    int idx = num - minVal;
    freq[idx]++;
  }

  int pos = 0;
  for (int i = 0; i < range; i++) {
    int num = i + minVal;
    while (freq[i] > 0) {
      nums[pos] = num;
      pos++;
      freq[i]--;
    }
  }
}

int main() {
  int n; cin >> n;
  vector<double> nums(n); for (int i = 0; i < n; i++) cin >> nums[i];

  countingSort(nums);

  double res = 0;
  int mid = nums.size() / 2;
  if (n % 2 == 0) res = (nums[mid - 1] + nums[mid]) / 2;
  else res = nums[mid];

  cout << fixed << setprecision(1) << res << "\n";
}