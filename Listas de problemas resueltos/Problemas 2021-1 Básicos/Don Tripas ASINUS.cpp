#include<bits/stdc++.h>

using namespace std;

int main() {
  int n, ans = 0, k;
  cin >> n;
  if (n <= 0) {
    cout << "INVALIDO";
    return 0;
  }

  for (int i = 0; i < n; i++) {
    cin >> k;
    switch (k) {
    case 1:
      ans += 3;
      break;
    case 2:
      ans += 5;
      break;
    case 3:
      ans += 4;
      break;

    default:
      cout << "INVALIDO";
      return 0;
      break;
    }
  }
  cout << ans;
  return 0;

}