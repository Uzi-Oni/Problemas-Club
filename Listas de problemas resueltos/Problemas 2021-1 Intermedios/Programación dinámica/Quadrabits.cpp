#include <bits/stdc++.h>


using namespace std;

string s;
short n, p, o, k;
unsigned int num;

int main() {

  cin >> s >> n;

  for (int i = 0; i < s.size(); i++) {
    num += ((s[i] - 48) * (1 << (s.size() - i - 1)));
  }

  while (n--) {
    cin >> o >> k;
    if (o == 1)
      num = (num >> k);
    else
      num = (num << k);
  }

  cout << num << endl;

  return 0;
}