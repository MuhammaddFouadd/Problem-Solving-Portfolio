#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int m = n;

    deque<string> s;

    while (m--)
    {
        string d, f{};
        cin >> d;
        int i = 0;
        while (i < d.size() - 2)
        {
            f += d[i];
            i++;
        }
        f += 'i';
        s.push_back(f);
    }

    m = n;
    while (m--)
    {
        if (m != n - 1)
            cout << endl;
        cout << s.front();
        s.pop_front();
    }
    return 0;
}