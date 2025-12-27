#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N{};
    cin >> N;
    vector<int> b;

    for (int i = 0; i < N; ++i)
    {
        int k{};
        cin >> k;
        b.push_back(k);
    }

    int shot;
    cin >> shot;

    for (int i = 0; i < shot; ++i)
    {
        int x{}, y{};
        cin >> x >> y;
        if (--x < N)
            b[x + 1] += b[x] - y;
        if (x > 0)
            b[x - 1] += y - 1;
        b[x] = 0;
    }

    for (int i = 0; i < N; ++i)
    {
        cout << b[i];
        if (i != N - 1)
            cout << endl;
    }

    return 0;
}