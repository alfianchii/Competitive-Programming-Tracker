#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, c, sum;
  cin >> n >> c;
  sum = c - n;

  if (sum >= 0) {
    if (sum == 1) cout << "Dr. Chaz will have " << sum << " piece of chicken left over!";
    else cout << "Dr. Chaz will have " << sum << " pieces of chicken left over!";
  } else {
    sum = abs(sum);
    if (sum == 1) cout << "Dr. Chaz needs " << sum << " more piece of chicken!";
    else cout << "Dr. Chaz needs " << sum << " more pieces of chicken!";
  }
}