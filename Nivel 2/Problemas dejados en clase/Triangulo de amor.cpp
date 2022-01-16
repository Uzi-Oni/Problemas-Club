
#include <iostream>

using namespace std;
int n,x,y,z,i,t=0;
int main()
{
    cin>>n;
    int av[n];
    
    for(int i=0; n>i; i++){
        cin>>av[i];
    }
    for(int i=0; n>i; i++){
        
            x=av[i];
            y=av[x-1];
            z=av[y-1];
    
            if(z==i+1)
                t=1;
    }
     if(t==1)
                cout<<"YES";
                    else
                cout<<"NO";
    
    
}
