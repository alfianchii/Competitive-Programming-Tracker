#include <algorithm>
#include <cstdio>
#include <vector>

using std::vector;

int main() {
  freopen("shell.in", "r", stdin);

  int n;
  scanf("%d", &n);

  vector<int> shell_at_pos(3);
  for (int i = 0; i < 3; i++) { shell_at_pos[i] = i; } // 0 1 2

  vector<int> counter(3);
  for (int i = 0; i < n; i++) {
    int a, b, g; // 121, 321, 131
    scanf("%d %d %d", &a, &b, &g);
    a--, b--, g--; // 010, 210, 020

    std::swap(shell_at_pos[a], shell_at_pos[b]); // 102, 120, 021
    // 0, 0, 0
    // 1, 2, 0
    counter[shell_at_pos[g]]++;
  }

  for (int x : counter) { printf("%d", x); }

  freopen("shell.out", "w", stdout);
  printf("%d\n", std::max({counter[0], counter[1], counter[2]}));
}