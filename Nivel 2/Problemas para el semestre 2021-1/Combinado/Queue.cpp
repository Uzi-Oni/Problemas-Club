#include <bits/stdc++.h>

using namespace std;
int main() {
  long long int n, t[100010], c = 0, d = 0;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> t[i];
  }
  sort(t, t + n);
  d = 1;
  c = c + t[0];
  for (int i = 1; i < n; i++) {
    if (t[i] >= c) {
      c = c + t[i];
      d++;
    }
  }
  cout << d << endl;
}