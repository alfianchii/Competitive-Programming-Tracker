#include <bits/stdc++.h>

using namespace std;

int bubbleSort(vector<int>& nums) {
  int swap = 0;
  int n = nums.size();

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n - 1; j++) {
      if (nums[j] > nums[j + 1]) {
        int temp = nums[j];
        nums[j] = nums[j + 1];
        nums[j + 1] = temp;
        swap++;
      }
    }
  }

  return swap;
}

int main() {
  int n; cin >> n;
  vector<int> nums(n); for (int i = 0; i < n; i++) cin >> nums[i];

  int swapTotal = bubbleSort(nums);

  cout << swapTotal << "\n\n";
}