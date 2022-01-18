#include <bits/stdc++.h>

using namespace std;
vector < int > v[100009];
bool b[100009];
int n, m, i, x, y, a[100009];
long long s = 0;
void dfs(int z) {
  b[z] = 1;
  if (a[z] < m) m = a[z];
  for (int i = 0; i < v[z].size(); i++)
    if (!b[v[z][i]]) dfs(v[z][i]);
}
int main() {
  cin >> n >> m;
  for (i = 1; i <= n; i++) cin >> a[i];
  for (i = 0; i < m; i++) {
    cin >> x >> y;
    v[x].push_back(y);
    v[y].push_back(x);
  }
  for (i = 1; i <= n; i++)
    if (!b[i]) {
      m = 1e9;
      dfs(i);
      s += m;
    }
  cout << s;
  return 0;
}