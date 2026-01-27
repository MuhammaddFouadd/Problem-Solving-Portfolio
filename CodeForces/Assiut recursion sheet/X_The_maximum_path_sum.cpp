#include <iostream>
#include <vector>
#include <cctype>
#include <iomanip>
using namespace std;

#define ll long long
#define in(i, v)                      \
    for (ll i = 0; i < v.size(); ++i) \
    {                                 \
        cin >> v[i];                  \
    }
#define out(i, v)                     \
    for (ll i = 0; i < v.size(); ++i) \
    {                                 \
        cout << v[i] << " ";          \
    }
#define frp(i, n) for (ll i = 0; i < (n); ++i)
#define frm(i, n) for (ll i = (n); i > -1; --i)
#define fastIO                        \
    ios_base::sync_with_stdio(false); \
    cout.tie(nullptr);                \
    cin.tie(nullptr);
/*








*/

ll recurse(vector<vector<ll>> &v, int i, int j)
{
    if (j >= v[0].size() || i >= v.size())
        return -1e7;
    else if (j == v[0].size() - 1 && i == v.size() - 1)
        return v[i][j];

    return v[i][j] + max(recurse(v, i + 1, j), recurse(v, i, j + 1));
}

void solve()
{
    ll n, m;
    if (!(cin >> n))
        return;

    if (!(cin >> m))
        return;

    vector<vector<ll>> v(n, vector<ll>(m));
    frp(i, n)
    {
        frp(j, m)
        {
            cin >> v[i][j];
        }
    }

    cout << recurse(v, 0, 0);
}

signed main()
{
    fastIO;
    // freopen("in.txt", "rt", stdin);
    // freopen("out.txt", "rt", stdout);

    ll t = 1;
    // cin >> t ;

    while (t--)
    {
        solve();
    }

    return 0;
}