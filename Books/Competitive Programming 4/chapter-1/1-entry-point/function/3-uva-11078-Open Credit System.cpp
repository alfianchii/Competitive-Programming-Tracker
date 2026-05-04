#include <bits/stdc++.h>

using namespace std;

int main() {
  int tcs; cin >> tcs;

  while (tcs--) {
    int n; cin >> n;
    long long senior; cin >> senior;
    long long res = -1e9;

    for (int i = 1; i < n; i++) {
      long long j; cin >> j;

      res = max(res, senior - j);
      senior = max(senior, j);
    }

    cout << res << endl;
  }
}