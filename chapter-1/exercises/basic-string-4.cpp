#include <bits/stdc++.h>

using namespace std;

int main() {
  string word;
  vector<string> tokens;

  while (cin >> word) {
    string temp = "";
    for (char ch : word) {
      if (ch != ' ' && ch != '.') temp += tolower(ch);
    }
    tokens.push_back(temp);
  }

  sort(tokens.begin(), tokens.end());

  for (string token : tokens) cout << token << "\n";

  unordered_map<string, int> freq;
  for (string token : tokens) freq[token]++;
  string ans; int maxFreq = 0;
  for (auto &fr : freq) {
    if (fr.second > maxFreq) {
      maxFreq = fr.second;
      ans = fr.first;
    }
  }

  cout << "Smallest: " << tokens[0] << "\n";
  cout << "Most frequent: " << ans << " (" << maxFreq << " times)\n";
}