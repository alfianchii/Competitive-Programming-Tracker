#include <bits/stdc++.h>

using namespace std;

int main() {
  string num;

  while (cin >> num && num != "END") {
    string prev = num;
    string curr = to_string(num.length());
    int counter = 1;

    while (curr != prev) {
      prev = curr;
      curr = to_string(prev.length());
      counter++;
    }

    cout << counter << "\n";
  }
}