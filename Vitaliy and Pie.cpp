#include <iostream>

using namespace std;

int main()
{
    int n,l;
    char x,y;
    string s,m,M;
    int k=0;
    cin>>n;
    cin>>s;    
    int e;
    l=(n-1)*2;
    k=n-1;
    for(int i=0; i<l; i++){
        if(i%2==0){
            m+=s[i];
        }
        else
            M+=s[i];
    }
   // cout<<m<<endl<<M<<endl;
    for(int i=0; i<(n-1); i++){
        for(int j=0; j<=i; j++){
            y=m[j];
            x=M[i]+32;
            //cout<<x<<endl<<y<<endl;
            if(x==y){
                m[j]=0;
                k--;
            }
            
        }
   
    }
    cout<<k;
    return 0;
}
