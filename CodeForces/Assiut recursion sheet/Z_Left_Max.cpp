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

void recurse(vector<ll> &v, ll idx, ll maxL)
{
    if (idx > v.size())
        return;
    cout << maxL << " ";
    recurse(v, idx + 1, max(maxL, v[idx]));
}

void solve()
{
    ll n, m;
    if (!(cin >> n))
        return;

    // if (!(cin >> m))
    //     return;

    vector<ll> v(n);
    in(i, v);

    recurse(v, 1, v[0]);
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