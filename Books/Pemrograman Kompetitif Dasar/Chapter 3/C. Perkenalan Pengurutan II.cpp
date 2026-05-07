#include <bits/stdc++.h>

using namespace std;

int main() {
  int n; cin >> n;
  vector<string> words(n);
  for (int i = 0; i < n; i++) cin >> words[i];

  sort(words.begin(), words.end(), [](string a, string b) {
    if (a.length() != b.length()) return a.length() < b.length();
    return a < b;
  });

  for (string word : words) cout << word << "\n";
}