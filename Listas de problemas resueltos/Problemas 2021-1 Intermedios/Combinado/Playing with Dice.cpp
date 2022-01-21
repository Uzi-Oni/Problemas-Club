#include <bits/stdc++.h>

using namespace std;

int main() {
  int a, b, x = 0, y = 0, z = 0, m, n;
  cin >> a >> b;
  for (int i = 1; i <= 6; i++) {
    m = abs(a - i);
    n = abs(b - i);
    if (m < n) x++;
    else if (m > n) z++;
    else y++;
  }
  cout << x << " " << y << " " << z;
  return 0;
}