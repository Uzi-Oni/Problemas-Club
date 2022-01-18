#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
int n, m;
char a[1009][1009];
int main() {
  cin >> n >> m;
  for (int i = 1; i <= n; i++)
    for (int j = 1; j <= m; j++)
      cin >> a[i][j];
  for (int i = 1; i <= n; i++)
    for (int j = 1; j <= m; j++)
      if (a[i][j] == 'W' && (a[i - 1][j] == 'S' || a[i + 1][j] == 'S' || a[i][j - 1] == 'S' || a[i][j + 1] == 'S')) {
        cout << "NO";
        return 0;
      }
  cout << "YES" << endl;
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= m; j++) {
      if (a[i][j] == '.') cout << 'D';
      else cout << a[i][j];
    }
    cout << endl;
  }
}