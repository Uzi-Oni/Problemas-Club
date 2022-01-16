#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    vector<char>st;
    for (int i = 0; i < (int)s.length(); i++)
    {
        if (!st.empty() && st.back() == s[i])
        {
            st.pop_back();
        }
        else
        {
            st.push_back(s[i]);
        }
    }
    if (st.empty())
    {
        printf("Empty String\n");
    }
    else
    {
        for (int i = 0; i < (int)st.size(); i++)
        {
            printf("%c", st[i]);
        }
        printf("\n");
    }
    return 0;
}