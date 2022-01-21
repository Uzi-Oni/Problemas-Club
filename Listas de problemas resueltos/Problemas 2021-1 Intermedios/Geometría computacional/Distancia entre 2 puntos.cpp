#include <bits/stdc++.h>

using namespace std;

long long a, b, c, d;
float dist(int x1, int y1, int x2, int y2) {
  return sqrt(pow(x2 - x1, 2) +
    pow(y2 - y1, 2) * 1.0);
}

int main() {
  cin >> a >> b >> c >> d;
  cout << dist(a, b, c, d);
  return 0;
}