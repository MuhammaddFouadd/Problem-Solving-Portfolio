#include <iostream>
#include <vector>
#include <cctype>
using namespace std;

#define ll long long
#define in(v)                          \
    for (int i = 0; i < v.size(); ++i) \
    {                                  \
        cin >> v[i];                   \
    }
#define out(v)                         \
    for (int i = 0; i < v.size(); ++i) \
    {                                  \
        cout << v[i] << " ";           \
    }
#define frp(n) for (int i = 0; i < (n); ++i)
#define frm(n) for (int i = (n); i > -1; --i)
/*








*/
void recurse(vector<vector<ll>> &num1, const vector<vector<ll>> &num2, int idx1, int idx2)
{
    if (idx2 >= num2[0].size())
    {
        ++idx1;
        idx2 = 0;
    }

    if (idx1 >= num1.size())
        return;

    num1[idx1][idx2] += num2[idx1][idx2];
    recurse(num1, num2, idx1, idx2 + 1);
}

void solve()
{
    ll n, m;
    cin >> n >> m;

    vector<vector<ll>> num1(n, vector<ll>(m));
    for (int j = 0; j < n; ++j)
    {
        in(num1[j]);
    }

    vector<vector<ll>> num2(n, vector<ll>(m));
    for (int j = 0; j < n; ++j)
    {
        in(num2[j]);
    }

    recurse(num1, num2, 0, 0);
    for (int j = 0; j < n; ++j)
    {
        out(num1[j]);
        cout << endl;
    }
}

int main()
{

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