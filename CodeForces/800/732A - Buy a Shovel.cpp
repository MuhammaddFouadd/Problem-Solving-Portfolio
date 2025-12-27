#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{

    //  freopen("w.txt" , "r" , stdin) ;
    int s{}, r{}, num{};
    cin >> s >> r;

    for (int i = 1; i < 11; ++i)
    {
        if ((s * i % 10) == r || (s * i % 10) == 0)
        {
            num = i;
            break;
        }
    }

    cout << num;
    return 0;
}