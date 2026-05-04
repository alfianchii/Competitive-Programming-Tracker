#include <bits/stdc++.h>

using namespace std;

int main() {
  int tcs; cin >> tcs; cin.ignore();

  while (tcs--) {
    string s; getline(cin, s);

    stack<int> bucket;
    int water = 0;

    for (int i = 0; i < s.size(); i++) {
      if (s[i] == '\\') bucket.push(i);
      else if (s[i] == '/' && !bucket.empty()) {
          int j = bucket.top(); bucket.pop();
          water += (i - j);
      }
    }

    cout << water << "\n";
  }
}