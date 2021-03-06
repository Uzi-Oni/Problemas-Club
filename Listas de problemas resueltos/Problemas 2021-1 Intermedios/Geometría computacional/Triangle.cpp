#include <bits/stdc++.h>

using namespace std;

int x[3];
int y[3];

bool rt() {
  int a, b, c;
  a = (x[1] - x[0]) * (x[1] - x[0]) + (y[1] - y[0]) * (y[1] - y[0]);
  b = (x[2] - x[0]) * (x[2] - x[0]) + (y[2] - y[0]) * (y[2] - y[0]);
  c = (x[1] - x[2]) * (x[1] - x[2]) + (y[1] - y[2]) * (y[1] - y[2]);
  if (a == 0 || b == 0 || c == 0)
    return false;
  if (a + b == c || a + c == b || b + c == a)
    return true;
  return false;
}

int main() {
  for (int i = 0; i < 3; i++) {
    cin >> x[i] >> y[i];
  }
  if (rt()) {
    cout << "RIGHT";
    return 0;
  }
  int flag = 0;
  for (int i = 0; i < 3; i++) {
    x[i] += 1;
    if (rt()) {
      cout << "ALMOST";
      return 0;
    }
    x[i] -= 2;
    if (rt()) {
      cout << "ALMOST";
      return 0;
    }
    x[i] += 1;
    y[i] += 1;
    if (rt()) {
      cout << "ALMOST";
      return 0;
    }
    y[i] -= 2;
    if (rt()) {
      cout << "ALMOST";
      return 0;
    }
    y[i] += 1;
  }
  cout << "NEITHER";
  return 0;
}