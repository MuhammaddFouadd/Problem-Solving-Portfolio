#include <iostream>
#include <math.h>
// #include "CP.h"
// #include <bits/stdc++.h>

using namespace std;

int main()
{
    // freopen("/Users/abu-bakr/data/الكلية/codeforces/in.txt", "rt", stdin);
    // freopen("/Users/abu-bakr/data/الكلية/codeforces/out.txt", "wt", stdout);

    long long x, y, a, numx{}, numy{}, xr{}, yr{};
    cin >> x >> y >> a;

    xr = ceil(double(x) / a);
    yr = ceil(double(y) / a);

    if (xr > 1)
    {
        numx += xr;
    }
    else
    {
        numx += 1;
    }

    if (yr > 1)
    {
        numy += yr;
    }
    else
    {
        numy += 1;
    }

    cout << numx * numy;

    return 0;
}

 