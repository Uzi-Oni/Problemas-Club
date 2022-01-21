#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  int p[n], res = 0;
  set < int > s;
  for (int i = 0; i < n; ++i) {
    cin >> p[i];
    if (i + 1 == p[i]) {
      res++;
    } else {
      s.insert(p[i]);
    }
  }
  cout << res + (s.size() / 2) << endl;
  return 0;
}