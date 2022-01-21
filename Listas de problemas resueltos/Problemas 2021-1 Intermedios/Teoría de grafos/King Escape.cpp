#include<bits/stdc++.h>

using namespace std;
int main() {
  int n, ax, ay, bx, by, cx, cy, x = 0;
  cin >> n >> ax >> ay >> bx >> by >> cx >> cy;
  if (ax < bx && ax < cx || ax > bx && ax > cx) x++;
  if (ay < by && ay < cy || ay > by && ay > cy) x++;
  if (x == 2) cout << "YES" << endl;
  else cout << "NO" << endl;
  return 0;
}