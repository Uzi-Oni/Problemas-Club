#include <bits/stdc++.h>

using namespace std;
int main() {
  int n, k;
  cin >> n >> k;
  deque < int > v;
  set < int > s;
  int b;
  for (int i = 0; i < n; i++) {
    cin >> b;
    if (s.find(b) == s.end()) {
      if (s.size() == k) {
        s.erase(v[k - 1]);
        v.pop_back();
      }
      s.insert(b);
      v.push_front(b);
    }
  }
  cout << v.size() << "\n";
  for (auto x: v) {
    cout << x << " ";
  }
  return 0;
}