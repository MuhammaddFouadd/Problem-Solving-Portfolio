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

#define ncin(v, n)              \
    for (int i = 0; i < n; ++i) \
    {                           \
        int k{};                \
        cin >> k;               \
        v.push_back(k);         \
    }

#define int long long
#define pb push_back

#define F first
#define S second

#define mp make_pair
#define pii pair<int, int>

#define lop(i, a, b) for (int i = a; i <= b; i++)
#define lopr(i, a, b) for (int i = a; i >= b; i--)
#define fr(i, b) for (int i = 0; i < b; i++)

#define vi vector<int>
#define vvi vector<vector<int>>

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

int l, r, mid, k, ans;

bool solve(int mid1, int k1, int r1)
{
    int cnt = 0;
    while (mid1)
    {
        cnt += mid1;
        mid1 /= k1;
    }
    if (cnt >= r1)
        return true;
    return false;
}

void operate()
{
    int target;
    cin >> target >> k;
    l = 1;
    r = target;

    while (l <= r)
    {
        mid = l + (r - l) / 2;
        if (solve(mid, k, target))
        {
            r = mid - 1;
            ans = mid;
        }
        else
        {
            l = mid + 1;
        }
    }
    cout << ans;
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