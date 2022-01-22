#include <bits/stdc++.h>

using namespace std;
int n,ans;



int main()
{
    cin>>n;
    int arr[n-1];
    int sol[n-1];
    
    for(int i=0; i<n; i++){
        sol[i]=0;
    }
    sol[n-1]=50;
    
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    int y=0, x=0;
    
    while(x!=sol[n-1]){
        y+=arr[y];
        x=sol[y];
        ans++;
    }
    cout<<ans;
    return 0;
}