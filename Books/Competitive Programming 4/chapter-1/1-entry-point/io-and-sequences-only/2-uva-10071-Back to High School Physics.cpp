#include <bits/stdc++.h>
using namespace std;
int main() {
  freopen("2-uva-10071.in", "r", stdin);
  freopen("2-uva-10071.out", "w", stdout);

  int v, t;
  while (scanf("%d %d", &v, &t) != EOF) {
    printf("%d\n", v * t * 2);
  }
}