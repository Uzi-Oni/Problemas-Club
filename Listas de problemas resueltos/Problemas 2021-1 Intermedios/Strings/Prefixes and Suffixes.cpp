#include <bits/stdc++.h>



using namespace std;

char p[100000+10];
int f[100000+10],a[100000+10],dp[100000+10];
void getf()
{
    int m=strlen(p);
    f[0]=f[1]=0;
    for (int i=1;i<m;i++)
    {
        int j=f[i];
        while(j && p[i]!=p[j]) j=f[j];
        f[i+1]=(p[i]==p[j]?j+1:0);
    }
}

int main()
{
    cin>>p;
    getf();
    int L=strlen(p);
    int i=L,k=0;
    while(f[i]>0)
    {
        if (f[i])
        {
            a[k++]=f[i];
        }
        i=f[i];
    }
    cout<<k+1<<endl;
    memset(dp,0,sizeof(dp));
    for (int i=L;i>=0;i--)
    {
        dp[i]++;
        dp[f[i]]+=dp[i];
    }
    for (int i=k-1;i>=0;i--)
    {
        cout<<a[i]<<" "<<dp[a[i]]<<endl;
    }
    cout<<L<<" 1";
    return 0;
}