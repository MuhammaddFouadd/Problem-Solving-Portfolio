#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{

    //  freopen("w.txt" , "r" , stdin) ;
    vector<int> s{};
    int m{};

    for (int i = 0; i < 4; ++i)
    {
        int c;
        cin >> c;
        s.push_back(c);
    }
    for (int i = 0; i < 4; ++i)
    {
        for (int j = i + 1; j < 4; ++j)
        {
            if (s[i] == s[j] & s[i] != -1)
            {
                ++m;
                s[j] = -1;
            }
        }
    }

    cout << m;
    return 0;
}