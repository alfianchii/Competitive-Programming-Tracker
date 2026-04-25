#include <bits/stdc++.h>

using namespace std;

int main() {
  double m, n;

  while (cin >> m >> n && (m || n)) {
    double knights = 1e9;
    if (m >= 3 && n >= 3) knights = ceil(m * n / 2);
    else if (min(m, n) == 1) knights = max(m, n);
    else {
      int hi = max(m, n);
      knights = (hi / 4) * 4 + min(4, (hi % 4) * 2);
    }
    cout << knights << " knights may be placed on a " << m << " row " << n << " column board.\n";
  }
}