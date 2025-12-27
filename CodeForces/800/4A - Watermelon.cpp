#include <iostream>
// #include "CP.h"
// #include <bits/stdc++.h>

using namespace std;

int main()
{
    // freopen("/Users/abu-bakr/data/الكلية/codeforces/in.txt", "rt", stdin);
    // freopen("/Users/abu-bakr/data/الكلية/codeforces/out.txt", "wt", stdout);

    int a;
    cin >> a;

    if (a % 2 == 0 && a > 2)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}