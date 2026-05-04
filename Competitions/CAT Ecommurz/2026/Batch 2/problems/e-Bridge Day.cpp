#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, l; cin >> n >> l;
  int months[13];
  for (int i = 1; i <= n; i++) cin >> months[i];

  // 0 31 59
  int prefix[13];
  prefix[1] = 0;
  for (int i = 2; i <= n; i++) prefix[i] = prefix[i - 1] + months[i - 1];

  bool isBridge = false;
  int prevHoliday = -1;
  for (int i = 1; i <= l; i++) {
    int d, m; cin >> d >> m;
    // 1 2
    // 31 + 2 = 33
    int day = prefix[m] + d;

    if (i > 1 && day - prevHoliday == 2) isBridge = true;
    prevHoliday = day;
  }
  
  if (isBridge) cout << "YA\n";
  else  cout << "TIDAK\n";
}