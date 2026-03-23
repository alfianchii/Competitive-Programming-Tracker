#include <bits/stdc++.h>
using namespace std;
// Ini Taka
int main() {
  freopen("2-uva-10071.in", "r", stdin);
  freopen("2-uva-10071.out", "w", stdout);

  while (1) {
    int v, ans = 1;
    char dummy;

    while (scanf("%d%c", &v, &dummy) != EOF) {
      ans *= v;
      if (dummy == '\n') break;
    }

    printf("%d\n", ans * 2);
    if (feof(stdin)) break;
  }
}