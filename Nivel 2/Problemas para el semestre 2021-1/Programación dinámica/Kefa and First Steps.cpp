#include <bits/stdc++.h>


using namespace std;
int n, m, l, t, pt;
int main() {
  cin >> n;
  for (; cin >> t; pt = t, (m = (l > m) ? l : m))(pt > t) ? l = 1 : l++;
  cout << m;
}