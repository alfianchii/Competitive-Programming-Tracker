#include <bits/stdc++.h>

using namespace std;

int main() {
  int tcs;
  cin >> tcs;

  while (tcs--) {
    double n, m;
    cin >> n >> m;

    int x = ceil((m - 2) / 3);
    int y = ceil((n - 2) / 3);

    cout << x * y << "\n";
  }
}