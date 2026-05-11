#include <bits/stdc++.h>

using namespace std;

const int MAX = 1000001;

int main() {
  int t; cin >> t;
  vector<bool> isPrime(MAX, true);

  vector<int> primes;
  for (int i = 2; i < MAX; i++) {
    if (isPrime[i]) {
      int temp = i;
      primes.push_back(i);

      while (temp < MAX) {
        temp = temp + i;
        if (temp < MAX) isPrime[temp] = false;
      }
    }
  }

  while (t--) {
    int k; cin >> k;
    cout << primes[k - 1] << "\n";
  }
}