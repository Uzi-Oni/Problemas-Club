#include<bits/stdc++.h>
using namespace std;
int a,b,n;
long long f[1000010]={1,1};
bool check(long long x)
{
    while(x)
    {
        long long z=x%10;
        if(z!=a&&z!=b)
            return false;
        x/=10;
    }
    return true;
}
long long ksm(long long x,long long y)
{
    long long ans=1;
    x=x%1000000007;
    while(y)
    {
        if(y%2)
            ans=(ans*x)%1000000007;
        y>>=1;
        x=x*x%1000000007;
    }
    return ans;
}
int main()
{
    for(int i=2;i<1000007;i++)
        f[i]=i*f[i-1]%1000000007;
    cin>>a>>b>>n;
    long long ans=0;
    for(int i=0;i<=n;i++)
    {
        long long sum=i*a+(n-i)*b;
        if(check(sum))
        {
            long long c=f[n-i]*f[i];
            ans=(ans+f[n]*ksm(c,1000000007-2))%1000000007;
        }
    }
    cout<<ans<<endl;
    return 0;
}