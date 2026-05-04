#include <bits/stdc++.h>

using namespace std;

int main() {
  int digit; string key, pass; cin >> digit >> key >> pass;

  string tempKey = key;
  for (int i = 0; i < 10; i++) {
    if (tempKey == pass) break;

    for (int j = 0; j < digit; j++) {
      if (tempKey[j] == '9') tempKey[j] = '0';
      else tempKey[j]++;
    }
  }

  if (tempKey == pass) cout << "YA\n";
  else cout << "TIDAK\n";
}