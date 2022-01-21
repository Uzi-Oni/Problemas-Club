#include <bits/stdc++.h>

using namespace std;
int Q, N, M;
int main() {
  cin >> Q;
  while (Q--) {
    cin >> N >> M;
    if (M == 1 || N % 2 == 0) cout << 2 << endl;
    else cout << 1 << endl;
  }
}