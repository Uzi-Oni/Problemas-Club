#include<bits/stdc++.h>

using namespace std;

int main() {
  int n;
  while (scanf("%d", & n) != EOF) {
    if (n == 0)
      break;
    int arr[n];
    int pos[n];
    for (int i = 0; i < n; i++)
      cin >> arr[i];

    for (int i = 0; i < n; i++)
      cin >> pos[i];
    int val = pow(2, n) + 1;
    int dp[val];
    for (int i = 0; i < pow(2, n) + 1; i++)
      dp[i] = INT_MAX;
    dp[0] = 0;
    for (int mask = 0; mask < val - 1; mask++) {
      int x = __builtin_popcount(mask);
      for (int j = 0; j < n; j++) {
        if (!(mask & (1 << j)))
          dp[mask | (1 << j)] = min(dp[mask | (1 << j)], dp[mask] + abs(j - x) + abs(pos[j] - arr[x]));
      }
    }
    cout << dp[val - 2] << "\n";
  }
}