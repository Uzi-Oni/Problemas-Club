#include<bits/stdc++.h>

using namespace std;
int main() {
  long long n, x, y, i, mx = 0;
  cin >> n;
  for (i = 0; i < n; i++) {
    cin >> x >> y;
    mx = max(mx, x + y);
  }
  cout << mx;
}