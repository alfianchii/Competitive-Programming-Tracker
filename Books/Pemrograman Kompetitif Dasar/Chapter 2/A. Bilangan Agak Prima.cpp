#include <bits/stdc++.h>

using namespace std;

int main() {
  int t; cin >> t;

  while (t--) {
    int n; cin >> n;
    
    int sum = 0;
    for (int i = 1; i * i <= n; i++) {
      if (n % i == 0) {
        int pair = n / i;
        if (i == pair) sum += 1;
        else sum += 2;
      }

      if (sum > 4) break;
    }

    if (sum <= 4) cout << "YA\n";
    else cout << "BUKAN\n";
  }
}