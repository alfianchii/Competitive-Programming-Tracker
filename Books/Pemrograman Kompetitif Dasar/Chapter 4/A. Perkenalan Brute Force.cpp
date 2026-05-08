#include <bits/stdc++.h>

using namespace std;

int main() {
  string a, b; cin >> a >> b;

  int miss = 0, i = 0, j = 0;
  while (i < a.size() && j < b.size()) {
    if (a[i] == b[j]) {
      i++;
      j++;
    } else {
      miss++;
      i++;
    }
  }
  
  if (miss <= 1) cout << "Tentu saja bisa!\n";
  else cout << "Wah, tidak bisa :(\n";
}