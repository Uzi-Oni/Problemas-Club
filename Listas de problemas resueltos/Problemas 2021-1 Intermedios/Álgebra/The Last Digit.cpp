#include <bits/stdc++.h>
using namespace std;

int ultimo(int x, int y)
{
	int res = 1;
	for (int i = 0; i < y; i++)
		res = (res * x) % 10;
	return res;
}
int a,b,n;
int main(){
cin >> n;
for(int i=0; i<n; i++){
    cin>>a>>b;
    cout<<ultimo(a, b)<<endl;
    }
return 0;
}
