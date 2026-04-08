#include <bits/stdc++.h>

using namespace std;

int main() {
  int restaurants; cin >> restaurants;
  string choosenOne;

  while (restaurants--) {
    int menus; cin >> menus; cin.ignore();
    string name; getline(cin, name);

    bool hasPeaSoup = false;
    bool hasPancakes = false;
    for (int i = 0; i < menus; i++) {
      string menu; getline(cin, menu);

      if (menu == "pea soup") hasPeaSoup = true;
      if (menu == "pancakes") hasPancakes = true;
    }

    if (hasPeaSoup && hasPancakes) {
      choosenOne = name;
      break;
    }
  }

  cout << (!choosenOne.empty() ? choosenOne : "Anywhere is fine I guess") << "\n";
}