#include <bits/stdc++.h>

using namespace std;
unsigned long long n;

int main() {

  cin >> n;
  cout << (n ^ (n >> 1)) << endl;

  return 0;
}