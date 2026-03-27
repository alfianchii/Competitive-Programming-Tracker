#include <bits/stdc++.h>

using namespace std;

int main() {
  int a, b, c, n, sum;
  cin >> a >> b >> c >> n;
  sum = a + b + c;
  
  if (a > 0 && b > 0 && c > 0 && sum >= n && n >= 3) cout << "YES";
  else cout << "NO";
}