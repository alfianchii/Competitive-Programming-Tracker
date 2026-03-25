#include <bits/stdc++.h>
using namespace std;

int main() {
  freopen("3-uva-11614.in", "r", stdin);
  freopen("3-uva-11614.out", "w", stdout);

  int t;
  cin >> t;

  while (t--) {
    long long n;
    cin >> n;

    long long lo = 0, hi = 2000000000LL;
    long long ans = 0;

    while (lo <= hi) {
      long long mid = (lo + hi) / 2;
      long long need = mid * (mid + 1) / 2;

      if (need <= n) {
        ans = mid;
        lo = mid + 1;
      } else hi = mid - 1;
    }

    cout << ans << endl;
  }
}