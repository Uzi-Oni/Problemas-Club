#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, d, m;
  cin >> n >> d >> m;
  for (int i = 0; i < m; i++) {
    int x, y;
    cin >> x >> y;
    if (y <= x + d && y >= x - d && y >= -x + d && y <= -x + 2 * n - d) cout << "YES" << endl;
    else cout << "NO" << endl;
  }
  return 0;
}