#include <iostream>
#include <vector>
#include <math.h>
#include <climits>
#include <chrono>
#include <string>
#include <sstream>
#include <cmath>
#include <iomanip>
#include <cstring>
#include <string>
#include <algorithm>
#include <array>
#include <vector>
#include <deque>
#include <set>
#include <bitset>
#include <unordered_set>
#include <map>
#include <queue>
#include <stack>

#define fastIO                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);                 \
    cout.tie(nullptr)

#define cin(v)         \
    for (auto &el : v) \
        cin >> el;

#define cout(v)            \
    for (auto el : v)      \
        cout << el << " "; \
    cout << '\n';

#define int long long
#define pb push_back

#define F first
#define S second

#define MP make_pair
#define pii pair<int, int>

#define lop(i, a, b) for (int i = a; i <= b; i++)
#define lopr(i, a, b) for (int i = a; i >= b; i--)
#define fr(i, b) for (int i = 0; i < b; i++)

#define vi vector<int>
#define vvi vector<vector<int>>
#define fv(v)         \
    for (auto &i : v) \
    {                 \
        cin >> i;     \
    }

#define prefix(v)                      \
    for (int i = 1; i < v.size(); i++) \
    {                                  \
        v[i] += v[i - 1];              \
    }

#define sum(v) accumulate(v.begin(), v.end(), 0LL)

#define lb lower_bound
#define ub upper_bound

#define srt(v) sort(v.begin(), v.end())
#define all(v) v.begin(), v.end()
#define allr(v) v.rbegin(), v.rend()

#define yes cout << "Yes";
#define no cout << "No";

using namespace std;

int n, ans;

bool solve(int mid, vector<int> &pre)
{
    for (size_t i = 0, j = mid; i < n - mid && j < n; i++, j++)
    {
        if (pre[j] - pre[i] <= 5)
            return true;
    }
    return false;
}

void operate()
{
    cin >> n;
    vi studs(n);
    fv(studs);
    srt(studs);

    int l = 1, r = 2e5;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (solve(mid, studs))
        {
            l = mid + 1;
            ans = mid;
        }
        else
        {
            r = mid - 1;
        }
    }
    cout << ans ;
}

signed main()
{
    fastIO;

    int t = 1;
    // cin >> t;
    while (t--)
    {
        operate();
    }
    return 0;
}