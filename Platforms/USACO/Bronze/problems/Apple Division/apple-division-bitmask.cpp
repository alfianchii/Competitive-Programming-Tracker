#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  freopen("apple.in", "r", stdin);

  int n;
  cin >> n;
  vector<ll> weights(n);
  for (ll &w : weights) { cin >> w; }

  ll ans = INT64_MAX;
  for (int mask = 0; mask < (1 << n); mask++) {
    ll sum1 = 0;
    ll sum2 = 0;
    for (int i = 0; i < n; i++) {
      cout << "====== " << (1 << i) << endl;
      cout << mask << endl;
      if (mask & (1 << i)) {
        sum1 += weights[i];
      } else {
        sum2 += weights[i];
      }
    }


    ans = min(ans, abs(sum1 - sum2));
    cout << "===================== " << sum1 << " " << sum2 << endl;
  }

  freopen("apple.out", "w", stdout);
  cout << ans << endl;
}