#include<bits/stdc++.h>

using namespace std;
const int MAXN = 1e4 + 5;
const int MAXM = 1e3 + 5;
map < string, int > F;
string s;
int N, A[MAXN];
int main() {
  int cas = 1;
  while (~scanf("%d", & N), N) {
    int Max = 0;
    F.clear();
    memset(A, 0, sizeof(A));
    for (int i = 0; i < N; i++) {
      cin >> s;
      F[s]++;
      A[F[s]]++;
      Max = max(Max, F[s]);
    }
    printf("Case %d: ", cas++);
    for (int i = Max; i > 0; i--) {
      if (A[i] != 0) printf("%d", A[i]);
    }
    printf("\n");
  }
  return 0;
}