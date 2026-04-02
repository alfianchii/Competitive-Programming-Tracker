#include <bits/stdc++.h>

using namespace std;

int main() {
  int time; char letter; string verdict; 
  vector<int> wrongAnswers(100, 0);
  int ac = 0, score = 0;

  cin >> time >> letter >> verdict;

  while (time != -1) {
    if (verdict == "right") {
      ac++;
      score += time;
      score += 20 * wrongAnswers[letter - 'A'];
    } else wrongAnswers[letter - 'A']++;

    cin >> time >> letter >> verdict;
  }

  cout << ac << " " << score;
}