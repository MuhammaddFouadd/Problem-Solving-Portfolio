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
ll cnt{};
ll recurse(ll n)
{
    if (n <= 1)
        return 1;

    if (n % 2)
        return 1 + recurse(3 * n + 1);
    else
        return 1 + recurse(n / 2);
}

void solve()
{
    ll n;
    cin >> n;
    cout << recurse(n);
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