#include <bits/stdc++.h>

using namespace std;

struct Piece {
  char type;
  char col;
  int row;
};

int getPriority(char c) {
  if (c == 'K') return 1;
  if (c == 'Q') return 2;
  if (c == 'R') return 3;
  if (c == 'B') return 4;
  if (c == 'N') return 5;
  return 6;
}

int main() {
  string board; vector<Piece> white, black;
  unordered_map<char, bool> whiteMap = { {'K', true}, {'Q', true}, {'R', true}, {'B', true}, {'N', true}, {'P', true} };
  unordered_map<char, bool> blackMap = { {'k', true}, {'q', true}, {'r', true}, {'b', true}, {'n', true}, {'p', true} };

  int row = 8;
  while (cin >> board) {
    if (board[0] == '+') continue;

    int col = 1;
    for (int i = 2; i < board.size(); i++) {
      char pawn = board[i];
      char color = board[i - 1];
      char colName = 'a' + col - 1;
      if (pawn == ':' || pawn == '.') {
        i += 3;
        col++;
        continue;
      }

      Piece p;
      p.type = toupper(pawn);
      p.col = colName;
      p.row = row;

      if (whiteMap[pawn]) white.push_back(p);
      if (blackMap[pawn]) black.push_back(p);

      i += 3;
      col++;
    }

    row--;
  }

  cout << "White:\n";
  for (Piece pawn : white) cout << pawn.type << pawn.col << pawn.row << ", ";
  cout << endl;
  
  cout << "Black:\n";
  for (Piece pawn : black) cout << pawn.type << pawn.col << pawn.row << ", ";
  cout << endl;
}