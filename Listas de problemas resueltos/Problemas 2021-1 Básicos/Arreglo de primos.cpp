#include <bits/stdc++.h>

using namespace std;
int prim[10001];
int n, ans,x,y,flag;

bool primo(int n)
{
    if (n <= 1)
        return false;
  

    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;
  
    return true;
}

int main()
{
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>prim[i];
    }
    cin>>x>>y;
    for(int j=0; j<n; j++){
        if(prim[j]>=x && prim[j]<=y){
             primo(prim[j]) ? ans++: flag++;
        }
    }
    cout<<ans;
    return 0;
}
