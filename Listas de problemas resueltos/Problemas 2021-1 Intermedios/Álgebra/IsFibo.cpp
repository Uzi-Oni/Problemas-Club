#include <bits/stdc++.h>

using namespace std;
int n, k;
int cuadradoperfecto(int x) {
  int s = (int) sqrt(x);
  return (s * s == x);
}
int IsFibo(int x) {
  return cuadradoperfecto(5 * x * x + 4) ||
    cuadradoperfecto(5 * x * x - 4);
}
int main(void) {

  cin >> k;
  for (int i = 0; i < k; i++) {
    cin >> n;
    if (n > 0) {
      if (IsFibo(n) == 1) {
        cout << "IsFibo" << endl;
      } else {
        cout << "IsNotFibo" << endl;
      }
    }

  }
  return 0;
}