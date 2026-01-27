#include <iostream>
#include <vector>
#include <stack>
#include <map>
#include <unordered_map>

using namespace std;

#define int long long

inline void quick()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int ans = 1;

int recurse(int n, int c)
{
    if (c < 1 || n < 1)
    {
        return ans;
    }
    ans *= n;
    return recurse(--n, --c);
}

void solve()
{
    int n;
    cin >> n;

    if (n<3)
    {
        cout << n;
        return;
    }

    if (n % 2 == 0)
        cout << recurse(n - 1, 3);
    else
        cout << recurse(n, 3);
}

signed main()
{
    quick();

    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
        cout << endl;
    }

    return 0;
}