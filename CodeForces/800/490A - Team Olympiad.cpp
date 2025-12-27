#include <iostream>
// #include "CP.h"
#include <bits/stdc++.h>

using namespace std;

int main()
{
    // freopen("/Users/abu-bakr/data/الكلية/codeforces/in.txt", "rt", stdin);
    // freopen("/Users/abu-bakr/data/الكلية/codeforces/out.txt", "wt", stdout);

    int n;
    cin >> n;

    vector<int> v;
    int ones{}, twos{}, threes{};

    for (int i = 0; i < n; ++i)
    {
        int d;
        cin >> d;
        v.push_back(d);
        if (d == 1)
            ++ones;
        else if (d == 2)
            ++twos;
        else
            ++threes;
    }

    if (ones < 1 || twos < 1 || threes < 1)
    {
        cout << 0;
        return 0;
    }

    int team = min(ones, min(twos, threes));

    vector<vector<int>> f;
    f.resize(team);

    for (int j = 0; j < team; ++j)
    {
        bool one = 0, two = 0, three = 0;
        for (int i = 0; i < v.size(); ++i)
        {
            if (v[i] == 1 && !one)
            {
                f[j].push_back(i + 1);
                v[i] = -1;
                one = !one;
            }
            else if (v[i] == 2 && !two)
            {
                f[j].push_back(i + 1);
                v[i] = -1;
                two = !two;
            }
            else if (v[i] == 3 && !three)
            {
                f[j].push_back(i + 1);
                v[i] = -1;
                three = !three;
            }
        }
    }

    cout << team;
    for (int j = 0; j < team; ++j)
    {
        cout << endl;

        for (int i = 0; i < 3; ++i)
        {
            cout << f[j][i];
            if (i != 2)
                cout << " ";
        }
    }
    return 0;
}

 