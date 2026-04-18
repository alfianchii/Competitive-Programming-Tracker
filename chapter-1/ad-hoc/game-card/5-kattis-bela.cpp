#include <bits/stdc++.h>

using namespace std;

int main() {
  int hands; char trump; cin >> hands >> trump;
  int tcs = hands * 4;

  int score = 0;
  while (tcs--) {
    string card; cin >> card;
    char number = card[0], suit = card[1];
    if (number == 'A') score += 11;
    else if (number == 'K') score += 4;
    else if (number == 'Q') score += 3;
    else if (number == 'T') score += 10;
    else {
      if (number == 'J') {
        if (suit == trump) score += 20;
        else score += 2;
      }

      if (number == '9') {
        if (suit == trump) score += 14;
      }
    }
  }

  cout << score << "\n";
}