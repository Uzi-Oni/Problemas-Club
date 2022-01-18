#include <bits/stdc++.h>


using namespace std;

int main() {
  int n;
  char s[150];
  scanf("%d", & n);
  scanf("%s", s);
  int ans = 0;
  for (int i = 0; i < n; i++) {
    if (s[i] == 'x' && s[i + 1] == 'x' && s[i + 2] == 'x')
      ans++;
  }
  printf("%d\n", ans);
  return 0;
}