#include<bits/stdc++.h>
using namespace std;
const int maxn = 1e6+6;
int n;
long long k,c[maxn];
long long gcd(long long a,long long b){
    if(b==0)return a;
    return gcd(b,a%b);
}
long long lcm(long long a,long long b){
    return a*b/gcd(a,b);
}
int main(){
    scanf("%d",&n);
    scanf("%lld",&k);
    long long tmp = 1;
    for(int i=1;i<=n;i++)
    {
        scanf("%lld",&c[i]);
        tmp=lcm(tmp,c[i]);
        tmp=gcd(tmp,k);
        if(tmp==k){
            printf("Yes\n");
            return 0;
        }
    }
    printf("No\n");
}