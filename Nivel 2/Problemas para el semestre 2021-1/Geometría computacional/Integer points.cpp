#include <bits/stdc++.h>

using namespace std;
int main() {
  int t;
  cin >> t;
  while (t--) {
    long long n, m, x = 0, y = 0, y1 = 0, x1 = 0;
    cin >> n;
    int p[n];
    for (int i = 0; i < n; i++) {
      cin >> p[i];
      if (p[i] % 2 == 0)
        x++;
      else
        y++;
    }

    cin >> m;
    int q[m];
    for (int i = 0; i < m; i++) {
      cin >> q[i];
      if (q[i] % 2 == 0)
        x1++;
      else
        y1++;
    }

    cout << x * x1 + y * y1 << endl;
  }
}