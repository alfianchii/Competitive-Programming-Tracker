#include <bits/stdc++.h>

using namespace std;

double getPrice(double p, double a, double b, double c, double d, double k) {
  return p * (sin(a * k + b) + cos(c * k + d) + 2);
}

int main() {
  double p, a, b, c, d; int n;
  cin >> p >> a >> b >> c >> d >> n;
  double hiPrice = getPrice(p, a, b, c, d, 1);
  double hiDecline = 0;

  for (int k = 2; k <= n; k++) {
    double price = getPrice(p, a, b, c, d, k);
    double decline = hiPrice - price;

    if (decline > hiDecline) hiDecline = decline;
    else if (price > hiPrice) hiPrice = price;
  }

  cout << fixed << setprecision(9) << hiDecline;
}