#include <iostream>
#include <vector>

using namespace std;

int main()
{

    int n, i, c1{}, c2{}, c3{}, c4{}, total{};
    cin >> n;

    while (n--)
    {
        cin >> i;
        if (i == 1)
            ++c1;
        else if (i == 2)
            ++c2;
        else if (i == 3)
            ++c3;
        else if (i == 4)
            ++c4;
    }

    while (c1 > 0 && c3 > 0)
    {
        ++total;
        --c1;
        --c3;
    }

    while (c2 > 2)
    {
        ++total;
        --c2;
        --c2;
    }

    while (c4)
    {
        ++total;
        --c4;
    }

    while (c1 >= 2 && c2 > 0)
    {
        ++total;
        c1 -= 2;
        --c2;
    }
    while (c1 > 0 && c2 > 0)
    {
        --c2;
        --c1;
        ++total;
    }

    while (c1 >= 4)
    {
        ++total;
        c1 -= 4;
    }
    if (c1 > 0)
    {
        ++total;
        c1 = 0;
    }

    if (c2 > 0)
    {
        ++total;
        --c2;
    }

    while (c3 > 0)
    {
        ++total;
        --c3;
    }

    cout << total;
    return 0;
}