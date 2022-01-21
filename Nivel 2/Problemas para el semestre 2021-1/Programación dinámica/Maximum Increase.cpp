#include <bits/stdc++.h>

using namespace std;
int main() {
  int n, x, t, mx = 1, cnt = 1;
  cin >> n >> t;
  n--;
  while (n--) {
    cin >> x;
    if (x > t) cnt++;
    else cnt = 1;
    t = x;
    mx = max(mx, cnt);
  }
  cout << mx;
}