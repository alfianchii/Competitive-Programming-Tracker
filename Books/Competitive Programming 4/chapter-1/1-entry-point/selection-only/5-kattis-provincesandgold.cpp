#include <bits/stdc++.h>

using namespace std;

int main() {
  int g, s, c;
  string victoryCard = "", treasure = "";

  cin >> g >> s >> c;
  int buyingPower = (g * 3) + (s * 2) + (c * 1);

  if (buyingPower >= 8) {
    victoryCard = "Province";
  }
  else if (buyingPower >= 5) {
    victoryCard = "Duchy";
  }
  else if (buyingPower >= 2) {
    victoryCard = "Estate";
  }

  if (buyingPower >= 6) {
    treasure = "Gold";
  }
  else if (buyingPower >= 3) {
    treasure = "Silver";
  }
  else if (buyingPower >= 0) {
    treasure = "Copper";
  }

  cout << (victoryCard != "" ? victoryCard + " or " + treasure : treasure);
}