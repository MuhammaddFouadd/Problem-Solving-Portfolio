#include <iostream>
#include <cmath>
#include <iomanip>
#include <algorithm>
#include <cmath>
#include <vector>
#include <string>
#include <cctype>
#include <functional>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; ++i)
    {
        if (n % 10 == 0)
        {
            n /= 10;
        }
        else
        {
            --n;
        }
    }
    cout << n;
}