#include <bits/stdc++.h>

using namespace std;

int main() {
  int a, c;

  while (cin >> a >> c && (a || c)) {
    vector<int> x(c);
    for (int i = 0; i < c; i++) cin >> x[i];

    int ans = a - x[0];

    for (int i = 1; i < c; i++) {
      if (x[i] < x[i - 1]) ans += x[i - 1] - x[i];
    }
    
    cout << ans << "\n";
  }
}