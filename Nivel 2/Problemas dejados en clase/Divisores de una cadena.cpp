
#include <bits/stdc++.h>

using namespace std;
string in;
uint64_t x=0;
int main()
{
    cin>>in;
    transform(in.begin(), in.end(), in.begin(), ::toupper);
    for(int i=0; in.size()>i; i++){
        x+=in[i];
    }
    //cout<<x<<endl;
    int div = 0;
    for (int i = 1; i <= sqrt(x); i++) {
        if (x % i == 0) {
            if (x / i == i)
                div++;
                div = div + 2;
        }
    }
    cout<<div;
    return 0;
}
