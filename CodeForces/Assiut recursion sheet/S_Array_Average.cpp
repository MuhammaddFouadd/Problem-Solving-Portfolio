#include <iostream>
#include <vector>
#include <cctype>
#include <iomanip>
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
double recurse(vector<ll> &v, int idx)
{
    if (idx == v.size() - 1)
        return double(v[idx]) / v.size();

    return double(v[idx]) / v.size() + recurse(v, idx + 1);
}

void solve()
{
    ll n;
    if (!(cin >> n))
        return;

    vector<ll> v(n);
    in(i, v);

    cout << fixed << setprecision(6) << recurse(v, 0);
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