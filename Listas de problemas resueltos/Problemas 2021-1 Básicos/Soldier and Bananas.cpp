#include <bits/stdc++.h>

using namespace std;
int main() {
  int n, o, k;
  cin >> k >> o >> n;
  cout << max(0, (n * (n + 1) / 2) * k - o);
}