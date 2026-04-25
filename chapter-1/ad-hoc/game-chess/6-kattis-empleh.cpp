#include <bits/stdc++.h>

using namespace std;

void parse(const string &s, unordered_map<string, char> &mp) {
  stringstream ss(s);
  string pawn;
  
  while (getline(ss, pawn, ',')) {
    if (pawn.size() == 3) mp[pawn.substr(1)] = pawn[0];
    else mp[pawn] = 'P';
  }
}

int main() {
  unordered_map<string, char> white, black;
  
  string temp, w, b;
  getline(cin, w); w = w.substr(7);
  getline(cin, b); b = b.substr(7);

  parse(w, white);
  parse(b, black);

  int boardRow = 8;
  for (int row = 1; row <= 17; row++) {
    if (row % 2 == 1) {
      for (int col = 1; col <= 8; col++) cout << "+---";
      cout << "+\n";
    } else {
      for (int col = 1; col <= 8; col++) {
        char pawn = 0;
        cout << "|";

        char colName = 'a' + col - 1;
        string pos = string(1, colName) + to_string(boardRow);

        if (white.count(pos)) pawn = toupper(white[pos]);
        else if (black.count(pos)) pawn = tolower(black[pos]);

        bool whiteSquare = (boardRow + col) % 2 == 1;
        char bg = whiteSquare ? '.' : ':';

        if (pawn) cout << bg << pawn << bg;
        else cout << string(3, bg);
      }

      cout << "|\n";
      boardRow--;
    }
  }
}