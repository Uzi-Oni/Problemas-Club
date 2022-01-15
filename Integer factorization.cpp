#include <iostream>
#include <map>
using namespace std;

map<long long, long long> mp;

int main()
{
    long long n;
    while(cin >> n && n)
    {
        mp.clear();
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
                mp[i] = cnt;
            }
        }
        if(n != 1)
        {
            mp[n] = 1;
        }
        map<long long, long long>::iterator endd = mp.end();
        for(register map<long long, long long>::iterator it = mp.begin(); it != endd; ++it)
        {
            cout << it -> first << "^" << it -> second << " ";
        }
        cout << endl;
    }
    return 0;
}