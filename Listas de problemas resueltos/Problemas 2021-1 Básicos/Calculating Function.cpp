#include<bits/stdc++.h>

using namespace std;

int main() {
  long long n, res = 0;
  int x = -1;
  cin >> n;
  if (n % 2 == 0) res = n - (n / 2);
  else res = -n + (n / 2);

  cout << res;
}