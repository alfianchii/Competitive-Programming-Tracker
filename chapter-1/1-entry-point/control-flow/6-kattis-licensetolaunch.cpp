#include <bits/stdc++.h>

using namespace std;

int main() {
  int n; cin >> n;
  int d = 1e9, idx;

  for (int i = 0; i < n; i++) {
    int junk; cin >> junk;
    if (junk < d) {
      d = junk;
      idx = i;
    }
  }

  cout << idx;
}