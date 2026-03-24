#include <bits/stdc++.h>
#include <cstdio>
using namespace std;

int main() {
  freopen("3-uva-11614.in", "r", stdin);
  freopen("3-uva-11614.out", "w", stdout);

  int w;

  while(scanf("%d", &w) != EOF) {
    int currW = 0, row = 0;
    // printf("%d\n", w);

    for (int i = 0; i < w; i++) {
      for (int j = 0; j <= i; j++) {
        // printf("* ");
        currW++;

        if (currW == w) {
          if (j == i) row++;

          // printf("DONE %d %d", row, currW);
          printf("%d\n", row);
          break;
        }
      }

      row++;

      if (currW == w) break;
      
      // printf("\n");
    }
  }
}