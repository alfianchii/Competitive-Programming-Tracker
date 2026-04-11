#include <bits/stdc++.h>

using namespace std;

int main() {
  string word; getline(cin, word);
  int digits = 0, vowels = 0, consonants = 0;

  for (int c : word) {
    char ch = tolower(c);
    
    if (isdigit(ch)) digits++;
    else if (isalpha(ch)) {
      if (ch == 'a' || ch == 'i' || ch == 'u' || ch == 'e' || ch == 'o') vowels++;
      else consonants++;
    }
  }

  cout << digits << " " << vowels << " " << consonants;
}