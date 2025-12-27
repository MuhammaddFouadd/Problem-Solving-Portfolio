#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    string set;
    getline(cin, set);

    int num{}, arr[27]{};

    for (int i = 0; i < set.size(); ++i)
    {
        if (set[i] >= 'a' && set[i] <= 'z')
        {
            arr[int(set[i]) - int('a')] += 1;
        }
    }

    for (int i = 0; i < 27; ++i)
    {
        if (arr[i] != 0)
            num += 1;
    }

    cout << num;

    return 0;
}