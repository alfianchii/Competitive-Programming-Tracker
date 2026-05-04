#include <bits/stdc++.h>

using namespace std;

int main() {
  int x, y, n; cin >> x >> y >> n;
  bool isFizz, isBuzz;

  for (int i = 1; i <= n; i++) {
    isFizz = i % x == 0; isBuzz = i % y == 0;
    
    if (isFizz && isBuzz) cout << "FizzBuzz\n";
    else if (isFizz) cout << "Fizz\n";
    else if (isBuzz) cout << "Buzz\n";
    else cout << i << "\n";
  }
}