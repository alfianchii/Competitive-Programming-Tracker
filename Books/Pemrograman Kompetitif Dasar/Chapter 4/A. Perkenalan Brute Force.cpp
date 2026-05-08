#include <bits/stdc++.h>

using namespace std;

int main() {
  string a, b; cin >> a >> b;
  int miss = 0;

  for (int i = 0; i < a.size(); i++) {
    if (a[i + miss] != b[i]) {
      miss++;
    }
  }

  if (miss == 1) cout << "Tentu saja bisa!\n";
  else cout << "Wah, tidak bisa :(\n";
}