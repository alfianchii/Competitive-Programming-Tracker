#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int n;
vector<long long> weights;

ll recurse_apples(int index, ll sum1, ll sum2) {
  if (index == n) { return abs(sum1 - sum2); }

  return min(
    recurse_apples(index + 1, sum1 + weights[index], sum2),
    recurse_apples(index + 1, sum1, sum2 + weights[index])
    /*
      - (1, 0 + 3, 0) -> 1
        - (2, 3 + 2, 0) -> 1
          - (3, 5 + 4, 0) -> 9
          - (3, 5, 0 + 4) -> 1
        - (2, 3, 0 + 2) -> 3
          - (3, 3 + 4, 2) -> 5
          - (3, 3, 2 + 4) -> 3
      
      - (1, 0, 0 + 3) -> 1
        - (2, 0 + 2, 3) -> 3
          - (3, 2 + 4, 3) -> 3
          - (3, 2, 3 + 4) -> 5
        - (2, 0, 2 + 3) -> 1
          - (3, 0 + 4, 5) -> 1
          - (3, 0, 5 + 4) -> 9
    */
  ); // return min(1, 1) -> 1
}

int main() {
  freopen("apple.in", "r", stdin);

  cin >> n;
  weights.resize(n);
  for (int i = 0; i < n; i++) { cin >> weights[i]; }

  freopen("apple.out", "w", stdout);
  cout << recurse_apples(0, 0, 0) << endl;
}