#include <bits/stdc++.h>

using namespace std;

int a[3], d, res = 0;

int main() {
  cin >> a[0] >> a[1] >> a[2] >> d;
  sort(a, a + 3);
  cout << max(a[0] - a[1] + d, 0) + max(a[1] + d - a[2], 0);

  return 0;
}