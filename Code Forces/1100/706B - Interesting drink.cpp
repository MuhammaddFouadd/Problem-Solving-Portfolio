#include <iostream>
#include <vector>
#include <math.h>
#include <climits>

using namespace std;

#define fastIO                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);                 \
    cout.tie(nullptr)

#define int long long

int n, q;

void solve(int coins)
{
}

void operate()
{
    cin >> n;
    vector<int> shops(n, -1);

    for (auto &i : shops)
    {
        cin >> i;
    }

    sort(shops.begin(), shops.end());

    cin >> q;
    for (int i = 0; i < q; ++i)
    {
        if (i != 0)
            cout << endl;

        int coins;
        cin >> coins;

        auto it = upper_bound(shops.begin(), shops.end(), coins);

        if (it == shops.begin())
        {
            cout << 0;
            continue;
        }
        cout << it - shops.begin();
    }
}

signed main()
{
    fastIO;

    int t = 1;
    // cin >> t;
    while (t--)
    {
        operate();
    }
    return 0;
}