#include <bits/stdc++.h>

using namespace std;

int MILE_DURATION = 29;
int MILE_PRICE = 10;
int JUICE_DURATION = 59;
int JUICE_PRICE = 15;

int main() {
  int tcs, count = 1; cin >> tcs;

  while (tcs--) {
    int durations; cin >> durations;
    int mile = 0, juice = 0;

    cout << "Case " << count++ << ": ";
    while (durations--) {
      double sec; cin >> sec;
      mile += ceil(sec/MILE_DURATION) * MILE_PRICE;
      juice += ceil(sec/JUICE_DURATION) * JUICE_PRICE;
    }

    if (mile < juice) cout << "Mile " << mile << "\n";
    else if (juice < mile) cout << "Juice " << juice << "\n";
    else if (mile == juice) cout << "Mile Juice " << mile << "\n";
  }
}