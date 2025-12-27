#include <iostream>
#include <deque>
using namespace std;

int main()
{
    int n{}, m{}, c{}, max{}, sum1{}, sum2{};
    deque<int> g;
    bool turn = 0;

    cin >> n;
    m = n;

    while (n--)
    {
        cin >> c;
        g.push_back(c);
    }

    n = m;

    while (n--)
    {
        int f = g.front(), b = g.back();

        max = 0;

        if (b < f)
        {
            max = f;
            g.pop_front();
        }
        else if (b > f || g.size() == 1)
        {
            max = b;
            g.pop_back();
        }

        if (!turn)
        {
            sum1 += max;
        }
        else
        {
            sum2 += max;
        }

        turn = !(turn);
    }

    cout << sum1 << " " << sum2;
    return 0;
}