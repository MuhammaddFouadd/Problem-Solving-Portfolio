#include <iostream>
#include <vector>
#include <math.h>
#include <climits>

using namespace std;

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

void IO()
{
    freopen("input.txt", "rt", stdin);
    freopen("output.txt", "wt", stdout);
}

#define int long long

int n, l, r, x;
vector<int> problems;

int solve(int idx, int cnt, int sum, int mx, int mn)
{
    if (idx == n)
    {
        if (cnt >= 2 && sum >= l && sum <= r && mx - mn >= x)
            return 1;
        return 0;
    }

    return solve(idx + 1, cnt, sum, mx, mn) + solve(idx + 1, cnt + 1, sum + problems[idx], max(mx, problems[idx]), min(mn, problems[idx]));
}

signed main()
{
    fastIO();

    // #ifndef ONLINE_JUDGE
    //     IO();
    // #endif

    cin >> n >> l >> r >> x;
    problems.resize(n);

    for (auto &i : problems)
    {
        cin >> i;
    }

    cout << solve(0, 0, 0, LLONG_MIN, LLONG_MAX);

    return 0;
}