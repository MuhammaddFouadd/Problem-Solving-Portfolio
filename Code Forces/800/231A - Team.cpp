#include <iostream>
#include <vector>
#include <math.h>
#include <ostream>
// #include "CP.h"
// #include <bits/stdc++.h>

using namespace std;

int main()
{
    // freopen("/Users/abu-bakr/data/الكلية/codeforces/in.txt", "rt", stdin);
    // freopen("/Users/abu-bakr/data/الكلية/codeforces/out.txt", "wt", stdout);

    int n, t, c{}, r{}, m;
    cin >> n;

    while (n--)
    {
        m = 3;
        c = 0;
        while (m--)
        {
            cin >> t;
            if (t == 1)
                ++c;
        }
        if (c > 1)
            r += 1;
    }

    cout << r;
    return 0;
}

 