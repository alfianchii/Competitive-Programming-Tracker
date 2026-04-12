#include <bits/stdc++.h>

using namespace std;

int main() {
  int tcs; cin >> tcs; cin.ignore();
  string word; getline(cin, word);

  while (tcs--) {
    string str; cin >> str;
    vector<int> positions;
    size_t pos = word.find(str);
    
    while (pos != string::npos) {
      positions.push_back(pos);
      pos = word.find(str, pos + 1);
    }

    if (positions.empty()) cout << -1 << endl;
    else for (int position : positions) cout << position << " ";
  }
}