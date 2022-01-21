#include <bits/stdc++.h>

using namespace std;

long long int dp[105][2], m = 1000000007;

int main() {
  int n, k, d, i, j;
  cin >> n >> k >> d;
  dp[0][0] = 1;
  for (i = 1; i <= n; i++) {
    for (j = 1; j < d && i >= j; j++)
      dp[i][0] += dp[i - j][0];
    for (j = 1; j <= k && i >= j; j++) {
      dp[i][1] += dp[i - j][1];
      if (j >= d)
        dp[i][1] += dp[i - j][0];
    }
    dp[i][0] %= m;
    dp[i][1] %= m;
  }
  cout << dp[n][1] % m;
  return 0;
}