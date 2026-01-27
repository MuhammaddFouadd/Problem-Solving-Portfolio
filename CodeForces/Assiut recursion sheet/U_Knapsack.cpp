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

void recurse(vector<pair<ll, ll>> &v, ll w, ll idx, ll curW, ll &mx, vector<pair<ll, ll>> &v2)
{
    if (curW >= w || idx >= v.size())
    {
        ll items{};
        for (ll i = 0; i < v2.size(); ++i)
        {
            items += v2[i].second;
        }
        mx = max(mx, items);
        return;
    }

    for (ll i = idx; i < v.size(); ++i)
    {
        if (curW + v[i].first > w)
        {
            recurse(v, w, i + 1, curW, mx, v2);
            continue;
        }

        v2.push_back(v[i]);
        recurse(v, w, i + 1, curW + v[i].first, mx, v2);
        v2.pop_back();
    }
}

void solve()
{
    ll n, w;
    if (!(cin >> n))
        return;

    if (!(cin >> w))
        return;

    vector<pair<ll, ll>> v(n);
    frp(i, n)
    {
        cin >> v[i].first;
        cin >> v[i].second;
    }

    ll mx = 0;
    vector<pair<ll, ll>> v2;
    recurse(v, w, 0, 0, mx, v2);
    cout << mx;
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