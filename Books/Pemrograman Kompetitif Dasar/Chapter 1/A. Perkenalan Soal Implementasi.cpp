#include <bits/stdc++.h>

using namespace std;

int main() {
  int rows, cols; cin >> rows >> cols;
  int matrix[100][100];
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      cin >> matrix[i][j];
    }
  }

  for (int column = 0; column < cols; column++) {
    for (int row = rows - 1; row >= 0; row--) {
      cout << matrix[row][column] << " ";
    }
    cout << endl;
  }
}