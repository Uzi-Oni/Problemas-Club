#import < bits / stdc++.h >
using namespace std;
int i, m, n, s, t, p[1005];
int main() {
      for (cin >> t; t--;) {
        cin >> n >> m;
        for (i = s = 0; i++ < n;) {
          cin >> p[i];
          s += p[i];
        }
        if (m < n || n < 3) cout << -1 << endl;
        else {
          cout << 2 * s << endl;
          for (i = 0; i++ < n;) cout << i << ' ' << (i < n ? i + 1 : 1) << endl;
        }
      }
    }