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
#include <ext/pb_ds/assoc_container.hpp>

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
#define vi vector<int>
#define vvi vector<vector<int>>
#define loop(i, a, b) for (int i = a; i <= b; i++)
#define loopr(i, a, b) for (int i = a; i >= b; i--)
#define foor(i, b) for (int i = 0; i < b; i++)
#define all(v) v.begin(), v.end()
#define allr(v) v.rbegin(), v.rend()
#define yes cout << "Yes";
#define no cout << "No";

using namespace std;

int n, k, ans;

bool solve(int cur, vector<int> &ingNeed, vector<int> &ingCur)
{
    int cnt{};
    for (int i = 0; i < n; ++i)
    {
        if (ingNeed[i] * cur > ingCur[i])
            cnt += (ingNeed[i] * cur - ingCur[i]);

        if (cnt > k)
            return false;
    }

    return true;
}

void operate()
{
    cin >> n >> k;

    vector<int> ingNeed(n);
    for (auto &i : ingNeed)
    {
        cin >> i;
    }

    vector<int> ingCur(n);
    for (auto &i : ingCur)
    {
        cin >> i;
    }
    int l = 0, r = 2e9;

    while (l <= r)
    {
        int cur = (l + r) / 2;

        if (solve(cur, ingNeed, ingCur))
        {
            l = cur + 1;
            ans = cur;
        }
        else
        {
            r = cur - 1;
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