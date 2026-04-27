#include <iostream>
#include <vector>
#include <map>
#include <stack>
#include <set>
#include <algorithm>
#include <queue>
 
using namespace std;
 
#define int long long
#define br << '
'
#define sp << ' '
 
void solve()
{
    int n, m;
    cin >> n >> m;
 
    vector<int> book(n);
    for (int i = 0; i < n; i++)
    {
        cin >> book[i];
    }
 
    int res = 0, r = 0, total = 0;
    for (int i = 0; i < n; i++)
    {
        if (r >= n)
            break;
 
        while (r < n and total + book[r] <= m)
        {
            total += book[r++];
        }
 
        res = max(res, r - i);
        total -= book[i];
    }
 
    cout << res;
}
 
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
 
 
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}