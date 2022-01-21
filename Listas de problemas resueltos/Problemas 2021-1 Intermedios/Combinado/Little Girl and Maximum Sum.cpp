#include <bits/stdc++.h>

using namespace std;

int main() {
  long long n, q, i, j, a, b;
  long long sum = 0;
  cin >> n >> q;
  long long l[n], m[n], k[n];
  for (i = 0; i < n; i += 1) {
    cin >> l[i];
    m[i] = 0;
  }
  sort(l, l + n);
  for (i = 0; i < q; i += 1) {
    cin >> a >> b;
    m[a - 1] += 1;
    m[b] -= 1;
  }
  k[0] = m[0];
  for (i = 1; i < n; i += 1) {
    k[i] = m[i] + k[i - 1];
  }
  sort(k, k + n);
  for (i = 0; i < n; i += 1)
    sum += k[i] * l[i];
  cout << sum;
}