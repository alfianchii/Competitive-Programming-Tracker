#include <bits/stdc++.h>

using namespace std;

int main() {
  int tcs; cin >> tcs;

  while (tcs--) {
    int lastScore = 0, sumScore = 0;
    string score; cin >> score;

    for (char s : score) {
      if (s == 'O') {
        lastScore++;
        sumScore += lastScore;
      }
      else if (s == 'X') lastScore = 0;
    }

    cout << sumScore << "\n";
  }
}