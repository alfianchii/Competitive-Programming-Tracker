#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  freopen("speeding.in", "r", stdin);

  int n, m;
  scanf("%d %d", &n, &m);

  vector<int> roadMil(n);
  vector<int> roadMph(n); 
  for (int i = 0; i < n; i++) { scanf("%d %d", &roadMil[i], &roadMph[i]); }
  
  vector<int> bessieMil(m);
  vector<int> bessieMph(m);
  for (int i = 0; i < m; i++) { scanf("%d %d", &bessieMil[i], &bessieMph[i]); }

  int j = 0, maxViolation = 0;
  for (int i = 0; i < n; i++) {
    while (j < m) {
      int diff = min(roadMil[i], bessieMil[j]);
      roadMil[i] -= diff;
      bessieMil[j] -= diff;

      int over = bessieMph[j] - roadMph[i];
      if (over > maxViolation) { maxViolation = over; }

      if (roadMil[i] == 0) {
        if (bessieMil[j] == 0) { j++; }
        break;
      }
      if (bessieMil[j] == 0) { 
        j++;
        continue;
      }
    }
  }

  freopen("speeding.out", "w", stdout);
  cout << maxViolation << "\n";
}
