#include <bits/stdc++.h>

using namespace std;

bool boundaryBoardCheck(int nr, int nc) {
  if (nr >= 0 && nr < 8 && nc >= 0 && nc < 8) return true;
  else return false;
}

bool legalQueenMove(int k, int q, int nq) {
  if (q == nq) return false;
  if (nq == k) return false;

  int rk = k / 8; int ck = k % 8;
  int rq = q / 8; int cq = q % 8;
  int rnq = nq / 8; int cnq = nq % 8;

  if (rq == rnq) {
    if (rk == rq && (ck > min(cq, cnq) && ck < max(cq, cnq))) return false;
  }
  else if (cq == cnq) {
    if (ck == cq && (rk > min(rq, rnq) && rk < max(rq, rnq))) return false;
  }
  else return false;

  return true;
}

bool allowedQueenMove(int k, int q, int nq) {
  int nr, nc, pos;
  int rk = k / 8; int ck = k % 8;

  nr = rk - 1; nc = ck;
  if (boundaryBoardCheck(nr, nc)) {
    pos = nr * 8 + nc;
    if (pos == nq) return false;
  }

  nr = rk + 1; nc = ck;
  if (boundaryBoardCheck(nr, nc)) {
    pos = nr * 8 + nc;
    if (pos == nq) return false;
  }

  nr = rk; nc = ck - 1;
  if (boundaryBoardCheck(nr, nc)) {
    pos = nr * 8 + nc;
    if (pos == nq) return false;
  }

  nr = rk; nc = ck + 1;
  if (boundaryBoardCheck(nr, nc)) {
    pos = nr * 8 + nc;
    if (pos == nq) return false;
  }

  return true;
}

bool validKingMove(int k, int q, int nq) {
  int nr, nc, pos;
  int rk = k / 8; int ck = k % 8;
  int rnq = nq / 8; int cnq = nq % 8;

  nr = rk - 1; nc = ck;
  if (boundaryBoardCheck(nr, nc)) {
    pos = nr * 8 + nc;
    if (pos != nq && !(nr == rnq || nc == cnq)) return true;
  }

  nr = rk + 1; nc = ck;
  if (boundaryBoardCheck(nr, nc)) {
    pos = nr * 8 + nc;
    if (pos != nq && !(nr == rnq || nc == cnq)) return true;
  }

  nr = rk; nc = ck - 1;
  if (boundaryBoardCheck(nr, nc)) {
    pos = nr * 8 + nc;
    if (pos != nq && !(nr == rnq || nc == cnq)) return true;
  }

  nr = rk; nc = ck + 1;
  if (boundaryBoardCheck(nr, nc)) {
    pos = nr * 8 + nc;
    if (pos != nq && !(nr == rnq || nc == cnq)) return true;
  }

  return false;
}

int main() {
  int k, q, nq;

  while (cin >> k >> q >> nq) {
    if (k == q) {
      cout << "Illegal state\n";
      continue;
    }

    if (!legalQueenMove(k, q, nq)) {
      cout << "Illegal move\n";
      continue;
    }

    if (!allowedQueenMove(k, q, nq)) {
      cout << "Move not allowed\n";
      continue;
    }

    if (validKingMove(k, q, nq)) {
      cout << "Continue\n";
      continue;
    } else {
      cout << "Stop\n";
      continue;
    }
  }
}