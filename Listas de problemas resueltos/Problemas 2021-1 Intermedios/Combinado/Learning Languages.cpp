#include <bits/stdc++.h>

using namespace std;

vector < int > v[220];
bool vis[220];

void dfs(int x) {
  vis[x] = true;
  for (int i = 0; i < v[x].size(); i++) {
    int u = v[x][i];
    if (!vis[u]) dfs(u);
  }
  return;
}

int main() {
  int n, m;
  int k, x;
  int c = 0, count = 0;

  cin >> n >> m;

  for (int i = m + 1; i <= m + n; i++) {
    cin >> k;
    if (k == 0) c++;
    for (int j = 1; j <= k; j++) {
      cin >> x;
      v[x].push_back(i);
      v[i].push_back(x);
    }
  }

  if (c == n) {
    cout << n;
    return 0;
  }

  for (int i = m + 1; i <= m + n; i++)
    if (!vis[i]) {
      dfs(i);
      count++;
    }

  cout << count - 1;

}