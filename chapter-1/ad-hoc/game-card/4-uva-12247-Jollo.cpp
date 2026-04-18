#include <bits/stdc++.h>

using namespace std;

int main() {
  int a, b, c, x, y;

  while (
    cin >> a >> b >> c >> x >> y &&
    (a != 0 && b != 0 && c != 0 && x != 0 && y != 0)
  ) {
    vector<int> princess(3);
    int princessLo = min({a, b, c});
    int princessHi = max({a, b, c});
    princess[0] = princessLo;
    princess[2] = princessHi;
    princess[1] = a + b + c - princessLo - princessHi;
    vector<int> prince(3);
    int princeLo = min({x, y});
    int princeHi = max({x, y});
    prince[0] = princeLo;
    prince[1] = princeHi;

    int z = -1;
    for (int i = 1; i <= 52; i++) {
      int isDuplicate = false;
      for (int num : prince) if (i == num) isDuplicate = true;
      for (int num : princess) if (i == num) isDuplicate = true;
      if (isDuplicate) continue;
      
      vector<int> prince(3);
      int princeLo = min({x, y, i});
      int princeHi = max({x, y, i});
      prince[0] = princeLo;
      prince[2] = princeHi;
      prince[1] = x + y + i - princeLo - princeHi;

      int princessWin = 0; // 2
      bool usedPrincess[3] = {false}; // 1 1 0
      // 28 51 29 | 1 50 52
      for (int j = 0; j < prince.size(); j++) { // 2
        bool found = false;
        for (int k = 0; k < princess.size(); k++) {
          if (!usedPrincess[k] && princess[k] > prince[j]) {
            usedPrincess[k] = true;
            princessWin++;
            found = true;
            break;
          }
        }

        if (!found) {
          for (int k = 0; k < princess.size(); k++) {
            if (!usedPrincess[k]) {
              usedPrincess[k] = true;
              break;
            }
          }
        }
      }

      int princeWin = 3 - princessWin;
      cout << i << " " << princeWin << "\n";
      if (princeWin >= 2) {
        z = i;
        break;
      }
    }

    cout << z << "\n";
  }
}