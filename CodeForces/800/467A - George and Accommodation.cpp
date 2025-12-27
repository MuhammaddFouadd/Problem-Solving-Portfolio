#include <iostream>

using namespace std;

int main()
{

    int n, r, p, c{};
    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        cin >> p >> r;
        if (p <= r - 2)
            ++c;
    }

    cout << c;
    return 0;
}

 