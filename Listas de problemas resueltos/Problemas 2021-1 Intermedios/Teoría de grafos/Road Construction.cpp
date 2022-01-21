#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  int arr[n];
  for (int i = 0; i < m; i++) {
    int a, b;
    cin >> a >> b;
    arr[a] = 1;
    arr[b] = 1;
  }

  cout << n - 1 << endl;

  int q;

  for (int i = 0; i <= n; i++) {
    if (arr[i] != 1) {
      q = i;
    }
  }

  for (int i = 1; i <= n; i++) {
    if (i == q) {
      continue;
    }
    cout << q << " " << i << endl;
  }
}