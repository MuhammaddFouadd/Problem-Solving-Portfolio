#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{

    int N;
    cin >> N;

    vector<pair<int, int>> v;
    for (int i = 0; i < N; i++)
    {
        int x, y;
        cin >> x >> y;
        v.push_back(make_pair(x, y));
    }

    int time{};

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (v[i].first == v[j].second)
            {
                time += 1;
            }
        }
    }

    cout << time;
    return 0;
}