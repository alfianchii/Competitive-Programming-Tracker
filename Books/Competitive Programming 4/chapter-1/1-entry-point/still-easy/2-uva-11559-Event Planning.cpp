#include <bits/stdc++.h>

using namespace std;

int main() {
  int people, budget, hotel, week;

  while (cin >> people >> budget >> hotel >> week) {
    int loPrice = 1e9;

    while (hotel--) {
      int price, w = week; cin >> price;
      while (w--) {
        int bed; cin >> bed;
        if (bed >= people) loPrice = min(loPrice, price * people);
      }
    }

    if (loPrice > budget) cout << "stay home\n";
    else cout << loPrice << "\n";
  }
}