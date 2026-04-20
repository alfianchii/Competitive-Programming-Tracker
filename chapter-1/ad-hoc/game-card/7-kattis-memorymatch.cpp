#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, k; cin >> n >> k;

  vector<string> seen(n + 1, "");
  vector<bool> matched(n + 1, false);
  for (int i = 0; i < k; i++) {
    int c1, c2; string p1, p2; cin >> c1 >> c2 >> p1 >> p2;
    seen[c1] = p1; seen[c2] = p2;
    
    if (p1 == p2) {
      matched[c1] = true;
      matched[c2] = true;
    }
  }

  int unknown = 0;
  unordered_map<string, int> known;
  for (int i = 1; i <= n; i++) {
    if (matched[i]) continue;

    if (seen[i] == "") unknown++;
    else known[seen[i]]++;
  }

  int pairs = 0;
  int single = 0;
  for (auto &card : known) {
    if (card.second == 2) pairs++;
    else if (card.second == 1) single++;
  }

  int ans = pairs;
  if (unknown == single) ans += single;
  else if (unknown == 2 && single == 0) ans += 1;

  cout << ans << "\n";
}