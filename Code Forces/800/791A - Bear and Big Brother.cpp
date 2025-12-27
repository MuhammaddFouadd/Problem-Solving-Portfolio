#include <iostream>
using namespace std;

int main()
{
    int l, b;
    cin >> l >> b;

    int years{};

    if ((1 <= l) && (l <= b) && (b <= 10))
    {
        for (int i = 1; true; i++)
        {
            l = l * 3;
            b = b * 2;
            years = i;

            if (l > b)
                break;
        }
    }

    cout << years;

    return 0;
}