#include <bits/stdc++.h>

using namespace std;

int main() {
  int tcs;
  cin >> tcs;

  while (tcs--) {
    int n;
    cin >> n;

    n *= 567;
    n /= 9;
    n += 7492;
    n *= 235;
    n /= 47;
    n -= 498;
    n = abs(n);

    cout << (n / 10) % 10 << "\n";
  }
}