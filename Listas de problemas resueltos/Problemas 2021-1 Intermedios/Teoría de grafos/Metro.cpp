#include<bits/stdc++.h>

using namespace std;
int main() {
  int n, s, i;
  cin >> n >> s;
  s--;
  int a[n], b[n];
  for (i = 0; i < n; i++) cin >> a[i];
  for (i = 0; i < n; i++) cin >> b[i];
  for (i = 0; i < n; i++)
    if ((a[0] == 1 && a[i] == 1 && b[i] == 1 && b[s] == 1 && i > s) || a[0] == 1 && a[s] == 1) {
      cout << "YES" << endl;
      return 0;
    }
  cout << "NO" << endl;
  return 0;
}