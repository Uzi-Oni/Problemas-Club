#include <iostream>
using namespace std;

int main()
{

    long long n;
    while(cin >> n && n)
    {
        long long tmp = n;
        for(register long long i = 2; i * i <= tmp; i++)
        {
            long long cnt = 0;
            if(n % i == 0)
            {
                while(n % i == 0)
                {
                    cnt++;
                    n /= i;
                }
                cout << i << "^" << cnt << " ";
            }
        }
        if(n != 1)
        {
            cout << n << "^1";
        }
        cout << endl;
    }
    return 0;
}