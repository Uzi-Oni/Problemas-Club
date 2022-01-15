#include <bits/stdc++.h>
using namespace std;

int arr1[5],arr2[5];
int mcd(int a, int b)
{
	if (b == 0) {
		return a;
	}
	return mcd(b, a % b);
}

int elmcm(int arr[])
{
	int ans = arr[0];
	for (int i = 1; i < 5; i++) {
		ans = (((arr[i] * ans)) / (mcd(arr[i], ans)));
	}
	return ans;
}

void final(int num[],int den[])
{
	int final_numerador=0;
	int final_denominador=elmcm(den);
	for (int i = 0; i < 5; i++) {
		final_numerador=final_numerador+(num[i])*(final_denominador/den[i]);
	}
	int MCD = mcd(final_numerador,final_denominador);
	final_numerador /= MCD;
	final_denominador /= MCD;
    if(final_denominador<0 && final_numerador<0){
        cout << final_numerador<< " / "<< final_denominador*-1;
    }
    else if(final_denominador<0){
        cout << final_numerador*-1<< " / "<< final_denominador*-1;
    }
    else
	    cout << final_numerador<< " / "<< final_denominador;
}
int main()
{
    for(int i=0; i<5; i++){
        cin>>arr1[i];
        cin>>arr2[i];
    }
	final(arr1, arr2);
	return 0;
}
