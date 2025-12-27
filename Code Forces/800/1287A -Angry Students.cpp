#include <iostream>
#include <vector>
#include <deque>
#include <climits>
#include <math.h>
#include <string>
#include <algorithm>

using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    while (n--)
    {
        int b;
        cin >> b;

        string s;
        cin >> s;

        int c{}, p{};

        for (int i = s.size() - 1; i >= 0; --i)
        {
            if (s[i] == 'P')
            {
                c++;
            }
            else if (s[i] == 'A')
            {
                p = max(p, c);
                c = 0;
            }
        }
        cout << p;
        if (n > 0)
        {
            cout << "\n";
        }
    }
    return 0;
}