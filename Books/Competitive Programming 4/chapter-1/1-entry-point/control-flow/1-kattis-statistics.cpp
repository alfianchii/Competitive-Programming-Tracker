#include <bits/stdc++.h>

using namespace std;

int main() {
  int x, n, count = 1;
  string line;

  while (cin >> x) {
    int low = 1e6;
    int high = -1e6;

    while (x--) {
      cin >> n;
      if (n > high) high = n;
      if (n < low) low = n;
    }

    cout << "Case " << count << ": ";
    cout << low << " " << high << " " << high - low << "\n";

    count++;
  }
}