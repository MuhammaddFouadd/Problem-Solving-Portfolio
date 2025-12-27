#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{

    //  freopen("w.txt" , "r" , stdin) ;
    string stones, inst;
    cin >> stones >> inst;

    int loc{};
    for (int i = 0; i < inst.size(); ++i)
    {
        if (inst[i] == stones[loc])
        {
            ++loc;
        }
    }

    cout << ++loc;
    return 0;
}