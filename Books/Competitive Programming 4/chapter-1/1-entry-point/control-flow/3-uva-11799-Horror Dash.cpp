#include <bits/stdc++.h>

using namespace std;

int main() {
  int tcs; cin >> tcs;
  int count = 1;

  while (tcs--) {
    int n; cin >> n;
    int s, high = 0;

    while (n--) {
      cin >> s;
      if (s > high) high = s;
    }

    cout << "Case " << count << ": " << high << "\n";

    count++;
  }
}