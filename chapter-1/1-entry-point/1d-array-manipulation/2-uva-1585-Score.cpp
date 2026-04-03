#include <bits/stdc++.h>

using namespace std;

int main() {
  int tcs; cin >> tcs;

  while (tcs--) {
    string score; cin >> score;
    int len = score.length();
    int points[len];
    memset(points, 0, sizeof(points));

    int sum = 0;
    for (int i = 0; i < len; i++) {
      if (score[i] == 'O') {
        if (i == 0) points[i] = 1;
        else  points[i] = points[i - 1] + 1;
        sum += points[i];
      }
    }
  }
}