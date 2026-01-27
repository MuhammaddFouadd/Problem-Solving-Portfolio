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

bool recurse(ll n, ll test)
{
    if (test == n)
        return 1;
    else if (test > n)
        return 0;

    return recurse(n, test * 10) || recurse(n, test * 20);
}

void solve()
{
    ll n;
    if (!(cin >> n))
        return;

    if (recurse(n, 1))
        cout << "YES";
    else
        cout << "NO";
    cout << "\n";
}

signed main()
{
    fastIO;
    // freopen("in.txt", "rt", stdin);
    // freopen("out.txt", "rt", stdout);

    ll t = 1;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}