#include <bits/stdc++.h>
using namespace std;
 

class gfg {

public:
    unsigned int countSetBits(int n)
    {
        unsigned int count = 0;
        while (n) {
            n &= (n - 1);
            count++;
        }
        return count;
    }
};
int h,k,num;
int main()
{
    gfg g;
    cin>>h>>k;
    for(int i=h; i<=k; i++){
        if(g.countSetBits(i)<=4)
        num++;
    }
    
 
    cout << num;
    return 0;
}
 
