#include<bits/stdc++.h>

using namespace std;
int main() {
  int ar[3];
  cin >> ar[0] >> ar[1] >> ar[2];
  sort(ar, ar + 3);
  if (ar[2] < ar[0] + ar[1])
    cout << 0;
  else
    cout << ar[2] - ar[0] - ar[1] + 1;
}