#include <bits/stdc++.h>
using namespace std;

int contar(int n)
{
    if (n < 0)
        return 0;
    if (n <= 1)
        return 1;
    double digits = 0;
    for (int i=2; i<=n; i++)
        digits += log10(i);
    return floor(digits) + 1;
}
int n;
int main()
{
    cin>>n;
    cout <<n<<"! tiene "<< contar(n)<<" digitos" << endl;

    return 0;
}