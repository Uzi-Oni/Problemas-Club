#include <bits/stdc++.h>


using namespace std;
 
int a[100005];
int m = 0;
 
map<int, list<int>> relation;
list<int>::iterator it;
 
int main() {
    while (cin >> m) {
        relation.clear();
        int min = 0;
        memset(a, -1, sizeof(a));
        for (int i = 0; i < m; i++) {
            cin >> a[i];
            relation[a[i]].push_back(i);
 
        }
 
        int in = 0;
        while (in < m) {
            list<int> temp = relation[a[in]];
 
            bool flag = false;
            for (it = temp.begin(); it != temp.end(); it++) {
                flag = true;
                if ((*it) <= in) {
                    flag = false;
                }
 
                for (int k = 1; k < (*it) - in; k++) {
                    if ((*it) + k > m || a[in + k] != a[(*it) + k]) {
                        flag = false;
                        break;
                    }
                }
                if (flag) {
                    in = (*it);
                    min = (*it);
                    break;
                }
            }
            if (!flag)
                in++;
        }
 
        cout << m - min << endl;
        for (int i = min; i < m; i++) {
            cout << a[i] << " ";
        }
        cout << endl;
    }
}