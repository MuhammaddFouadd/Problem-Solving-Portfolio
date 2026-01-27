#include <iostream>
#include <vector>
#include <cctype>
using namespace std;

#define ll long long
#define in(i, v)                       \
    for (int i = 0; i < v.size(); ++i) \
    {                                  \
        cin >> v[i];                   \
    }
#define out(i, v)                      \
    for (int i = 0; i < v.size(); ++i) \
    {                                  \
        cout << v[i] << " ";           \
    }
#define frp(i, n) for (int i = 0; i < (n); ++i)
#define frm(i, n) for (int i = (n); i > -1; --i)
#define fastIO                        \
    ios_base::sync_with_stdio(false); \
    cout.tie(nullptr);                \
    cin.tie(nullptr);
/*








*/
bool recurse(vector<ll> &v, ll l, ll r)
{
    if (l > r)
        return true;

    if (v[l++] != v[r--])
        return false;

    return recurse(v, l, r);
}

void solve()
{
    ll n;
    if (!(cin >> n))
        return;

    vector<ll> v(n);
    in(i, v);

    if (recurse(v, 0, v.size() - 1))
        cout << "YES";
    else
        cout << "NO";
}

int main()
{
    fastIO;
    // freopen("in.txt", "rt", stdin);
    // freopen("out.txt", "rt", stdout);

    int t = 1;
    // cin >> t ;

    while (t--)
    {
        solve();
    }

    return 0;
}