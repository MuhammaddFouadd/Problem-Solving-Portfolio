#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    double n{}, t{}, k{}, d{}, o1{}, o2{};
    cin >> n >> t >> k >> d;

    o2 = d;

    int nk = ceil(n / k);

    for (int i = 0; i < nk; ++i)
    {
        if (o1 > o2)
        {
            o2 += t;
        }
        else
        {
            o1 += t;
        }
    }

    if (max(o2, o1) < t * nk)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}