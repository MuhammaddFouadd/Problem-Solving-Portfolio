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

    int n, c{};
    string f;

    cin >> n;

    while (n--)
    {
        cin >> f;
        if (f == "--X" || f == "X--")
            --c;
        else if (f == "++X" || f == "X++")
            ++c;
    }

    cout << c;
    return 0;
}

 